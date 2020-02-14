#include<stdio.h>

void main()
{
	int n1,n2;
	char op;
	printf("Enter two numbers and operator(+ - *): ");
	scanf("%d %d %c",&n1,&n2,&op);
	switch(op)
	{
		case '+':
		{
			printf("Sum= %d",n1+n2);
			break;
		}
		case '-':
			{
				printf("Substraction= %d",n1-n2);
				break;
			}
		default:
				printf("Invalid input");
	}
}

