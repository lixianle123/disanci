/*think2_ 1.cpp:C++Դ����example2_01.cpp ��˼������ϰ,������*/
#include <iostream>

#include <iomanip>  
#include<windows.h>
using namespace std;

int digit(int n);

int main()
{

	char c;
	int a;
	float f;

	cin >> c >> a >> f;
	a = a + c;
	f = f + 2 * a;

	cout.precision(digit((int)(f)) + 1); cout.precision(n);
	cout << "c=" << c << "  a=" << a << "  f=" << f << endl;
	return 0;
}
int digit(int n)
{
	int d = 0; //ͳ��n��λ��
	do
	{
		n = n / 10;
		d++;
	} while (n);
	return d;
	system("pause");
}