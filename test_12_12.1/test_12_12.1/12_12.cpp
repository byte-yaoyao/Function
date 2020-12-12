//#include<stdio.h>
//int main()
//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
   


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
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
//	printf("请输入需要打印的乘法表数：");
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
//	printf("请输入需要打印的乘法表数:");
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
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。


//#include<stdio.h>
//#include<stdlib.h>
//
//void mul(int n)//multiplication 乘法
//{
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d  ", i, j, i*j);
//			//其中%2d中的2表示输出两格，数向后靠齐，即右对齐；%-2d，则表示数左对齐
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入乘法口诀表的行：");
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
//	printf("请输入一个数：");
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
//	printf("请输入一个数：");
//	scanf("%d", &n);
//	int fac(n);
//	printf("%d\n", fac(n));
//	system("pause");
//	return 0;
//}



//int factorial(int n) //递归
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*factorial(n - 1);//  5*4！到 4*3! 到3*2！.....
//	}
//}
//int factorial1(int n)
//{
//	int sum = 1;
//	for (; n>0; n--)//非递归
//	{
//		sum *= n;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入数字n：");
//	scanf("%d", &n);
//
//	factorial(n);
//	factorial1(n);
//	printf("%d\n", factorial(n));
//	printf("%d\n", factorial1(n));
//
//}


