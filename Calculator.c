#include <stdio.h>
int main()
{
	int a,b,choice,res;
	printf("--- OPERATION AND EXPRESSIONS ---\n");
	printf("Enter First Number :");
	scanf("%d",&a);
	printf("Enter Second Number :");
	scanf("%d",&b);
	printf(" ----- Menu -----\n");
	printf("1 : Addition\n");
	printf("2 : Subtraction\n");
	printf("3 : Multiplication\n");
	printf("4 : Division\n");
	printf("5 : Modulus\n");
	printf("Enter Your Choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			res=a+b;
			printf("Result = %d",res);
			break;
		case 2:
			res=a-b;
			printf("Result = %d",res);
			break;
		case 3:
			res=a*b;
			printf("Result = %d",res);
			break;
		case 4:
			if (b!=0)
			{
				res=a/b;
				printf("Result = %d",res);
			}
			else
			{
				printf("Divition By Zero is NOT Possible");
			}
			break;
		case 5:
			if (b!=0)
			{
				res=a%b;
				printf("Result = %d",res);
			}
			else
			{
				printf("Divition By Zero is NOT Possible");
			}
			break;
		default:
			printf("Invalid Choice.");
	}
	return 0;
}