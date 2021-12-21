#include <stdio.h>
#include <math.h>
int main()
{
	int num1, num2, num3, num4, a;
	printf("Enter first number:\n");
	scanf_s("%d", &num1);
	printf("Enter second number:\n");
	scanf_s("%d", &num2);

	printf("\n");
	int j = 1;
	for (int i = 1; i< num2; i++)
	{
		j = j * 10;
		a = j;
	}

	num4 = a + num1 - 1;
	num3 = num1 * pow(10, num2-1);
	
	printf("Answer1 = %d\n", num3);
	printf("Answer2 = %d\n", num4);
	return 0;
}