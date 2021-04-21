#include<stdio.h>
main()
{
	printf("Pick an food item: \n1. Pizza\n2. Burger\n3. Pasta\n4. French Fries\n5. Sandwich");
	int fooditem=0;
	scanf("%d",&fooditem);
	
	switch (fooditem)
	{
		case 1 :
			printf("Food item - Pizza ");
			printf(" Price - Rs 239");
			break;
	    case 2 :
	    	printf("Food item - Burger ");
	    	printf(" Price - Rs 129");
	    	break;
		case 3 :
			printf("Food item - Pasta");
			printf(" Price - Rs 179");
			break;
		case 4 :
			printf("Food item - French fries");
			printf(" Price - Rs 99");
			break;
		case 5 :		
	     	printf("Food item - Sandwich");
	     	printf(" Price - Rs 149");
	     	break;
	    default : printf("invalid order");
	     	
	}	
	
}
