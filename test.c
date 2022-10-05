#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

void babble_sort1(int* arr, int sz)
{
	//冒泡排序
	int i;
	//printf("%p\n", arr);
	for (i = 0; i < sz - 1; i++)
	{
		int j;
		int flag = 1;//假设这一趟要排序的数据已经有序
		for (j = 0; j < sz - 1; j++)
		{
			if (*(arr+j) > *(arr + (j+1)))
			{
				int tmp = *(arr + (j + 1));
				*(arr + (j + 1)) = *(arr + j);
				*(arr + j) = tmp;
				flag = 0;//数据还不完全有序
			}
		}
		if (flag == 1)
		{
			break;//如果已经有序，跳出循环
		}
	}
}

void babble_sort2(int arr[], int sz)
{
	//printf("%d\n", arr[1]);
	int i;
	for (i = 0; i < sz - 1; i++)
	{
		int j;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

int main()
{
	int i;
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	babble_sort1(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	babble_sort2(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//int main()
//{
//	int arr1[2][3] = { 1,2,3,4 };
//	int arr2[3][4] = { {1,2,3},{4,5,6},{7} };
//	printf("%d\n", arr1[0][1]);
//	return 0;
//}

//int main()
//{
//	int i;
//	int j;
//	int arr1[] = { 1,2,3,4,5,6 };
//	char arr2[] = "abcdef";
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int len = strlen(arr2);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr1[%d] = %p\n", i, &arr1[i]);
//	}
//	for (j = 0; j < len; j++)
//	{
//		printf("&arr2[%d] = %p\n", j, &arr2[j]);
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = { 'a','b','c' };
//	char arr2[] = "abc";
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));
//	//sizeof求arr所占空间大小，7个char元素 7*1=7
//	printf("%d\n", strlen(arr));
//	//strlen求字符串长度
//	return 0;
//}

//void hanoi(int n, char a, char b, char c)
//{
//	if (1 == n)
//	{
//		printf("%c>--->%c\n", a, c);
//	}
//	else
//	{
//		hanoi(n - 1, a, c, b);
//		printf("%c>--->%c\n", a, c);
//		hanoi(n - 1, b, a, c);
//	}
//}
//
//int main()
//{
//	//汉诺塔问题
//	int n;
//	scanf("%d", &n);
//	hanoi(n, 'A', 'B', 'C');
//	return 0;
//}

//int frog_jump(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		return frog_jump(n - 1) + frog_jump(n - 2);
//	}
//}
//
//int main()
//{
//	//青蛙跳台阶问题
//	int n;
//	int count = 0;
//	scanf("%d", &n);
//	count = frog_jump(n);
//	printf("%d\n", count);
//	return 0;
//}

//int fib1(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib1(n - 1) + fib1(n - 2);
//	}
//}
//
//int fib2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int i;
//	for (i = n; i > 2; i--)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//
//int main()
//{
//	//求第n个斐波那契数列
//	long int n;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib1(n);
//	printf("ret = %d\n", ret);
//	ret = fib2(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//int Fac1(int n)
//{
//	int i;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int Fac2(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac2(n - 1);
//	}
//}
//
//int main()
//{
//	int n;
//	int ret;
//	scanf("%d", &n);
//	ret = Fac1(n);
//	printf("ret = %d\n", ret);
//	ret = Fac2(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}