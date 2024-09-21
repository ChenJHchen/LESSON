#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() 
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//		
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//			//j<=sqrt(i)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
#include<math.h>
// int is_prime(int n)
//{
//	 int j = 0;
//	 for (j = 2; j <= sqrt(n); j++)
//	 {
//		 if (n % j == 0)
//		 {
//			 return 0;
//		 }
//	 }
//	 return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}



//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0)
//
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//			}
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//			
//
//			
//		
//	}
//	
//
//	return 0;
//}


//int is_leap_year(int y)
//{
//	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		/*if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}*/
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//int binary_search(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，小标是 %d\n", ret);
//	}
//	return 0;
//
//}


//void test(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	test(&num);
//
//	printf("%d\n" ,num);
//	
//
//	return 0;
//}


