#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//描述第n个斐波那契数
//int Fac(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fac(n - 1) + Fac(n - 2);
//
//}

int Fac(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fac(n);
	printf("%d", ret);

	return 0;
}













////求n的阶乘
//
//int Fac(int i)
//{
//	if (i <= 1)
//		return 1;
//	else
//		return i * Fac(i - 1);
//
//
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret=Fac(n);
//	printf("%d", ret);
//
//	return 0;
//}









////int my_strlen(char* str)
////{
////	int count = 0;
////	while (*str != '\0')
////	{
////		count++;
////		str++;
////	
////	}
////	return count;
////}
//
////递归的方法
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);
//	//printf("%d\n", len);
//	//模拟实现了一个strlen函数
//	int len = my_strlen(arr);//arr是数组，传过去的不是整个数组，而是第一个元素的地址
//	printf("len=%d\n", len);
//	return 0;
//}
//
//







//print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	//递归
//	print(num);
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	return 0;
//}