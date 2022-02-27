#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char input[20] = { 0 };
	//shutdow -s -t 60  60秒后关机
	//system执行系统命令
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将在60秒后关机,如果输入：我是猪，取消关机\n请输入：");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}












////猜数字游戏
////1、生成一个随机数
////2、猜数字
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("******************************\n");
//	printf("****   1.play     0.exit  ****\n");
//	printf("******************************\n");
//}
//
//void game()
//{
//	//1.生成随机数
//	int ret = 0;
//	int guess = 0;
//	//拿时间戳来设置随机数的
//	ret = rand()%100+1;//生成1-100之间的随机数
//	//printf("%d\n", ret);
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do 
//	
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	
//	} while (input);
//
//	return 0;
//}







////打出乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)//打印九行
//	{
//		int j = 0;
//		for (j = 1; j<=i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//
//		}
//		printf("\n");
//	}
//	return 0;
//}









////找出十个数中的最大值
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d", max);
//	return 0;
//}





////找出100-200之间的素数
////判断是否为素数：
////1、试除法
////2、sqrt--开平方的数学库函数
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}








////1000-2000中的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//if (year % 4 == 0 && year % 100 != 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		//else if (year % 400 == 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}






////求两个数的最大公约数(辗转相除法)
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m % n)
//	{
//		//r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("最大公约数：%d", n);
//	return 0;
//}






////打印1-100内3的倍数
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i%3 == 0)
//			printf("%d ", i);
//	}
//
//	return 0;
//}








////将三个数从大到小排序
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}