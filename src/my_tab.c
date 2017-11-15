/*
** my_tab.c for aight in /home/munoz_d/CPE_2015_BSQ/src
** 
** Made by Munoz David
** Login   <munoz_d@epitech.net>
** 
** Started on  Sun Dec 20 22:38:35 2015 Munoz David
** Last update Sun Dec 20 22:38:54 2015 Munoz David
*/

#include <stdlib.h>
#include "../include/my_bsq.h"
#include "../include/my.h"

int	**init_primi_tab(char **deriv_tab)
{
  int   **primi_tab;
  int   i;
  int   j;

  i = tab_count(deriv_tab, 'l');
  j = tab_count(deriv_tab, 'c');
  primi_tab = malloc(sizeof(int *) * i);
  if (primi_tab == NULL)
    return (0);
  i =  0;
  while (deriv_tab[i] != '\0')
    {
      primi_tab[i] = malloc(sizeof(int **) * j);
      j = 0;
      while (deriv_tab[i][j] != '\0')
        {
          if (deriv_tab[i][j] == 'o')
            primi_tab[i][j] = 0;
          else
            primi_tab[i][j] = (j == 0 || i == 0) ? 1 : minval(primi_tab, i , j);
          j++;
        }
      i++;
    }
  return (primi_tab);
}

int	tab_count(char **tab, char type)
{
  int   i;

  i = 0;
  if (type == 'l')
    {
      while (tab[i] != '\0')
        i++;
      return (i);
    }
  else if (type == 'c')
    {
      while (tab[0][i] != '\0')
        i++;
      return (i);
    }
  return (0);
}

int	minval(int **tab, int i, int j)
{
  int   x;
  int   y;
  int   z;

  x = tab[i][j - 1];
  y = tab[i -1][j - 1];
  z = tab[i -1][j];
  if (x <= y && x <= z)
    return (x + 1);
  else if (y <= x && y <= z)
    return (y + 1);
  else if (z <= x && z <= y)
    return (z + 1);
  return (0);
}

void	parse_int_tab(char **char_tab, int **int_tab)
{
  int   x;
  int   y;
  int   i;
  int   j;
  int   max_val;

  i = 0;
  max_val = 0;
  while (char_tab[i] != '\0')
    {
      j = 0;
      while (char_tab[i][j] != '\0')
        {
          if (int_tab[i][j] > max_val)
            {
              max_val = int_tab[i][j];
              x = i;
              y = j;
            }
          j++;
        }
      i++;
    }
  square(char_tab, x, y, max_val);
}

void	square(char **tab, int x, int y, int max_val)
{
  int   save_y;
  int   save_x;

  save_y = y;
  save_x = x;
  while (y != (save_y - max_val))
    {
      x = save_x;
      while (x != (save_x - max_val))
        {
          tab[x][y] = 'x';
          x--;
        }
      y--;
    }
  print_deriv_tab(tab);
}
