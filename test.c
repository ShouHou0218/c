#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	int a = 10;//4���ֽ�
	int* p = &a;//ȡ��ַ
	printf("a=%p\n", &a);
	printf("p=%p\n", p);
	*p = 20;//*-�����ò�����
	printf("a=%d\n", a);
	return 0;
}




//�����Ķ���
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////��Ķ���
//#define MAX(X ,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//����
//	int max = MAX(a, b);
//	printf("max=%d\n", max);
//	//��ķ�ʽ
//	max = MAX(a, b);
//	printf("max=%d", max);



	//int a = 1;
	//int b = 2;
	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};//������ʮ���������ֵ�����
	//int i = 0;
	//while (i < 10)
	//{
	//	printf("%d ", arr[i]);
	//	i++;
	//}
	//printf("%d", arr[4]);//�±�ķ�ʽ����Ԫ��
	//char ch[20];//�ַ�����

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
	//printf("�������\n");
	//while (line < 2000)
	//{
	//	printf("��һ�д���:%d\n",line);
	//	line++;
	//}
	//if(line>=2000)
	//printf("��offer\n");

	//int input = 0;
	//printf("�������\n");
	//printf("��Ҫ�ú�ѧϰ��? >:\n");
	//scanf("%d/n", &input);
	//if (input == 1)
	//	printf("��offer\n");
	//else
	//	printf("������\n");


	/*printf("%d\n", strlen("c:\test\32\test.c"));*///\32Ϊ�����˽�������
	/*const int num = 10;
	int arr[10] = { 0 };*/
	//char arr1[] = "abc";
	//char arr2[] = { 'a','b','c'};//\Ϊת���ַ�
	//printf("%d\n", strlen(arr1));
	//printf("%d\n", strlen(arr2));
//	return 0;
//}