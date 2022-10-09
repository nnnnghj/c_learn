#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//全局变量
//static g_val = 2022;
//static 修饰全局变量，使得这个全局变量只能在自己所在的源文件（.c）内部可以使用
//其他文件不可以使用
//全局变量在其他源文件内部可以被使用，是因为全局变量具有外部连接属性
//但是被static修饰以后，就变成了内部链接属性，其他源文件就不能链接到这个静态的全局变量了


////static修饰函数
//static int Add(int x, int y)
//{
//	return x + y;
//}

