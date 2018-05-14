

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

}

int main(void)
{
  winner = tictactoe();
  if (winner == 1)
    ft_putstr("P1 wins");
  else if (winner == 2)
    ft_putstr("P2 wins");
  else
    ft_putstr("Null!")
  return (0);
}
