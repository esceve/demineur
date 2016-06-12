/*
** main.c for demineur  in /home/esceve/Documents/C/demineur/srcs
** 
** Made by Clement Scherpereel
** Login esceve <clement.scherpereel@outlook.fr>
** 
** Started on  Fri Jun 10 09:56:11 2016 Clement Scherpereel
** Last update Fri Jun 10 17:33:42 2016 Clement Scherpereel
*/

#include	<stdio.h>
#include	<stdlib.h>
#include	<time.h>
#include	<unistd.h>
void		my_putchar(char c)
{
  write(1, &c, 1);
}

void		my_putstr(char* c)
{
  int		i;

  i = 0;

  while (c[i] != '\0')
    {
      my_putchar(c[i]);
      i++;
    }
}

void		menu()
{
  my_putstr("----CHOISIR NIVEAU---- \n");
  my_putstr(" 1 : NIV 1\n");
  my_putstr(" 2 : NIV 2\n");
  my_putstr(" 3 : NIV 3\n");
}

int		N_mine(void)
{
  int		n;
  int		mine;

  n = 0;
  scanf("%d", &n);
  mine = 0;
  if (n == 1)
    {
      mine = 10;
    }
  else if (n == 2)
    {
      mine = 25;
    }
  else if (n == 3)
    {
      mine = 50;
    }
  else
    my_putstr("veuillez recommenceez votre choix");
  return (mine);
}
void		gen_map()
{

}

int		main()
{
  int mine;

  mine = 0;
  menu();
  mine = N_mine();
  printf("%d\n", mine);
  return (EXIT_SUCCESS);
}
