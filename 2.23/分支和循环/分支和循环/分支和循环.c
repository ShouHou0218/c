#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", password);
		//if (password == "123456")//==�����ж������ַ�����ȣ�Ӧ��ʹ��һ���⺯��-strcmp
		if (strcmp(password , "123456")==0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
		printf("��������������˳�\n");
	
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
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}









//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//дһ��������arr���飨����ģ����ҵ�
//	for (i=0;i<sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±���%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
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




	//����1��+2��+3��
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



	//����n�Ľ׳�
	//int i = 0;
	//int n = 0;
	//int z = 1;
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)
	//{
	//	z = z * i;
	//};
	//printf("�׳˵��ڣ�%d\n", z);







	//int i = 0;
	//int k = 0;
	//for (i = 0, k = 0; k == 0; i++, k++)
	//{
	//	printf("hehe\n");
	//};



	////��ѭ�� 
	//for (;;)
	//{
	//	printf("hehe\n");
	//}





	//int ret = 0;
	//char password[20] = {0};
	//printf("����������:>");
	//scanf("%s", password);
	//getchar();
	//printf("��ȷ�ϣ�Y/N��:>");
	//ret = getchar();
	//if (ret == 'Y')
	//{
	//	printf("ȷ�ϳɹ�\n");
	//}
	//else
	//{
	//	printf("����ȷ��\n");
	//}




	//int ch = 0;
	//while ((ch = getchar()) != EOF)//ctrl+z
	//	//EOF-end of file�ļ�������־-1
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
	//	printf("����һ\n");
	//	break;
	//case 2:
	//	printf("���ڶ�\n"); 
	//	break;
	//case 3:
	//	printf("������\n"); 
	//	break;
	//case 4:
	//	printf("������\n"); 
	//	break;
	//case 5:
	//	printf("������\n"); 
	//	break;
	//case 6:
	//	printf("������\n");
	//	break;
	//case 7:
	//	printf("������\n");
	//	break;
	// default:
	// printf("�������\n");
	// break;
	//}



	 
	////�ж�һ�����Ƿ�Ϊ����
	//int i = 0;
	//scanf("%d", &i);
	//if (i%2 == 1)
	//	printf("aΪ����\n");
	//else
	//	printf("aΪż��\n");




	////���1-100֮�������
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
	//	printf("δ����\n");
	//else
	//{
	//	if (age >= 18 && age < 28)
	//		printf("����\n");
	//	else if (age >= 28 && age < 50)
	//		printf("׳��\n");
	//	else
	//		printf("����\n");
	//}
	// 
	// 
	// 
	//int age = 49;
	//if (age < 18)
	//	printf("δ����\n");
	//else if (age >= 18 && age < 28)
	//	printf("����\n");
	//else if (age >= 28 && age < 50)
	//	printf("׳��\n");
	//else
	//	printf("����\n");

//	return 0;
//}