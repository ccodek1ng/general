#define _CRT_SECURE_NO_WARNINGS 1//Դ�ļ��ĵ�һ��    define����ı�ʶ������
#include<stdio.h>
#include<string.h>

//#include<stdio.h>
//int global = 5;//ȫ�ֱ�����������������     ��������������(��������)�ڱ�����ĳ�������ڣ�
//int main()
//{
//	int a = 2;
//	{
//		int a = 1;
//		//printf("b=%d\n", b);
//	}
//	printf("a = %d\n", a);
//	int b = 1;//c++���У�c��Ҫ�ڳ������ǰ��һ���Զ�����
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
////�ֲ�����Ҳ����Եģ��ڲ�ͬ����Ĵ����{}������ or  ������
////1 byte = 8 bits int=4 bytes

//int main()
//{
//	9;//���泣��
//	const int a = 6;//const���εĳ�����,���ʻ��Ǳ���
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
//};//male,female,secret��ö�ٳ���  (�����éѩҩn�ѩ�)
//int main()
//{   
//	printf("%d\n",male);
//	printf("%d\n",female);
//	printf("%d\n",secret);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";//"abc"   'a' 'b' 'c' '\0'�ַ���������־
//	char arr2[] = { 'a','b','c',0 };//0��'\0'
//	char arr3[] = { 'a','b','c'};
//	printf("%s\n%s\n", arr1, arr2);
//	printf("%d\n%d\n%d\n", strlen(arr1), strlen(arr2), strlen(arr3));
//	printf("\\\\test\n");
//	printf("%c\n%s\n",'\'',"\"");
//	return 0;
//}//   \ddd �˽���  \xdd ʮ������  ת��Ϊʮ���ƺ�Ķ�Ӧ��ASCII��ֵ

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

//int main()//������
//{
//	int a = (int)5.21;//ǿ������ת��
//
//	//int a, b;//�з���                       ���λ�Ƿ���λ 1- ��0+     �����洢ʱ�洢���ǲ���
//	//a = 0;//                            a = 000000000000000000000000000000000000   ������ԭ�룬���룬������ͬ
//	//b = ~a;//  ~  ��λȡ��              b = 111111111111111111111111111111111111   ����  =   ���� + 1
//	//printf("%d", b);//ʹ��ʱ��Դ��          111111111111111111111111111111111110   ����  =   ԭ��λ��������λ����     (ΪʲôҪ������)
// //   //                                    100000000000000000000000000000000001   ԭ��      
//
//	//int a, b, c, d, f;
//	//a = 3, b = 5;//       a=011    b=101    -------------------------------------------------------------- &  011   |  011   ^  011
//	//c = a & b, d = a | b, f = a ^ b;//&��λ�루ȫ�����棩��|��λ���������棩��^��λ���(ͬ��0������1��      101      101      101
//	//printf("%d\n%d\n%d\n", c, d, f); // --------------------------------------------------------------------  001      111      110
//	////------------------------------------------------------------------------------------------------------    1        7        6
//
//
//	//int a,b,c;                                
//	//a = 1;
//	//b = a << 2;//  >>  << �ƣ������ƣ�λ������   a=00000000000000000000000001 ��������> a=00000000000000000000100 �Ƴ���0
//	//c = a >> 1 << 2;// ???
//	//printf("%d\n%d\n%c\n", a,b,c);
//	return 0;
//}

//�ؼ���
//void pf2()//static 
//{
//    int a = 1;
//	printf("%d\n", a);
//	a++;
//}
//void pf1()
//{
//	static int a = 1;//static���ξֲ����� �������ڱ䳤 
//	printf("%d\n", a);
//	a++;
//}
//int main()//�ؼ���
//{
//	int i = 0;
//	while (i < 10)
//	{
//		pf2();
//		pf1();
//		i++;
//	}
//	
//	//auto int a = 0;//a �ֲ�����Ҳ���Զ�����  һ��ʡ����auto
//	//register int b = 0;//�����b����Ĵ�������
//	//signed int c = 1;//һ��ʡ��
//	//unsigned int d = 3;
//	//typedef unsigned int usint;//typedef  �����ض���
//	//usint e = 1.23;
//	return 0;
//}

////����static 
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
//} error   extern ��һ�ֹؼ��֣���������һ��Դ�ļ���������һ��Դ�ļ��ж����ȫ�ֱ��������� 

////static 
//int main()
//{
//	int a = 1, b = 2;
//	extern int s;
//	printf("%d\n%d\n", s, add(a, b));
//	return 0;
//}

////��
//#define ADD(x,y) ((x)+y)
//#define MAX(x,y) (x>y?x:y)
//int main()
//{
//	int a = 3, b = 4;
//	int add = ADD(a, b), max = MAX(a, b);
//	printf("%d\n%d\n", add, max);
//}

////ָ��
//int main()
//{
//	char c = 'a';
//	char* n = &c;//                           32λ64λϵͳ   32/64����ַ��    2^32/2^64 ����ַ
//	*n = 'b';//                               ָ�������ռ�ڴ��С��Ϊ   4/8 bytes
//	int a = 1;
//	int* p = &a;//&ȡ��ַ������
//	*p = 2;//*�����ò�����/��ӷ��ʲ�����
//	printf("%d\n%p\n%c\n%d\n", a,n,c,sizeof(p));
//	return 0;
//}

//�ṹ��
struct book
{
	char name[10];
	short pages;
};
int main()
{
	struct book bk1={ "qwer",100 };//���ݽṹ�����ʹ���һ���ṹ�����
	printf("%s\n%d\n", bk1.name, bk1.pages);//                      �ṹ�����.��Ա
	struct book* p = &bk1;
	printf("%s\n%d\n%d\n", (*p).name, (*p).pages, sizeof(p));
	printf("%s\n", p->name);//                                      �ṹ��ָ��->��Ա
	strcpy(bk1.name, "asdf");
	printf("%s\n", bk1.name);
	return 0;
}