#include<iostream>
#include<math.h>
#define DEGREE
using namespace std;
//int Power(int a, int n); //�������� �������
void main()
{
	setlocale(LC_ALL, "");
#ifdef DEGREE
	int N, a, n;
	cout << "������� �����: "; cin >> a; cout << endl;
	cout << "������� ������� �����: "; cin >> n; cout << endl;
	N = pow(a, n);
	cout << N;
#endif // DEGREE

     //int a, n;
	//cout << "������� �����: "; cin >> a; cout << endl;
	//cout << "������� ������� �����: "; cin >> n; cout << endl;
	//int N = Power(a, n); //����� �������
	//cout << a << " � ������� " << n << " = " << Power(a, n) << endl;

}
/*int Power(int a, int n) //���������� �������
{
	int  N = a ^ n; //�� �������� :-(((  !!!
	return N;

	
}*/
