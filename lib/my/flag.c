/*
** fonction.c for pointeur_fonction in /PSU_2015_my_printf/src
**
** Made by munoz david
** Login   <munoz_d@epitech.net>
**
** Started on  Thu Nov 12 10:27:05 2015 munoz david
** Last update Mon Nov 16 17:06:35 2015 munoz david
*/

#include <stdarg.h>

int	str(va_list ap)
{
  my_putstr(va_arg(ap, char *));
}

int	charact(va_list ap)
{
  my_putchar((char)va_arg(ap, int));
}

int	nbr(va_list ap)
{
  my_put_nbr(va_arg(ap, int));
}
