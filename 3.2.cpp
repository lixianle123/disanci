#include <iostream>
#include<iomanip>
#include<windows.h>
using namespace std;
void main()

	int sum = 0;
	int arr[3] = { 0 }, i = 123;
	cout << "i=" << i << endl;
	{
		for (int i = 0; i < 2; i++)
			arr[i] = (i + 5) * 10 + 3;
		cout << "i=" << i << endl;
		arr[2]++;
		cout << "i=" << i << endl;
	}
	cout << "i=" << i << endl;

	for (i = 0; i < 3; i++)
		sum += arr[i];
	cout << "i=" << i << endl;
	for (i = 0; i < 3; i++)
		cout << setw(4) << arr[i];
	cout << endl;
	cout << "i=" << i << ",sum=" << sum << endl;
	//return 0;
	system("pause");
