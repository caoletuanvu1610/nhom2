
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
	int a;
	int b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";



	cout << "Nhap vao so a:";
	cin >> a;
	cout << "Nhap vao so b:";
	cin >> b;
	
	cout << "Tong 2 so " << a << " va " << b << " la: " << tong(a, b);
	system("pause");
	return 0;
}