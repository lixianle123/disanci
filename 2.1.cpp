#include<iostream>
#include<windows.h>
using namespace std;
namespace one
{
	const int M = 200;
	int inf = 10;
}
namespace two
{
	int x;
	int inf = -100;
}
using namespace one;
using namespace two;
void main()
{
	using two::x;
	x = -100;
	//	cout << inf << endl;
	cout << M << endl;
	two::inf *= 2;
	cout << two::inf << endl;
	cout << x << endl;
	//return 0;
	system("pause");
}