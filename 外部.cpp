#define _CRT_SECURE_NO_WARNINGS 1

int glbal = 789;
static int s = 1;//static 修饰全局变量 -->静态全局变量   作用域限制在源文件内部
static int add(int x, int y)//static 改变函数链接属性  外部链接 -->内部链接
{
	int z = x + y;
	return z;
}
