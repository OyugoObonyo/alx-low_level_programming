#include <stdio.h>
#include "holberton.h"
/**
 *print alphabet-a function that prints alphabet  in lowercase
 */
int main(void)
{ int main(void)
  {
    print_alphabet_x10();
    return (0);
  }

void print_alphabet_x10()
{
  char al;
  int count;

  for (al='a';al<='z';al++)
    {
      for (count=0;count<10;count++)
        putchar(al);
    }
  putchar('\n');
}
