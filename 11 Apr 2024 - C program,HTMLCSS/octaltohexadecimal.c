#include<stdio.h>
#include<string.h>
int main()
{
	int octalvalues[]={0,1,10,11,100,101,110,111};
	long long octal,tempoctal,binary=0,place=1;
	char hex[65]="";
	int lastd;
	printf("Enter the number::");
	scanf("%lld",&octal);
	tempoctal=octal;
	while(tempoctal>0)
	{
		lastd=tempoctal%10;
		binary=binary+(octalvalues[lastd]*place);
		tempoctal=tempoctal/10;
		place=place*1000;
	}
	
	while(binary>0)
	{
		lastd=binary%10000;
		switch(lastd)
		{
			case 0:
                strcat(hex, "0");
                break;
            case 1:
                strcat(hex, "1");
                break;
            case 10:
                strcat(hex, "2");
                break;
            case 11:
                strcat(hex, "3");
                break;
            case 100:
                strcat(hex, "4");
                break;
            case 101:
                strcat(hex, "5");
                break;
            case 110:
                strcat(hex, "6");
                break;
            case 111:
                strcat(hex, "7");
                break;
            case 1000:
                strcat(hex, "8");
                break;
            case 1001:
                strcat(hex, "9");
                break;
            case 1010:
                strcat(hex, "A");
                break;
            case 1011:
                strcat(hex, "B");
                break;
            case 1100:
                strcat(hex, "C");
                break;
            case 1101:
                strcat(hex, "D");
                break;
            case 1110:
                strcat(hex, "E");
                break;
            case 1111:
                strcat(hex, "F");
            break;
        }
		binary/=10000;
	}
	strrev(hex);
	
	printf("Octal Number::%lld\n",octal);
	printf("Hexadecimal Number::%s",hex);
	
}
