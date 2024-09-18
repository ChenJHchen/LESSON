#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int code = 0;
//	scanf("%d",&code);
//	if (code == 1)
//	{
//
//		printf("hehe\n");
//	}
//	return 0;
//}



//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//	{
//		printf("ÆæÊý\n", num);
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		
//		printf("%d ", i);
//		i += 2;
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	
//	return 0;
//}



//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//        {
//            printf("hehe\n");
//        }
//    }
//    else
//    {
//        printf("haha\n");
//    }
//    return 0;
//}



//#define PI 3.1415926   //ºê¶¨Òå
//int main()
//{
//	double r = 18.5;
//	double area = 0;
//	double length = 0;
//	area = PI * r * r;
//	length = 2 * PI * r;
//	printf("area = %6.2f,length = %6.2f\n", area, length);
//
//	return 0;
//}


//int main()
//{
//	short a = -12345;
//	short b = 23456;
//	long sum1 = 0;
//	unsigned short c = 52800;
//	unsigned long sum2 = 0;
//	sum1 = a - b;
//	sum2 = c + b;
//	printf("sum1 = %d,sum2 = %u\n", sum1, sum2);
//	return 0;
//}


//int main()
//{
//	float a = 0;
//	double b = 0;
//	a = 1234.111111f;
//	b = 1234.111111;
//	printf("\na=%f,b=%f\n", a, b);
//	printf("a=%f\nb=%f\n", a, b);
//
//	return 0;
//}

//
//int main()
//{
//	printf("c\tlanguags\be\rC\n");
//	printf("is\tusef\165\x6c\n");
//	return 0;
//}



//int main()
//{
//	char ch1 = 0;
//	int ch2 = 0;
//	ch1 = 'A';
//	ch2 = 'B';
//	printf("%c %c\n", ch1, ch2);
//	printf("%d %d\n", ch1, ch2);
//	ch1 = 97;
//	ch2 = 98;
//	printf("%c %c\n", ch1 + 6, ch2 + 8);
//	printf("%d %d\n", ch1 + 6, ch2 + 8);
//
//
//	return 0;
//}


//int main()
//{
//	int k = 10;
//	int j = 20;
//	printf("j = %d\n", j);
//	j = k + 5;
//	printf("j = %d\n", j);
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	double b = 3.5;
//	a = b + 2.1;
//	printf("a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	double y = 7.56;
//	int a = 2;
//	int b = 0;
//	b = (int)y % a;
//	printf("b = %d\n", b);
//		return 0;
//}



//int main()
//{
//	int i = 5;
//	int j = 5;
//	i++;
//	++j;
//	printf("%d %d\n", i, j);
//	return 0;
//}


int main()
{
	//int i = 1;
	//int j = 1;
	//int m = 0;
	//m = i++;
	//printf("i = %d\n m = %d\n", i, m);//2  1
	//m = ++j;// 3 3
	////printf("i = %d\n m = %d\n", i, m); // 3  3
	//printf("j = %d\n m = %d\n", j, m);//  2  2
	//printf(" i = %d j =%d\n", i--, --j);// 2 1


	/*int  a = 2;
	printf("a = %d\n", a--);*/


	//int i = 1;
	//printf("%d\n", -i++); // -1
	//printf("i = %d\n", i);//2
	printf("\\ \\ 1 2 3 4 \\ \\ \n");
	int c = sizeof("\\\\1234\\\\\n");
	printf("c = %d\n", c);
	return 0;
}