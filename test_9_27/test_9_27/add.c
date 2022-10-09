#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

extern int g_val;//其他工程的全局变量若要应用则需该格式声明

//int main()
//{
//	printf("%d\n", g_val);//全局变量不可在其他工程使用
//
//	return 0;
//}