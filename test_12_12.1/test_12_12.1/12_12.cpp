//#include<stdio.h>
//int main()
//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
   


//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ���磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int muIT(int n)
//{
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("% d * % d = % d", i, j, i * j);
//		}
//	}
//	printf("%d\n");
//}
//int main()
//{
//	int n;
//	printf("��������Ҫ��ӡ�ĳ˷�������");
//		scanf("%d\n", &n);
//		muIT(n);
//		system("pause");
//		return 0;
//}
//    

//
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//#include <stdlib.h>
//
//
//
//int muit(int n) {
//
//	int i, j;
//
//	for (i = 1; i <= n; i++) {
//
//		for (j = 1; j <= i; j++) {
//
//			printf("%d * %d = %d ", j, i, i * j);
//
//		}
//
//		printf("\n");
//
//	}
//
//}
//
//
//
//int main() {
//
//	int n;
//
//	printf("��������Ҫ��ӡ�ĳ˷�����:");
//
//	scanf("%d", &n);
//
//	muit(n);
//
//	system("pause");
//
//	return 0;
//
//}
//

#define _CRT_SECURE_NO_WARNINGS 1
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���


//#include<stdio.h>
//#include<stdlib.h>
//
//void mul(int n)//multiplication �˷�
//{
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d  ", i, j, i*j);
//			//����%2d�е�2��ʾ�������������룬���Ҷ��룻%-2d�����ʾ�������
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	printf("������˷��ھ�����У�");
//	scanf("%d", &n);
//	mul(n);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*fac(n - 1);
//	}
//
//}
//int main()
//{
//	int n = 0;
//	printf("������һ������");
//	scanf_s("%d", &n);
//	int fac(n);
//	printf("%d\n", fac(n));
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int fac(int n)
//{
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	printf("������һ������");
//	scanf("%d", &n);
//	int fac(n);
//	printf("%d\n", fac(n));
//	system("pause");
//	return 0;
//}



//int factorial(int n) //�ݹ�
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*factorial(n - 1);//  5*4���� 4*3! ��3*2��.....
//	}
//}
//int factorial1(int n)
//{
//	int sum = 1;
//	for (; n>0; n--)//�ǵݹ�
//	{
//		sum *= n;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	printf("����������n��");
//	scanf("%d", &n);
//
//	factorial(n);
//	factorial1(n);
//	printf("%d\n", factorial(n));
//	printf("%d\n", factorial1(n));
//
//}


