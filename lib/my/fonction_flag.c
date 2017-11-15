/*
** f_aide.c for Flags in /rendu/rendu_Systeme_Unix/PSU_2015_my_printf/src
**
** Made by munoz david
** Login   <munoz_d@epitech.net>
**
** Started on  Thu Nov 12 10:19:14 2015 munoz david
** Last update Sat Nov 14 16:32:17 2015 munoz david
*/

#include <stdarg.h>

int	my_put_base(unsigned int nb, char *base)
{
  unsigned int  b;
  int   str;

  str = my_strlen(base);
  if (nb < 0)
    nb = -nb;
  if (nb >= str)
    {
      b = nb / str;
      my_put_base(b, base);
    }
  my_putchar(base[nb % str]);
}

int	my_put_unsign(unsigned int nb)
{
  int   reste;

  if (nb >= 0)
    {
      if (nb >= 10)
        {
          reste = nb % 10;
          nb = (nb - reste) / 10;
          my_put_unsign(nb);
          my_putchar(reste + 48);
        }
      else
        {
          my_putchar(nb + 48);
        }
    }
  if (nb < 0)
    {
      nb = nb * (-1);
      my_putchar(45);
      my_put_unsign(nb);
    }
}

int	zero(unsigned int nb)
{
  if (nb < 8)
    my_putstr("00");
  else if (nb >= 8 && nb < 64)
    my_putchar('0');
  return (nb);
}

int	my_S(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 32 || str[i] >= 127)
        {
          my_putchar('\\');
          zero(str[i]);
          my_printf_octal(str[i]);
        }
      else
        my_putchar(str[i]);
      i = i + 1;
    }
}

int	my_printf_octal(unsigned int nb)
{
  int   reste;

  if (nb >= 0)
    {
      if (nb >= 8)
        {
          reste = nb % 8;
          nb = (nb - reste) / 8;
          my_printf_octal(nb);
          my_putchar(reste + 48);
        }
      else
        {
          my_putchar(nb + 48);
        }
    }
  if (nb < 0)
    {
      nb = nb * (-1);
      my_putchar(45);
      my_printf_octal(nb);
    }
}
