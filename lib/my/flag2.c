/*
** fonction2.c for pointeur_fonction in /PSU_2015_my_printf/src
**
** Made by munoz david
** Login   <munoz_d@epitech.net>
**
** Started on  Thu Nov 12 10:27:48 2015 munoz david
** Last update Fri Nov 13 18:59:45 2015 munoz david
*/

#include <stdarg.h>

int	min_hexa(va_list ap)
{
  my_put_base(va_arg(ap, unsigned int), "0123456789abcdef");
}

int	maj_hexa(va_list ap)
{
  my_put_base(va_arg(ap, unsigned int), "0123456789ABCDEF");
}

int	unsign(va_list ap)
{
  my_put_unsign(va_arg(ap, unsigned int));
}

int	hexa_p(va_list ap)
{
  my_putstr("0x");
  my_adresse(va_arg(ap, void *), "0123456789abcdef");
}

int	maj_s(va_list ap)
{
  my_S(va_arg(ap, char *));
}
