#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int tong(int a, int b)
{
	int s = 0;
	s = a + b;
	return s;
}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << "\nTong la:" << tong;
	system("pause");
	return 0;
}