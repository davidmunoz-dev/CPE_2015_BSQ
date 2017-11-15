/*
** lines.c for kikoo in /home/munoz_d/CPE_2015_BSQ/src
** 
** Made by Munoz David
** Login   <munoz_d@epitech.net>
** 
** Started on  Sun Dec 20 21:38:10 2015 Munoz David
** Last update Sun Dec 20 21:38:10 2015 Munoz David
*/
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "../include/my_bsq.h"
#include "../include/my.h"

char	*my_realloc(char *old, int size)
{
  int           i;
  char          *new;

  i = 0;
  new = NULL;
  new = malloc((my_strlen(old) + size) * sizeof(char *));
  while (old[i])
    {
      new[i] = old[i];
      i++;
    }
  free(old);
  return (new);
}

char	*line(const int fd)
{
  static char   buff;
  int           rd;
  char          *line;
  int           i;

  i = 0;
  line = malloc(sizeof(char *));
  rd = read(fd, &buff, 1);
  if (rd == 0)
    {
      return (NULL);
    }
  while (buff != '\n')
    {
      if (buff == 0 || buff == '\0')
        return (NULL);
      line = my_realloc(line, 1);
      line[i] = buff;
      read(fd, &buff, 1);
      i++;
    }
  line[i] = '\0';
  return (line);
}
