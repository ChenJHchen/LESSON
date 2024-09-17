//#define _CRT_SECURE_NO_WARNINGS
//static int g_val = 2024;
////全局变量是有外部链接属性的
////当static修饰全局变量时
////全局变量的外部链接属性
////就变了内部链接属性
////其他源文件就不能使用这个全局变量了




// static int Add(int x, int y)
//{
//	return x + y;
//}


//函数也是具有外部链接属性的
//当static修饰函数时
//函数的外部链接属性就变了的内部链接属性
//其他的源文件就无法使用