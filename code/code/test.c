#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int num = 10;
//int main()
//{
//	int num = 1;
//	printf("%d\n", num);
//	return 0;
//	//1 
//}


//int main()
//{
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    \n");
//
//	return 0;
//}


//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man\n");
//	return 0;
//}

//int main()
//{
//	printf("I lost My Cellphone!\n");
//	return 0;
//}


//int main()
//{
//	int a = 40;
//	int c = 212;
//	printf("%d\n", -(8 + 22) * a - 10 + c / 2);
//	return 0;
//}


//#include<string.h>
//int main()
//{
//	printf("%zd\n", strlen("c:\test\121"));
//	return 0;
//}
//
////7


//#include<string.h>
//int main()
//{
//	char arr[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr));
//	return 0;
//	//随机值
//}

//int Max(int x, int y)
//{
//	return (x > y ? x: y);
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int num3 = Max(num1, num2);
//	printf("Max = %d\n", num3);
//	return 0;
//}


//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	if (x < 0)
//	{
//		y = 1;	
//	}
//	else if (x == 0)
//	{
//		y = 0;	
//	}
//	else
//	{
//		y = -1;
//	}
//	printf("%d\n", y);
//	return 0;
//}



//int main()
//{
//	/*int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);*/
//
//
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	//整个数组大小
//	printf("%d\n", sizeof(arr[0]));
//	//一个数组的大小
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	//数组的元素个数
//	return 0;
//	//sizeof 是单目操作符 不是函数
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int r = a > b ? a : b;
//	printf("%d\n", r);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = (c = a - 2, a = b + c, c - 3);
//	printf("%d\n", d);
//	
//	return 0;
//}


//int main()
//{
//	printf("This is my first my C program\n");
//	//其中 main是程序的入口
//	//并且只能有一个
//	//一工程中可以有多个源文件
//	//但多个.c文件只能有一个main函数
//	return 0;
//}


//int main()
//{
// 
// //每个数据类型的大小
//    printf("%zd\n", sizeof(char));
//    printf("%zd\n", sizeof(short));
//    printf("%zd\n", sizeof(int));
//    printf("%zd\n", sizeof(long));
//    printf("%zd\n", sizeof(long long));
//    printf("%zd\n", sizeof(float));
//    printf("%zd\n", sizeof(double));
//    printf("%zd\n", sizeof(long double));
//    return 0;
//}


//int a = 100;
//
////全局变量
//int main()
//{
//	int a = 10;
//	//局部变量
//	printf("a = %d\n", a);
//	return 0;
//	//a = 10;
//	//当全局变量和局部变量同名时
//	//局部变量优先
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("sum = %d\n", sum);
//	return 0;
//}


//enmu

//enum sex
//{
//	male,
//	female,
//	secret
//};
//int main()
//{
//	enum sex s = male;
//	enum sex sa = female;
//	enum sex ssa = secret;
//
//
//
//	printf("%d\n", s);
//	printf("%d\n", sa);
//	printf("%d\n", ssa);
//	//默认1开始
//
//
//	return 0;
//}