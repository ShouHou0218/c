#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", password);
		//if (password == "123456")//==不能判断两个字符串相等，应该使用一个库函数-strcmp
		if (strcmp(password , "123456")==0)
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
		printf("三次密码错误，请退出\n");
	
	return 0;
}





//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}









//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//写一个代码在arr数组（有序的）中找到
//	for (i=0;i<sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}




//int main()
//{
//	int i = 0;
//    int n = 0;
//    int z = 1;
//    int sum = 0;
//       for (n = 1; n <= 3; n++)
//{
//	for (z=1,i = 1; i <= n; i++)
//	{
//		z = z * i;
//	};
//	sum = sum + z;
//};
//printf("%d\n", sum);




	//计算1！+2！+3！
	//int i = 0;
	//int n = 0;
	//int z = 1;
	//int sum = 0;
	//for (n = 1; n <= 3; n++)
	//{
	//	z = z * n;
	//	sum = sum + z;
	//};
	//printf("%d\n", sum);



	//计算n的阶乘
	//int i = 0;
	//int n = 0;
	//int z = 1;
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)
	//{
	//	z = z * i;
	//};
	//printf("阶乘等于：%d\n", z);







	//int i = 0;
	//int k = 0;
	//for (i = 0, k = 0; k == 0; i++, k++)
	//{
	//	printf("hehe\n");
	//};



	////死循环 
	//for (;;)
	//{
	//	printf("hehe\n");
	//}





	//int ret = 0;
	//char password[20] = {0};
	//printf("请输入密码:>");
	//scanf("%s", password);
	//getchar();
	//printf("请确认（Y/N）:>");
	//ret = getchar();
	//if (ret == 'Y')
	//{
	//	printf("确认成功\n");
	//}
	//else
	//{
	//	printf("放弃确认\n");
	//}




	//int ch = 0;
	//while ((ch = getchar()) != EOF)//ctrl+z
	//	//EOF-end of file文件结束标志-1
	//	putchar(ch);
	//printf("%c", ch);



	//int i = 1;
	//while (i <= 10)
	//{
	//	if (i == 5)
	//		continue;
	//		//break;
	//	printf("%d", i);
	//	i++;
	//}






	//int day = 0;
	//scanf("%d", &day);
	//switch (day)
	//{
	//case 1:
	//	printf("星期一\n");
	//	break;
	//case 2:
	//	printf("星期二\n"); 
	//	break;
	//case 3:
	//	printf("星期三\n"); 
	//	break;
	//case 4:
	//	printf("星期四\n"); 
	//	break;
	//case 5:
	//	printf("星期五\n"); 
	//	break;
	//case 6:
	//	printf("星期六\n");
	//	break;
	//case 7:
	//	printf("星期日\n");
	//	break;
	// default:
	// printf("输入错误\n");
	// break;
	//}



	 
	////判断一个数是否为奇数
	//int i = 0;
	//scanf("%d", &i);
	//if (i%2 == 1)
	//	printf("a为奇数\n");
	//else
	//	printf("a为偶数\n");




	////输出1-100之间的奇数
	//int a = 1;
	//while (a <= 100)
	//{
	//	if (a % 2 == 1)
	//		printf("%d\n", a);
	//	a++;
	//}



	//int a = 0;
	//int b = 2;
	//if (a == 1)
	//{
	//	if (b == 2)
	//		printf("haha\n");
	//}
	//	else
	//		printf("hehe\n");


	//int age = 49;
	//if (age < 18)
	//	printf("未成年\n");
	//else
	//{
	//	if (age >= 18 && age < 28)
	//		printf("青年\n");
	//	else if (age >= 28 && age < 50)
	//		printf("壮年\n");
	//	else
	//		printf("老年\n");
	//}
	// 
	// 
	// 
	//int age = 49;
	//if (age < 18)
	//	printf("未成年\n");
	//else if (age >= 18 && age < 28)
	//	printf("青年\n");
	//else if (age >= 28 && age < 50)
	//	printf("壮年\n");
	//else
	//	printf("老年\n");

//	return 0;
//}