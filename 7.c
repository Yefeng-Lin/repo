#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int input[10]={0};
    int max = 0;
    int min = 0;
    int max_index = 0;
    int min_index = 0;
    printf("输入第 %d 个整数： ", 1);
    scanf("%d",input);
    max = input[0];
    max_index = 1;
    min = input[0];
    min_index = 1;
    for(int i=1; i<10; i++)
    {
        printf("输入第 %d 个整数： ", i+1);
        scanf("%d",input+i);
        if(input[i]>=max)
        {
            max = input[i];
            max_index = i+1;
        }
        if(input[i]<=min)
        {
            min = input[i];
            min_index = i+1;
        }
    }
    printf("最大值为：%d, 索引为：%d\n",max, max_index);
    printf("最小值为：%d, 索引为：%d\n",min, min_index);
}