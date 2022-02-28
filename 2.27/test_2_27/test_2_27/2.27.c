#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//printf输出的为整形的个数所以为4321
	return 0;
}








////调用一次函数，值加一
//void add(int* i)
//{
//	(*i)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("num=%d\n", num);
//	add(&num);
//	printf("num=%d\n", num);
//	add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}









////用二分法找有序数组中的数的下标
//
//int binary_search(int arr[], int k,int sz)
//{
//	
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] == k)
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr,k,sz);
//	//找到了返回下标，没找到返回-1
//	if (ret == -1)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//	return 0;
//}








////100-200之间的素数
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j<=sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//		return 1;
//}
//
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}








////void swap1(int x, int y)
////{
////	int tmp = 0;
////	tmp = x;
////	x = y;
////	y = tmp;
////
////}
//
//void swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	//swap1(a, b);
//	swap2(&a, &b);
//
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}









////定义函数
//int get_max(int x, int y)
//{
//	if (x < y)
//		return y;
//	else
//		return x;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	//函数的使用
//	return 0;
//}






//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}







//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}