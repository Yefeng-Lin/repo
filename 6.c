#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	for(int i=1; i<=1000; i++)
	{
		int pow = i*i;
		if(i<10)
		{
			while(pow>=10)
			{
				pow = pow%10;
			}
			if(pow == i)
				printf("自构数: %d     平方: %d\n",i, i*i);
		}else if(i<100)
		{
			while(pow>=100)
			{
				pow = pow%100;
			}
			if(pow == i)
				printf("自构数: %d    平方: %d\n", i, i*i);
		}else
		{
			while(pow>=1000)
			{
				pow = pow%1000;
			}
			if(pow == i)
				printf("自构数: %d   平方: %d\n",i, i*i);
		}


	}
	return 0;
}

