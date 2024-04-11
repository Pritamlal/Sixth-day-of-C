#include<stdio.h>
#include<math.h>
int main()
{
	
	int octal,tempoctal,last,decimal=0,place=0;
	printf("Enter the numbers::");
	scanf("%d",&octal);
	tempoctal=octal;
	while(tempoctal>0)
	{
		last=tempoctal%10;
		decimal+=last*pow(8,place);
		tempoctal=tempoctal/10;
		place++;
	}
	printf("The octal is %d\n",octal);
	printf("The decimal is %d",decimal);
}
