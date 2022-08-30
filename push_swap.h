#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "printf/ft_printf.h"
#include "libft/libft.h"
#include "stdlib.h"

typedef struct s_info{
	int *a;
	int *b;
	int a_len;
	int b_len;
	int oldaidex;
	int oldbindex;
	int way;
	int way2;
	int l;

}	t_info;

int counter(int argc, char **argv);
void check_all(int argc, char **argv);
void check_character(int argc, char **argv);
void check_symbol(int argc, char **argv);
void check_space(int argc, char **argv);
int *before_atoi(int argc, char **argv, int *arr);
void	check_duplicate(t_info *k);
void rra(t_info *k);
void rrb(t_info *k);
void rrr(t_info *k);
void	sa(t_info *k);
void	sb(t_info *k);
void	ss(t_info *k);
void	pa(t_info	*k);
void	pb(t_info	*k);
void	ra(t_info *k);
void	rb(t_info *k);
void rr(t_info *k);
void	duplicate(t_info *k);
void csort(int *c, int len);
void lastindex(int *c, t_info *k);
void start(t_info *k);
int mean(t_info *k);
void count(t_info *k);
void fonks(int aindex, t_info *k, int bindex);
void gönder(t_info *k);
void bstart(t_info *k);
void lasttouch(t_info *k);
void finish(t_info *k);




void showa(t_info *k);
void showb(t_info *k);
#endif