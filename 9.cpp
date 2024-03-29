//example2_11.cpp：用引用作参数修改对应实际参数变量的值
#include <iostream> 
#include<windows.h>
using namespace std;
void swap(int x, int &y)       	//调用之初参数传递就使得引用参数成为
								//本次调用对应实际参数变量的别名
{
	int t = x;         //这里的引用x和y分别是两个实际参数变量 
	x = y;             //的别名，因此这3条语句实际上实现了
	y = t;             //实际参数变量值的互换
}
int main()
{
	int a = 3, b = 5, c = 10, d = 20;
	cout << "a=" << a << "  b=" << b << endl; //输出交换前的a、b值
	swap(a, b);              //调用函数，参数传递相当于执行了
								//int &x=a; int &y=b;使引用参数获得了初值
	cout << "a=" << a << "  b=" << b << endl; //输出交换后的a、b值
	cout << "c=" << c << "  d=" << d << endl; //输出交换前的c、d值 
	swap(c, d);              //调用函数，参数传递相当于执行了
								//int &x=c; int &y=d; 使引用参数获得了初值
	cout << "c=" << c << "  d=" << d << endl; //输出交换后的c、d值
	system("pause");
	return 0;
}