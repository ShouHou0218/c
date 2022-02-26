#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	int a = 10;//4个字节
	int* p = &a;//取地址
	printf("a=%p\n", &a);
	printf("p=%p\n", p);
	*p = 20;//*-解引用操作符
	printf("a=%d\n", a);
	return 0;
}




//函数的定义
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////宏的定义
//#define MAX(X ,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = MAX(a, b);
//	printf("max=%d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	printf("max=%d", max);



	//int a = 1;
	//int b = 2;
	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义存放十个整数数字的数组
	//int i = 0;
	//while (i < 10)
	//{
	//	printf("%d ", arr[i]);
	//	i++;
	//}
	//printf("%d", arr[4]);//下标的方式访问元素
	//char ch[20];//字符类型

//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//};
//int main()
//{
//
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	sum = Add(num1, num2);
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
	//int line = 0;
	//printf("加入比特\n");
	//while (line < 2000)
	//{
	//	printf("敲一行代码:%d\n",line);
	//	line++;
	//}
	//if(line>=2000)
	//printf("好offer\n");

	//int input = 0;
	//printf("加入比特\n");
	//printf("你要好好学习吗? >:\n");
	//scanf("%d/n", &input);
	//if (input == 1)
	//	printf("好offer\n");
	//else
	//	printf("卖红薯\n");


	/*printf("%d\n", strlen("c:\test\32\test.c"));*///\32为两个八进制数字
	/*const int num = 10;
	int arr[10] = { 0 };*/
	//char arr1[] = "abc";
	//char arr2[] = { 'a','b','c'};//\为转义字符
	//printf("%d\n", strlen(arr1));
	//printf("%d\n", strlen(arr2));
//	return 0;
//}