#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char input[20] = { 0 };
	//shutdow -s -t 60  60���ػ�
	//systemִ��ϵͳ����
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ��Խ���60���ػ�,������룺������ȡ���ػ�\n�����룺");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}












////��������Ϸ
////1������һ�������
////2��������
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
//	//1.���������
//	int ret = 0;
//	int guess = 0;
//	//��ʱ����������������
//	ret = rand()%100+1;//����1-100֮��������
//	//printf("%d\n", ret);
//	//2.������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	
//	} while (input);
//
//	return 0;
//}







////����˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)//��ӡ����
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









////�ҳ�ʮ�����е����ֵ
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





////�ҳ�100-200֮�������
////�ж��Ƿ�Ϊ������
////1���Գ���
////2��sqrt--��ƽ������ѧ�⺯��
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








////1000-2000�е�����
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






////�������������Լ��(շת�����)
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
//	printf("���Լ����%d", n);
//	return 0;
//}






////��ӡ1-100��3�ı���
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








////���������Ӵ�С����
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