#include <stdio.h>
int main()
{
int num;
printf("Enter your mark:");
scanf("%d",&num);
printf("You entered %d", num); 
	if (num>100) 
	printf("\n! Wrong data !\n");
	else if(num >= 85)
	{
	printf("\nYou got A grade\n"); 
		}
	else if ( num >=70)
	{ 
		printf("\nYou got B grade\n");
		}
	else if ( num >=55)
	{
		printf("\nYou got C grade\n");
		}
		else if ( num >=40)
	{
		printf("\nYou got D grade\n");
		}
	else if ( num < 40)
	{
		printf("\nYou got F grade\nYou Failed in this exam");
		}
return 0;
}
