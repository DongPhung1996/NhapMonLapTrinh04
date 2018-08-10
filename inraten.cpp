#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n;
	cout << "Nhap vao so phan tu cua mang: " << endl;
	cin >> n;
	char a[n];
	cout << "Nhap vao phan tu cua mang a: " << endl;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "Phan tu sau khi nhap la: " << endl;
	for(int i = 0; i < n; i++)
	{
		cout << a[i];
	}
	return 0;
}
