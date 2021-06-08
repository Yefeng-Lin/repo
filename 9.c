#include<stdio.h>
#include<stdlib.h>

int max(int input[], int n)
{
        int m = input[0];
	for(int i=0; i<n; i++)
	{
		if(m<input[i])
		{
			m = input[i];
		}
	}
	return m;
}

int main(void)
{
    int input[10]={0};
    for(int i=0; i<10; i++)
    {
        printf("输入第 %d 个整数： ", i+1);
        scanf("%d",input+i);
    }
    int m = max(input, 10);
    printf("\r\n最大值为：%d\n",m);
    return 0;
}
