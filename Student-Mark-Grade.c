#include <stdio.h>

int main()
{
	int m1,m2,m3,total,choice;
	char grade;
	float average;
	printf("=== STUDENT MARK CALCULATOR ===\n");
	printf("Enter First Mark:");
	scanf("%d",&m1);
	printf("Enter Second Mark:");
	scanf("%d",&m2);
	printf("Enter Third Mark:");
	scanf("%d",&m3);
	total=m1+m2+m3;
	average=total/3;
	printf("Total = %d\n",total);
	printf("Average = %.2f\n",average);
	if (40<=m1 && 40<=m2 && 40<=m3)
	{
		printf("Exam = Pass\n");
		if (average >= 90)
		{
			choice = 1;
		}
		else if (average >= 80)
		{
			choice = 2;
		}
		else if (average >= 70)
		{
			choice = 3;
		}
		else if (average >= 60)
		{
			choice = 4;
		}
		else
		{
			choice = 5;
		}
		switch(choice)
		{
			case 1:
				printf("Grade = A+");
				break;
			case 2:
				printf("Grade = A");
				break;
			case 3:
				printf("Grade = B");
				break;
			case 4:
				printf("Grade = C");
				break;
			case 5:
				printf("Grade = D");
				break;
		}
	}
	else
	{
		printf("Exam = Fail\n");
	}
	return 0;
}