/*
** my_bsq.h for FORGOT IT in /home/munoz_d/CPE_2015_BSQ/include
** 
** Made by Munoz David
** Login   <munoz_d@epitech.net>
** 
** Started on  Mon Dec 21 10:36:39 2015 Munoz David
** Last update Mon Dec 21 10:36:40 2015 Munoz David
*/
#ifndef BSQ_H_
# define BSQ_H_

void    show_deriv_tab(char **tab);
void    parse_int_tab(char **char_tab, int **int_tab);
void    square(char **tab, int x, int y, int max_val);
void    free_primi_tab(char ** deriv_tab, int **primi_tab);
void    free_deriv_tab(char **tab);
char    *my_realloc(char *old, int size);
char    *line(const int fd);
char    **init_deriv_tab(int file, int nbl);
int     **init_primi_tab(char **deriv_tab);
int     tab_count(char **tab, char type);
int     minval(int **tab, int i, int j);
int     arg_check(int ac);
int     gnl_check(char *str);
void	print_deriv_tab(char **tab);

#endif /* !BSQ_H_ */
