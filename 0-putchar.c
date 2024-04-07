#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int ft_putchar(int c);//if write function can't write the argument to terminal screen the ft_putchar function returns -1;

int ft_putchar(int c)
{
  return(write(1,&c,1)); 
}

int main(void)
{
  int i;
  char *str;
  
  i = 0;
  str = "_putchar\n";
  while(str[i])
    if(ft_putchar(str[i++]) == -1)
      return(1);
  return (0);
}
