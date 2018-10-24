#include<stdio.h>
int main()
{
	int n,a,b,Choice;
	printf("Enter the two numbers: ");
	scanf("%d %d",&a,&b);
	printf("Enter your Choice \n1->ADDITION\n2->SUBSTRACTION\n3->MULTIPLICATION\n4->DIVISION\n");
	scanf("%d",&Choice);
	switch(Choice)
	{
		case 1:
			printf("%d",a+b);
			break;
		case 2:
			printf("%d",a-b);
			break;
		case 3:
			printf("%d",a*b);
			break;
		case 4:
			printf("%f",(float)a/b);
			break;
		default:
			printf("INVALID CHOICE");
	}
	return 0;
}
