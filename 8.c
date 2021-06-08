#include<stdio.h>
#include<stdlib.h>

int Search_Bin(int *input, int find){
	int low=0;//初始状态 low 指针指向第一个关键字
	int high=9;//high 指向最后一个关键字
	int mid;
	while (low<=high) {
        	mid=(low+high)/2;//int 本身为整形，所以，mid 每次为取整的整数
        	if (input[mid]==find)//如果 mid 指向的同要查找的相等，返回 mid 所指向的位置
        	{
            	return mid;
        	}else if(input[mid]>find)//如果mid指向的关键字较大，则更新 high 指针的位置
        	{
            		high=mid-1;
        	}
        	//反之，则更新 low 指针的位置
        	else{
            		low=mid+1;
        	}
    	}
    	return -1;
}

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
    int res = Search_Bin(input, find);
    printf("index: %d\n",res);
    if(res>=0)
    {
	    for(int i=0;i<10;i++)
	    {
		    printf("%d ",input[i]);
	    }
	    printf("\r\n");
	    for(int i=0; i<10; i++)
	    {
		    if(res == i)
		    {
			    printf("* ");
			    continue;
		    }
		    printf("  ");
	    }
	    printf("\n查找成功，索引为：%d\n",res+1);
    }else{
    	printf("查找失败！！！！\n");
    }
    return 0;
}
