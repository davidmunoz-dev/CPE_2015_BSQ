/*
** main.c for lo in /home/munoz_d/CPE_2015_BSQ/src
** 
** Made by Munoz David
** Login   <munoz_d@epitech.net>
** 
** Started on  Sun Dec 20 21:38:17 2015 Munoz David
** Last update Sun Dec 20 22:38:28 2015 Munoz David
*/

#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include "../include/my_bsq.h"
#include "../include/my.h"

int	main(int ac, char **av)
{
  char  **deriv_tab;
  int   **primitive_tab;
  int   file;
  char  *str;
  int   nblev;

  if (arg_check(ac) == -1)
    return (0);
  file = open(av[1], O_RDONLY);
  str = line(file);
  if (gnl_check(str) == -1)
    return (0);
  nblev = gnl_check(str);
  deriv_tab = init_deriv_tab(file, nblev);
  primitive_tab = init_primi_tab(deriv_tab);
  parse_int_tab(deriv_tab, primitive_tab);
  free(str);
  free_primi_tab(deriv_tab, primitive_tab);
  free_deriv_tab(deriv_tab);
  close(file);
  return (0);
}

char	**init_deriv_tab(int file, int nbl)
{
  char  **tab;
  int   i;
  char  *str;

  i = 0;
  if (nbl == 0)
    return (0);
  tab = malloc(sizeof(char *) * (nbl + 1));
  if (tab == NULL)
    return (0);
  while (str = line(file))
    tab[i++] = str;
  tab[i] = NULL;
  free(str);
  return (tab);
}

void	print_deriv_tab(char **tab)
{
  int   i;

  i = 0;
  while (tab[i] != '\0')
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i++;
    }
}
