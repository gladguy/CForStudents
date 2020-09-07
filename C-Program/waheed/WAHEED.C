#include <stdio.h>
#include<conio.h>
int main() {

  short a;
  long b;
  long long c;
  long double d;
  char choice;

  choice = 'y';

  a = 32769;

  clrscr();

  printf(" Choice %c",choice);
  printf("Size of Char %d\n",sizeof(choice));

  printf("size of short = %d bytes\n", sizeof(a));
  printf("Value of a = %d\n",a);

  printf("size of long = %d bytes\n", sizeof(b));
  printf("size of long long = %d bytes\n", sizeof(c));
  printf("size of long double= %d bytes\n", sizeof(d));
  return 0;
}