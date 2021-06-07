#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int input[10]={0};
    int find = 0;
    for(int i=0; i<10; i++)
    {
        printf("输入第 %d 个整数： ", i+1);
        scanf("%d",input+i);
    }
    printf("\r\n");
    printf("指定待查找数字：");
    scanf("%d",&find);
    for(int i=0;i<9;i++)
    {
        for(int j=i+1; j<10; j++)
        {
            if(input[i]>input[j])
            {
                int temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("%d\n",input[i]);
    }
    return 0;
}