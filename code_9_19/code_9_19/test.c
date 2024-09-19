#define _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>
//int main()
//{
	/*int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };

	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	while (i < sz)
	{
		printf("%c ", arr[i]);
		i++;
	}*/


//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (i <= sz)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}






	
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("year=%d\n",year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//
//
//
//
//	return 0;
//}



//int main()
//{
//	float a = 0;
//
//	double b= 0;
//	a = 1234.111111f;
//	b = 1234.111111;
//
//	printf("\na = %f,b = %f\n", a, b);
//	return 0;
//}


//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	while (i<4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d\n", max);
//	return 0;
//}
//#define PI 3.1414926
//int main()
//{
//	double v = 0;
//	double r = 0;
//	scanf("%lf", &r);
//	v = (4.0 / 3) * PI * r * r * r;
//	printf("%.lf\n", v);
//
//	return 0;
//}




#include <stdio.h>

//int main()
//{
//    int arr[] = { 0 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int i = 0;
  /*  while (i <sz-1)
	{
		scanf("%d %d", &arr[i], &arr[i + 1]);
		int num1 = arr[i];
		int num2 = arr[i + 1];
		i++;
		printf("%d\n", num1 + num2);
	}
//	*/
//    while (i < sz - 1)
//    {
//        if (scanf("%d %d", &arr[i], &arr[i + 1]) != 2)
//        {
//      
//            while (getchar() != '\n'); 
//            continue; 
//        }
//
//        int num1 = arr[i];
//        int num2 = arr[i + 1];
//        i++;
//        printf("%d\n", num1 + num2);
//    }
//
//    return 0;
//}





//int main()
//{
//	int i= 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//
//	{
//		ret = ret * i;
//		
//	}
//	printf("%d", ret);
//
//	return 0;
//}


//int main()
//{
//
//
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//
//		scanf("%d", &n);
//		for (i = 1; i <= n; i++)
//	
//		{
//			ret = ret * i;
//			sum = sum + ret;
//			
//		}
//		printf("%d\n", ret);
//		printf("%d\n", sum);
//	return 0;
//}


int main()
{
	int i = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);


	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;

		}
		else
		{
			printf("找到元素，下标 is %d\n", mid);
			break;
		}

	}
	if (left > right)
	{
		printf("找不到\n");
	}

	
	return 0;
}