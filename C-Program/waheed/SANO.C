#include <stdio.h>
#include<conio.h>
void main()
{

int a[2][2]={{200,341},{1,6}};
clrscr();

printf("%p [0][0]\n",&a[0][0]);
printf("%p [0][1]\n",&a[0][1]);

printf("%d \n",&a[0][1] - &a[0][0]);




}
