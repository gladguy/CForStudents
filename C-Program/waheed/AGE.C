#include<stdio.h>
#include<conio.h>
void main()
{
int age;
int stop;

clrscr();
printf("Enter your age :");

scanf("%d",&age);

if(age >= 18)
{
	printf("Congratulations !!! Your allowed drive %d",age);
}
else
{
	printf("You are too young to drive !\n");
}

scanf("%d",&stop);

}