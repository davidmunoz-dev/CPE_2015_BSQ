/*
** free.c for hea in /home/munoz_d/CPE_2015_BSQ/src
** 
** Made by Munoz David
** Login   <munoz_d@epitech.net>
** 
** Started on  Sun Dec 20 21:37:57 2015 Munoz David
** Last update Sun Dec 20 21:38:02 2015 Munoz David
*/

#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include "../include/my_bsq.h"
#include "../include/my.h"

void	free_deriv_tab(char **tab)
{
  int   i;

  i = 0;
  while (tab[i])
    free(tab[i++]);
  free(tab);
}

void	free_primi_tab(char **deriv_tab, int **primi_tab)
{
  int   i;

  i = 0;
  while (deriv_tab[i])
    free(primi_tab[i++]);
  free(primi_tab);
}
