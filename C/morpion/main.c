
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

int is_in_str(char c, char *s) {
  int i;

  i = 0;
  while(s[i]) {
    if (s[i] == c)
      return (1);
    i++;
  }
  return (0);
}

int   **play(int j) {
  char col;
  char row;
  int res;

  col = '0';
  while (!(is_in_str(col, "ABC")) {
    printf("Entrez une column: ");
    res = scanf("%c", &col);
  }

  row = 'A';
  while (!(is_in_str(row, "012")) {
    printf("Entrez une column: ");
    row = scanf("%c", &row);
  }

}

int  tictactoe(void) {
    int   joueur = 0;
    int   game = 1;
    int  **plays = {{0,0,0},{0,0,0},{0,0,0}};
    printf("Bienvenue dans le tictactoe!!");
    while (game) {
        plays = play(joueur);



        if (win(plays))
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
