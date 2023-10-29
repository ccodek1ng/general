#define _CRT_SECURE_NO_WARNINGS 1//源文件的第一行    define定义的标识符常量
#include<stdio.h>
#include<string.h>

//#include<stdio.h>
//int global = 5;//全局变量作用域整个工程     （变量的作用域(生命周期)在被定义的程序块以内）
//int main()
//{
//	int a = 2;
//	{
//		int a = 1;
//		//printf("b=%d\n", b);
//	}
//	printf("a = %d\n", a);
//	int b = 1;//c++可行，c中要在程序块最前面一次性定义完
//	extern int glbal;
//	printf("%d", glbal);
//	//printf("%lld",sizeof(int));
//	//printf("%d",sizeof(short));
//	//printf("%d",sizeof(long));
//	//printf("%d",sizeof(long long));
//	//printf("%d",sizeof(char));
//	//printf("%d",sizeof(float));
//	//printf("%d",sizeof(double));
//	//printf("%d",sizeof(long double));*/
//
//	return 0;
//}
////局部变量也是相对的，在不同级别的代码块{}中体现 or  作用域
////1 byte = 8 bits int=4 bytes

//int main()
//{
//	9;//字面常量
//	const int a = 6;//const修饰的常变量,本质还是变量
//	int arr[a];//error
//	scanf("%d", &a); // error C4996 : 'scanf' : This function or variable may be unsafe.Consider using scanf_s instead.To disable deprecation, use _CRT_SECURE_NO_WARNINGS.
//	printf("%d\n", a);
//	return 0;
//}


//enum sex
//{
//	male,
//	female,
//	secret
//};//male,female,secret是枚举常量  (不会用┭┮﹏┭┮)
//int main()
//{   
//	printf("%d\n",male);
//	printf("%d\n",female);
//	printf("%d\n",secret);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";//"abc"   'a' 'b' 'c' '\0'字符串结束标志
//	char arr2[] = { 'a','b','c',0 };//0或'\0'
//	char arr3[] = { 'a','b','c'};
//	printf("%s\n%s\n", arr1, arr2);
//	printf("%d\n%d\n%d\n", strlen(arr1), strlen(arr2), strlen(arr3));
//	printf("\\\\test\n");
//	printf("%c\n%s\n",'\'',"\"");
//	return 0;
//}//   \ddd 八进制  \xdd 十六进制  转化为十进制后的对应的ASCII码值

//int main()
//{
//	int n=0;
//	while (n < 20000)
//	{
//		printf("%d\n", n);
//		n++;
//	}
//	return 0;
//}

//int add(int x, int y)
//{
//	int sum;
//	sum = x + y;
//	return sum;
//}
//int main()
//{
//	int a, b,c;
//	scanf("%d %d", &a, &b);
//	c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a[10] = { 1,2,3,4,56,7 },sz;
//	printf("%d\n", a[1]);
//	sz = sizeof(a) / sizeof(a[1]);
//	printf("%d\n%d\n", sizeof(a), sz);
//	return 0;
//}

//int main()//操作符
//{
//	int a = (int)5.21;//强制类型转换
//
//	//int a, b;//有符号                       最高位是符号位 1- ，0+     负数存储时存储的是补码
//	//a = 0;//                            a = 000000000000000000000000000000000000   正数的原码，反码，补码相同
//	//b = ~a;//  ~  按位取反              b = 111111111111111111111111111111111111   补码  =   反码 + 1
//	//printf("%d", b);//使用时用源码          111111111111111111111111111111111110   反码  =   原码位反，符号位不变     (为什么要这样？)
// //   //                                    100000000000000000000000000000000001   原码      
//
//	//int a, b, c, d, f;
//	//a = 3, b = 5;//       a=011    b=101    -------------------------------------------------------------- &  011   |  011   ^  011
//	//c = a & b, d = a | b, f = a ^ b;//&按位与（全真则真），|按位或（有真则真），^按位异或(同则0，异则1）      101      101      101
//	//printf("%d\n%d\n%d\n", c, d, f); // --------------------------------------------------------------------  001      111      110
//	////------------------------------------------------------------------------------------------------------    1        7        6
//
//
//	//int a,b,c;                                
//	//a = 1;
//	//b = a << 2;//  >>  << 移（二进制）位操作符   a=00000000000000000000000001 ————> a=00000000000000000000100 移出补0
//	//c = a >> 1 << 2;// ???
//	//printf("%d\n%d\n%c\n", a,b,c);
//	return 0;
//}

//关键字
//void pf2()//static 
//{
//    int a = 1;
//	printf("%d\n", a);
//	a++;
//}
//void pf1()
//{
//	static int a = 1;//static修饰局部变量 生命周期变长 
//	printf("%d\n", a);
//	a++;
//}
//int main()//关键字
//{
//	int i = 0;
//	while (i < 10)
//	{
//		pf2();
//		pf1();
//		i++;
//	}
//	
//	//auto int a = 0;//a 局部变量也叫自动变量  一般省略了auto
//	//register int b = 0;//建议把b放入寄存器变量
//	//signed int c = 1;//一般省略
//	//unsigned int d = 3;
//	//typedef unsigned int usint;//typedef  类型重定义
//	//usint e = 1.23;
//	return 0;
//}

////还是static 
//void st()
//{
//	static int a = 1;
//	a++;
//}
//int main()
//{
//	extern int a;
//	int i = 0;
//	while (i < 10)
//	{
//		st();
//		i++;
//	}
//	printf("%d/n",a);
//	return 0;
//} error   extern 是一种关键字，它用于在一个源文件中引用另一个源文件中定义的全局变量或函数。 

////static 
//int main()
//{
//	int a = 1, b = 2;
//	extern int s;
//	printf("%d\n%d\n", s, add(a, b));
//	return 0;
//}

////宏
//#define ADD(x,y) ((x)+y)
//#define MAX(x,y) (x>y?x:y)
//int main()
//{
//	int a = 3, b = 4;
//	int add = ADD(a, b), max = MAX(a, b);
//	printf("%d\n%d\n", add, max);
//}

////指针
//int main()
//{
//	char c = 'a';
//	char* n = &c;//                           32位64位系统   32/64跟地址线    2^32/2^64 个地址
//	*n = 'b';//                               指针变量的占内存大小即为   4/8 bytes
//	int a = 1;
//	int* p = &a;//&取地址操作符
//	*p = 2;//*解引用操作符/间接访问操作符
//	printf("%d\n%p\n%c\n%d\n", a,n,c,sizeof(p));
//	return 0;
//}

//结构体
struct book
{
	char name[10];
	short pages;
};
int main()
{
	struct book bk1={ "qwer",100 };//根据结构体类型创建一个结构体变量
	printf("%s\n%d\n", bk1.name, bk1.pages);//                      结构体变量.成员
	struct book* p = &bk1;
	printf("%s\n%d\n%d\n", (*p).name, (*p).pages, sizeof(p));
	printf("%s\n", p->name);//                                      结构体指针->成员
	strcpy(bk1.name, "asdf");
	printf("%s\n", bk1.name);
	return 0;
}