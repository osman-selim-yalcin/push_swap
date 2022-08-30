#include "push_swap.h"

void check_all(int argc, char **argv)
{
	check_character(argc, argv);
	check_space(argc, argv);
	check_symbol(argc, argv);
}

int main(int argc, char **argv)
{
	t_info *last;
	int l;

	if (argc == 1)
		exit (0);
	check_all(argc, argv);
	l = counter(argc, argv);
	last = malloc(sizeof(t_info));
	last->l = l;
	last->a = malloc(sizeof(int) * last->l);
	last->b = malloc(sizeof(int) * last->l);
	last->a_len = last->l;
	last->b_len = 0;
	last->oldaidex = 1000;
	last->oldbindex = 1000;
	last->a = before_atoi(argc, argv, last->a);
	check_duplicate(last);
	duplicate(last);
	start(last);
	bstart(last);
	finish(last);

	return 0;
}
