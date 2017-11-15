/*
** fonction_flag2.c for lol in /home/munoz_d/PSU_2015_my_printf/src
**
** Made by munoz david
** Login   <munoz_d@epitech.net>
**
** Started on  Fri Nov 13 18:50:36 2015 munoz david
** Last update Sat Nov 14 16:32:41 2015 munoz david
*/

#include <stdarg.h>

int	my_adresse(unsigned long int nb, char *base)
{
  unsigned long int	b;
  int	str;

  str = my_strlen(base);
  if (nb < 0)
    nb = -nb;
  if (nb >= str)
    {
      b = nb / str;
      my_adresse(b, base);
    }
  my_putchar(base[nb % str]);
}
