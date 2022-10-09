#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//作用域和生命周期
//局部变量的作用域：就是变量所在的局部范围
//全局变量的作用域：整个工程

//int g_val = 2021;
//
//int main()
//{
//	//printf("1:%d\n", g_val);
//	//{int a = 10;
//	//printf("a = %d\n", a);
//	//
//	////作用域就是那里起作用哪里就是作用域
//	//printf("2:%d\n", g_val);
//	//}
//
//	//printf("3:%d\n", g_val);
//
//	//局部变量的生命周期：进入局部范围生命开始，离开局部范围生命结束
//	//全局变量的生命周期：整个程序的生命周期
//	/*{
//		int a = 10;
//		printf("%d\n", a);
//	}*/
//
//	return 0;
//}


//常量：
//字面常量
//const修饰的常变量
//#define定义的标识符常量
//枚举常量

#define MAX 10000

//性别
enum Sex//enum枚举关键字
{
	//枚举类型的变量的未来可能取值
	MALE = 3,//赋初值
	FEMALE,
	SECRET
};

int main()
{
	//字面常量
	/*3.14;
	10;
	'a';
	"abcdef";*/

	//const修饰的常变量
	 /*const int num = 10;*///num就是常变量 - 具有常属性（不能改变的属性）
	//num = 20;
	//printf("num=%d\n", num);

	 //int arr[10] = {0};//10个元素
	 //
	 //const int n = 10;//根还是常变量，还是不能运行
	 //int arr2[n] = { 0 };//n是变量，这里是不行的

	//#define定义的标识符常量
	//可在大括号内定义#define
	/*MAX = 20000;*///erro

	/*int n = MAX;
	printf("n = %d\n", n);*/

	//枚举常量
	//可以一一列举的常量
	enum Sex s = MALE;
	//MALE = 3；//err
	printf("%d\n", MALE);//0
	printf("%d\n", FEMALE);//1
	printf("%d\n", SECRET);//2
	//枚举类的值是常量，默认从零开始,可以赋初值改变起始值

	return 0;
}