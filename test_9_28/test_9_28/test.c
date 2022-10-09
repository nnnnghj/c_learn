#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

//字符串、转义字符、注释
//字符串：一串字符 - 用双引号括起来的一段字符


//int main() 
//{
//	/*"abcdef";*/
//	//字符数组 - 数组是一组相同类型的元素
//	//字符串在结尾的位置隐藏了一个\0的字符
//	//\0是字符串结束的标志
//
//	////char arr[] = "hello";
//	//char arr1[] = "abc";//abc\0
//	//char arr2[] = {'a', 'b', 'c'};//abc后面位置未知
//	///*char arr2[] = { 'a', 'b', 'c', '\0'};*/
//	//
//	////求字符串长度
//	//printf("%d\n", strlen(arr1));
//	//printf("%d\n", strlen(arr2));//随机值
//	////int len = strlen("abc");//string length
//	////出现“未定义”错误是因为没有引入头文件;需要#include<string.h>
//	////printf("%d\n", len);
//	//
//	////打印字符串
//	///*printf("%s\n", arr1);
//	//printf("%s\n", arr2);*/
//
//
//
//	return 0;
//}


//转义字符：转变了他原来的意思！


//int main()
//{
//	//printf("c:\test\test.c");
//	//printf("ab\nbc");//不是单纯的\+n的字符
//	//printf("(are you ok??)");//??) = ] - 三字母词
//	//printf("%c\n", '\'');
//	//printf("%s\n", "\"");
//	//printf在打印数据的时候，可以指定打印的格式
//	//printf("c:\\test\\test.c");正常打印
//	/*printf("%c\n", '\130');*///八进制的130是十进制的88
//	//X - ASCII码值是88
//	/*printf("%c\n", '\101');*///A - 65 - 八进制是101
//	//printf("%c\n", '\x30');//48 - '0'
//
//	/*printf("%d\n", strlen("c:\test\328\test.c"));*///14位，因为\328中8不属于转义符
//
//
//	return 0;
//}


//注释是用来解释复杂代码的
//


int main() 
{
	//int a = 10;//C++注释风格
	/*
	int b = 0;
	*/        //C语言的注释风格 - 它不支持嵌套注释


	return 0;
}