#include<stdio.h> 
int lcmsolve(int x, int y);
int main()
{
	int no1,no2,lcm;
	printf("\nRecursion :to find LCM of two numbers : \n");
	printf("******************************************\n");
	printf("Enter 1nd number: ");
	scanf("%d",&no1);
	printf("Enter 2nd number: ");
	scanf("%d",&no2);
	if(no1>no2)
	lcm=lcmsolve(no2,no1);
	else
	lcm=lcmsolve(no1,no2);
	printf("LCM of %d and %d : %d\n",no1,no2,lcm);
	return 0;
}
int lcmsolve(int x,int y)
{   static int p=0;
    p+=y;
    if((p% x ==0)&& (p % y==0))
    {
    	return p;
	}
	else
	{
		lcmsolve(x,y);
	}
}


