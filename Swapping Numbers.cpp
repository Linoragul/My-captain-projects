#include<stdio.h>
main()
{
	int first,second ;
	printf("Enter the first number: ");
	scanf("%d",&first);
	printf("Enter the second number: ");
	scanf("%d",&second);
	
	first=first-second;
	second=first+second;
	first=second-first;
	
	printf("After swapping: First number = %d & second number = %d",first,second);
}
