#include<stdio.h>
#include<math.h>

#define BASE 2
int main()
{
	long long binary,tempbinary,decimal=0;
	int N=0;
	printf("Enter thenumber::");
	scanf("%lld",&binary);
	tempbinary=binary;
	while(tempbinary!=0)
	{
		if(tempbinary%10==1)
		{
			decimal=decimal+pow(BASE,N);	
		}	
	N++;
	tempbinary=tempbinary/10;
	}
	printf("The binary is %lld\n",binary);
	printf("The octal is %lld",decimal);
}
