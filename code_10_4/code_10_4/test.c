#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>

//int a = 10;

//#define Max 100
//
//enum M
//{
//	A,
//	B,
//	C
//
//};

//
//int  ADD(int x,int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	enum M SS = 10;
//	/*printf("%d\n", A);
//	printf("%d\n", B);
//	printf("%d\n", C);*/
//	printf("%d\n", SS);
//
//
//	printf("This Is My First C Program\n");
//	//其中 main是程序的入口
//	//有且仅有一个
//
//	//
//	printf("%zd\n",sizeof(short));
//	printf("\n");
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(long int));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//
//	/*int a = 100;
//	printf("%d", a);*/
//	当局部变量和全局同名时 ，局部优先
//	/*int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);*/
//
//	/*printf("%d\n", Max);
//	const int a = 10;
//	const 修饰的变量虽然赋予了常属性 其值是不能修改的 但本质还是变量
//	 a = 100;
//	printf("%d\n", a);*/
//
//
//	/*char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	char arr3[] = { 'a','b','c','\0'};
//
//	printf("%s\n", arr1);
//
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);*/
//	\0 是字符串的结束标志，默认在末尾放了\0 计算长度时不算在内
//	printf("C:\\code\\test.c\n");
//	printf("\"\n");
//	printf("'\n");
//	printf("\\\n");
//	printf("\\n\n");
//	printf("%c\n", '\'');
//	/*printf("%d\n", strlen("abcdef"));
//	printf("%d\n", strlen("C:\tset\628\test.c"));*/
//
//
//	/*int code = 0;
//	scanf("%d", &code);
//	if (code == 1)
//	{
//		printf("学习\n");
//	}
//	else
//	{
//		printf("回去看JOJO\n");
//	}*/
//
//
//	/*int code = 0;
//	while (code < 10)
//	{
//		printf("继续\n");
//		code++;
//	}
//	if (code == 10)
//	{
//		printf("Jojo\n");
//	}*/
//
//
//
//
//	/*int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int sum = ADD(a, b);
//	printf("sum = %d\n", sum);*/
//
//
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	/*while(i<10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	printf("\n");*/
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//		printf("\n");
//
//
//	}
//
//
//
//
//	return 0;
//}




//void test()
//{
//    int i = 0;
//    i++;
//    printf("%d ", i);
//}
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        test();
//    }
//    return 0;
//}




//
//void test()
//{
//    static int i = 0;
//    //当static修饰局部变量时 改变了变量的生命周期,在出局部范围时 该变量是不会销毁的
//    //但本质上是修改了存储位置
//    i++;
//    printf("%d ", i);
//}
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        test();
//    }
//    return 0;
//}

//#define定义宏
//#define ADD(x ,y) ((x)+(y))
//
//int main()
//{
//    int sum = ADD(2, 3);
//    printf("sum = %d\n", sum);
//
//    sum = 10 * ADD(2, 3);
//    printf("sum = %d\n", sum);
//	return 0;
//}



//struct Stu
//{
//    char name[20];//名字
//    int age;      //年龄
//    char sex[5];  //性别
//    char id[15];//学号
//};
//int main()
//{
//    //打印结构体信息
//    struct Stu s = { "张三", 20, "男", "20180101" };
//    //.为结构成员访问操作符
//    printf("name = %s age = %d sex = %s id = %s\n", s.name, s.age, s.sex, s.id);
//    //->操作符
//    struct Stu* ps = &s;
//    printf("name = %s age = %d sex = %s id = %s\n", ps->name, ps->age, ps->sex, ps->id);
//    return 0;
//}

//double area(double h ,double w)
//{
//	return h * w;
//}
int main()
{
	//float h = 0;
	//float w = 0;
	//float area = 0;
	//h = 10.5;
	//w = 20.5;
	//area = h * w;
	//printf("area = %6.2f\n", area);


	/*double h1 = 0;
	double h2 = 0;
	double w1 = 0;
	double w2 = 0;
	double s1 = 0;
	double s2 = 0;
	h1 = 10.5;
	w1 = 20.5;
	h2 = 1.5 * h1;
	w2 = 1.5 * w1;
	s1 = area(h1, w1);
	s2 = area(h2, w2);
	printf("area = %6.2f\n", s1 + s2);*/



	//float r = 0;
	//float s = 0;
	//r = 15.5f;
	//s = 2 * 3.14f * r;
	//printf("r = %4.2f,s =%4.2f\n", r, s);
	
	return 0;
}

