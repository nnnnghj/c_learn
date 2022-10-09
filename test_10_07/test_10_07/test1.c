#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//typedef unsigned int u_int;//typedrf 类型定义（准确来讲为类型重定义）
////张三 - 别名小三 - typedef就是给关键字起别名
//
////static - 静态的
////1.static修饰局部变量
////2.static修饰全局变量
////3.static修饰函数
//
//void test()
//{
//	static int a = 1;//a是局部变量,，在此处重新被赋值
//	//static代替auto修饰int a，auto表示自动创建和销毁，那static应该表示只执行一次创建过程
//	//静态局部变量在编译时赋予初值，每次调用函数不再重新赋初值，函数结束不销毁
//	
//	//static修饰局部变量，改变了局部变量的生命周期（本质上是改变了变量的存储类型）
//	//存储分为栈区、堆区、静态区
//	//栈区存储又局部变量、函数的参数
//	//堆区是用来动态内存分配的
//	//静态区存储全局变量、static修饰的静态变量
//
//
//	a++;
//	printf("%d ", a);//a在此位置被销毁了
//}
//
//int main()
//{
//	/*unsigned int num = 100;
//	u_int num2 = 100;*///与上一行效果完全相同
//
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}


//extern 声明外部符号的
//extern int g_val;
//全局变量在整个工程中都可以使用

//int main()
//{
//	/*printf("%d\n", g_val);*/
//
//
//
//	return 0;
//}

////声明函数
//extern int Add(int x, int y);
//
////static修饰函数，使得函数只能在自己源文件内部使用，不能在其他源文件内部使用
////本质上：static是将函数的外部链接属性变成了内部链接属性（和static修饰全局变量一样）
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//
//	printf("sum = %d", sum);
//
//	return 0;
//}