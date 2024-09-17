#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}



//void test()
//{
//	static int a = 1;
//	//statci修饰局部变量的时候
//	//局部变量出了作用域不销毁
//	//本质上static修饰变量的时候
//	//是改变了变量的存储位置
//
//	//存储位置的改变影响了变量的生命周期
//
//	
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//extern int g_val;
//
////extern 声明外部符号
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//extern int ADD;
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d\n", z);
//	return 0;
//}


//#define ADD(x,y) ((x)+(y))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}




//struct Stu
//{
//
//
//	//成员
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//int main()
//{
//	struct Stu s = { "张山",20,"男","111111111" };
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	printf("%s %s %s %d\n", s.name, s.tele, s.sex, s.age);
//	print(&s);
//
//
//	return 0;
//}
//
//

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = a / b;
//	int n = a % b;
//	printf("%d %d\n", m, n);
//	return 0;
//}




