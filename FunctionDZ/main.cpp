#include<iostream>
#include<math.h>
#define DEGREE
using namespace std;
//int Power(int a, int n); //Прототип функции
void main()
{
	setlocale(LC_ALL, "");
#ifdef DEGREE
	int N, a, n;
	cout << "Введите число: "; cin >> a; cout << endl;
	cout << "Введите степень числа: "; cin >> n; cout << endl;
	N = pow(a, n);
	cout << N;
#endif // DEGREE

     //int a, n;
	//cout << "Введите число: "; cin >> a; cout << endl;
	//cout << "Введите степень числа: "; cin >> n; cout << endl;
	//int N = Power(a, n); //Вызов функции
	//cout << a << " В степени " << n << " = " << Power(a, n) << endl;

}
/*int Power(int a, int n) //Реализация функции
{
	int  N = a ^ n; //НЕ РАБОТАЕТ :-(((  !!!
	return N;

	
}*/
