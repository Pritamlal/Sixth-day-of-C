#include<stdio.h>
int main()
{
	long long decimal,tempdecimal,binary;
	int rem,place=1;
	printf("Enter the decimal:");
	scanf("%lld",&decimal);
	tempdecimal=decimal;
	while(tempdecimal>0)
	{
		rem=tempdecimal%8;
		binary=(rem*place)+binary;
		tempdecimal=tempdecimal/8;
		place=place*10;
	}
	printf("Decimal %d\n",decimal);
	printf("Binary %lld",binary);
}
