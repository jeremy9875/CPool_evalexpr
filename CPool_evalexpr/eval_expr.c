/*
** eval_expr.c for eval_expr in /home/jeremy.el-kaim/CPool_evalexpr
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Tue Oct 25 09:10:00 2016 jeremy elkaim
** Last update Fri Oct 28 22:13:01 2016 jeremy elkaim
*/
#include <stdlib.h>

int	main(int ac, char **av, int i, int j)
{
  int	myreturn;

  myreturn = 0;
  calc_add(av[1]);
  malloc(sizeof(int) * i);
  malloc(sizeof(int) * j);
  while (av[0][i] != '\0')
    {
      if (av[i][1] == 45 && (av[i][2] == '\0'))
	{
	  j = j + 1;
	  i = i + 1;
	}
    }
  i = 0;
  while ((av[i][j] != '\0') && (j != 0) && (myreturn == 0))
    {
      if ((av[i][j] < 48) || (av[i][j] > 57))
	myreturn = 0;
      i = i + 1;
    }
  free(i);
  free(j);
  return (0);
}

int	multiple(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (i != 0 && i > 0)
    {
      *s1 * *s2;
      i = i - 1;
    }
  return (0);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  return (i);
}

int	calc_sub(char *str)
{
  int	i;
  int	len_str;
  int	result;

  len_str = my_strlen(str);
  i = 0;
  if (str[i] != 45)
    i = i + 1;
  result = (str[i - 1]) - (str[i - 1] - 48);
  if (len_str > 3)
    calc_sub(str[1]);
  my_putchar(result);
  return (0);
}

int	calc_add(char *str)
{
  int	i;
  int	result;
  int	len_str;

  len_str = my_strlen(str);
  i = 0;
  if (str[i] != 43)
    i = i + 1;
  result = (str[i - 1]) + (str[i + 1] - 48);
  my_putchar (result);
  if (len_str > 3)
    calc_add(str[1]);
  my_putchar(result);
  return (0);
}
