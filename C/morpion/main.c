
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void ft_putchar(char c) {
  write(1, &c, 1);
}

void ft_putstr(char *str) {
  while (*str) {
    ft_putchar(*str);
    str++;
  }
}

void ft_print_grid(int **plays) {
    int  i;

    i = 0;
    ft_putstr("  A B C \n");
    while (i <= 2) {
      ft_putstr(" +-+-+-+\n");
      printf("%s|%s|%s|%s|\n", '0' + i + 1, '0' + play[i][0], '0' + plays[i][1], '0' + plays[i][2]);
      ft_putstr(" +-+-+-+\n");
    }
}

int  tictactoe(void) {

    int  **plays = {{0,0,0},{0,0,0},{0,0,0}};
    printf("Bienvenue dans le tictactoe!!");
    while (game) {
      
    }


    ft_print_grid(plays);
}

int main(void)
{
  int   winner;

  winner = tictactoe();
  if (winner == 1)
    ft_putstr("P1 wins");
  else if (winner == 2)
    ft_putstr("P2 wins");
  else
    ft_putstr("Null!");
  return (0);
}
