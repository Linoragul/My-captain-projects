#include <stdio.h>
int main()
{ 
    printf("enter the number: \n1.0\n2.1\n");
    int choice=0;
    
   scanf("%d",&choice);
   switch(choice)
   {
       case 1:
       printf("u choosed 0");
       break ;
       case 2:
       printf("u have choosed 1");
       break ;
       default :
       printf("Choose the correct number");
      
   }
   return 0;
}
