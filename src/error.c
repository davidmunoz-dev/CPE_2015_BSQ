/*
** error.c for l in /home/munoz_d/CPE_2015_BSQ/src
** 
** Made by Munoz David
** Login   <munoz_d@epitech.net>
** 
** Started on  Sun Dec 20 21:36:25 2015 Munoz David
** Last update Sun Dec 20 21:37:48 2015 Munoz David
*/

#include <unistd.h>
#include "../include/my_bsq.h"
#include "../include/my.h"

int	arg_check(int ac)
{
  if (ac != 2)
    {
      my_putstr("ERROR : Invalide usage.\nUsage : ./bsq [map.txt]\n");
      return (-1);
    }
  return (0);
}

int	gnl_check(char *str)
{
  int   nbl;

  if (str == NULL)
    {
      my_putstr("ERREUR : Le fichier est vide\n");
      return (-1);
    }
  nbl = my_getnbr(str);
  if (nbl == 0)
    {
      my_putstr("ERREUR : Le format de la map est incorrect\n");
      return (-1);
    }
  return (nbl);
}
