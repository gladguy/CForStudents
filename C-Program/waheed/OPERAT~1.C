// Working of arithmetic operators
// Write a program to a2 + b2 + 2ab
#include <stdio.h>
int main()
{
	int a = 9,b = 4, c;

	int a2;
	int b2;
	int ab2;
	int result;

	c = a+b;
	printf("a+b = %d \n",c);
	c = a-b;
	printf("a-b = %d \n",c);
	c = a*b;
	printf("a*b = %d \n",c);
	c = a/b;
	printf("a/b = %d \n",c);
	c = a%b;
	printf("Remainder when a divided by b = %d \n",c);

	a2 = a*a;
	b2 = b*b;
	ab2 = 2 * a*b;

	result = a2 + b2 + ab2;

	printf("Formula Result %d",result);

	scanf("%d",&a);

	return 0;
}
