#include<stdio.h>
int main()
{
	int octalconstant[]={0,1,10,11,100,101,110,111};
	long long binary=0,place=1,octal,tempoctal;
	int lastd;
	printf("Enter the octal value::");
	scanf("%d",&octal);
	tempoctal=octal;
	while(tempoctal>0)
	{
		lastd=tempoctal%10;
		binary=binary+(octalconstant[lastd]*place);
		tempoctal=tempoctal/10;
		place=place*1000;
	}
	printf("%d",binary);
}
