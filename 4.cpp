#include <iostream>
#include<iomanip>
#include<windows.h>
using namespace std;
int sum = 5000;
void main()
{
	int sum = 200;
	int arr[3] = { 10,20,30 };
	{
		int i, sum = 0;
		for (i = 0; i < 3; i++)
			sum += arr[i];
		cout << "sum=" << sum << endl;
		::sum += sum;
		cout << "全局sum=" << ::sum << endl;
	}
	sum *= 2;
	cout << "sum=" << sum << endl;

	cout << "sum=" << sum << endl;
	::sum += sum;
	cout << "全局sum=" << ::sum << endl;
	//return 0;
	system("pause");
}