//example2_07.cpp：形式参数带默认参数值的函数定义及调用示例
#include <iostream>
#include<windows.h>
using namespace std;
void Fun(int i, int j, int k = 10);  //原型声明中形参j和k分别指定了默认参数值5和10
int main()
{
	Fun(20);                    	//实际参数个数少于形式参数，20与i对应,至少有一个实参
									//形式参数j和k分别使用默认参数值5和10
	Fun(20, 30);                 	//形式参数k使用默认参数值10
	Fun(20, 30, 40);               	//实际参数个数等于形参个数，都不使用默认参数值
	return 0;
}
void Fun(int i, int j, int k)         //原型中已指定了默认参数值，在定义的首部不能再指定
{
	cout << i << "  " << j << "  " << k << endl;
	system("pause");
}