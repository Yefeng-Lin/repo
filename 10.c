#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int findNumber(char* str)
{
	int num = 0;
	while(*str)
	{
		if(*str>='0'&&*str<='9')
			num++;
		str++;
	}
	return num;
}

int findSpace(char* str)
{
	int num=0;
	while(*str)
	{
		if(*str==' ')
			num++;
		str++;
	}
	return num;
}

int main(void)
{
	char str[20];
	char ch;
	memset(str,0,20);
	printf("请输入字符串(长度小于20)...\n");
	for (int i = 0, ch;; ++i) {
		ch = getchar();
		if (i == 19 || ch == '\n') {
			str[i] = '\0';
			break;
		}
		str[i] = ch;
	}
	int Nnum = findNumber(str);
	int Snum = findSpace(str);
	printf("输入的字符串：|%s|\r\n",str);
	printf("数字个数: %d  空格个数: %d\r\n",Nnum, Snum);
	return 0;
}
