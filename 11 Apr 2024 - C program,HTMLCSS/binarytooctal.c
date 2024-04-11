#include<stdio.h>
int main()
{
	int octoconstant[]={0,1,10,11,100,101,110,110};
	long long binary,octal=0,tempbinary;
	int i,lastd,place=1;
	
	printf("Enter the binary::");
	scanf("%d",&binary);
	tempbinary=binary;
	
	while(tempbinary!=0)
	{
		lastd=tempbinary%1000;
		for(i=0;i<8;i++)
		{
			if(octoconstant[i]==lastd)
			{
				octal=(i*place)+octal;
				break;
			}
		}
		tempbinary=tempbinary/1000;
		place=place*10;
	}
	printf("The binary is %lld\n\n",binary);
	printf("The OctalNumber is %lld",octal);
}
