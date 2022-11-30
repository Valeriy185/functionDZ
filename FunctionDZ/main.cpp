#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 5;
const int N = (ROWS * COLS);
void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
void Print(T arr[], const int n);

template <typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);


void Sort_Rows(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort_Rows(double arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
void Sort_Cols(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
void Sort_all_arr(T arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);
float Sum(float arr[], const int n);
double Sum(double arr[], const int n);
char Sum(char arr[], const int n);

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);

double AVG(int arr[], const int n);
double AVG(double arr[], const int n);
float AVG(float arr[], const int n);
double AVG(char arr[], const int n);

double AVG(int arr[ROWS][COLS], const int ROWS, const int COLS);
double AVG(double arr[ROWS][COLS], const int ROWS, const int COLS);
float AVG(float arr[ROWS][COLS], const int ROWS, const int COLS);
char AVG(char arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);

int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);

int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);

void shiftLeft(int arr[], const int n, int lengthShift);
void shiftLeft(double arr[], const int n, int lengthShift);

void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int lengthShift);
void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int lengthShift);

void shiftRight(int arr[], const int n, int lengthShift);
void shiftRight(double arr[], const int n, int lengthShift);

void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int lengthShift);
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int lengthShift);

template <typename T>
void Output(T arr[], const int n, int lengthShift);
template <typename T>
void Output(T arr[ROWS][COLS], const int ROWS, const int COLS, int lengthShift);
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int lengthShift = 0;
	cout << "На сколько чисел сделать сдвиг в массивах (от 0 до 5): "; cin >> lengthShift;
	cout << "_____________________________________________________________________________" << endl
		<< "\t\t" << "Одномерный масcив int" << endl
		<< "_____________________________________________________________________________" << endl;
	int arr_int[n];
	Output(arr_int, n, lengthShift);
	cout << "_____________________________________________________________________________" << endl
		<< "\t\t" << "Одномерный масcив double" << endl
		<< "_____________________________________________________________________________" << endl;
	double arr_double[n];
	Output(arr_double, n, lengthShift);
	cout << "_____________________________________________________________________________" << endl
		<< "\t\t" << "Одномерный масcив float" << endl
		<< "_____________________________________________________________________________" << endl;

	int arr_2_int[ROWS][COLS];
	Output(arr_2_int, ROWS, COLS, lengthShift);
	cout << "_____________________________________________________________________________" << endl
		<< "\t\t" << "Двумерный масcив double" << endl
		<< "_____________________________________________________________________________" << endl;
	double arr_2_double[ROWS][COLS];
	Output(arr_2_double, ROWS, COLS, lengthShift);
}
template <typename T>
void Output(T arr[], const int n, int lengthShift) {
	FillRand(arr, n);
	cout << "\tМассив:                   "; Print(arr, n);
	Sort(arr, n);
	cout << "\tСортировка масива:        "; Print(arr, n);
	shiftLeft(arr, n, lengthShift);
	cout << "\tСдвиг массива в лево: " << lengthShift << " чисел(о/а)" << endl;
	cout << "\t			  "; Print(arr, n);
	shiftRight(arr, n, lengthShift);
	cout << "\tСдвиг массива в право: " << lengthShift << " чисел(о/а)" << endl;
	cout << "\t			  "; Print(arr, n);
	cout << "\tСумма всех чисел в масcиве: " << Sum(arr, n) << endl;
	cout << "\tСреднее арифметическое значение чисел в массиве: " << AVG(arr, n) << endl;
	cout << "\tМинимальное число в массиве: " << minValueIn(arr, n) << endl;
	cout << "\tМаксимальное число в массиве: " << maxValueIn(arr, n) << endl;
}

template <typename T>
void Output(T arr[ROWS][COLS], const int ROWS, const int COLS, int lengthShift) {
	FillRand(arr, ROWS, COLS);
	cout << "\tДвумерный массив: " << endl;
	cout << "\t"; Print(arr, ROWS, COLS);
	Sort_Rows(arr, ROWS, COLS);
	cout << "\tСортировка строк двумерного масива: " << endl;
	cout << "\t"; Print(arr, ROWS, COLS);
	Sort_Cols(arr, ROWS, COLS);
	cout << "\tСортировка столбцов двумерного масива: " << endl;
	cout << "\t"; Print(arr, ROWS, COLS);
	Sort_all_arr(arr, ROWS, COLS);
	cout << "\tСортировка всего двумерного масива: " << endl;
	cout << "\t"; Print(arr, ROWS, COLS);
	shiftLeft(arr, ROWS, COLS, lengthShift);
	cout << "\tСдвиг двумерного масива в лево на: " << lengthShift << " чисел(о/а)" << endl;
	cout << "\t"; Print(arr, ROWS, COLS);
	shiftRight(arr, ROWS, COLS, lengthShift);
	cout << "\tСдвиг двумерного масива в право на: " << lengthShift << " чисел(о/а)" << endl;
	cout << "\t"; Print(arr, ROWS, COLS);
	cout << "\tСумма всех чисел двумерного массива: " << Sum(arr, ROWS, COLS) << endl;
	cout << "\tСреднее арифметическое значение чисел в двумерном массиве: " << AVG(arr, ROWS, COLS) << endl;
	cout << "\tМинимальное значение в масиве " << minValueIn(arr, ROWS, COLS) << endl;
	cout << "\tМаксимальное значение в масиве " << maxValueIn(arr, ROWS, COLS) << endl;
}

int minValueIn(int arr[], const int n) 
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}
double minValueIn(double arr[], const int n) 
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}

int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS) 
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)
				min = arr[i][j];
		}
	}
	return min;
}
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS) 
{
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)
				min = arr[i][j];
		}
	}
	return min;
}

int maxValueIn(int arr[], const int n) 
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
double maxValueIn(double arr[], const int n) 
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}


int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS) 
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)
				max = arr[i][j];
		}
	}
	return max;
}
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS) 
{
	double max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)
				max = arr[i][j];
		}
	}
	return max;
}

double AVG(int arr[], const int n) 
{
	return (double)Sum(arr, n) / n;
}
double AVG(double arr[], const int n) 
{
	return Sum(arr, n) / n;
}
float AVG(float arr[], const int n)
{
	return Sum(arr, n) / n;
}
double AVG(char arr[], const int n) 
{
	return Sum(arr, n) / n;
}

double AVG(int arr[ROWS][COLS], const int ROWS, const int COLS) 
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS + COLS);
}
double AVG(double arr[ROWS][COLS], const int ROWS, const int COLS) 
{
	return Sum(arr, ROWS, COLS) / (ROWS + COLS);
}
float AVG(float arr[ROWS][COLS], const int ROWS, const int COLS) 
{
	return Sum(arr, ROWS, COLS) / (ROWS + COLS);
}
char AVG(char arr[ROWS][COLS], const int ROWS, const int COLS) 
{
	return Sum(arr, ROWS, COLS) / (ROWS + COLS);
}

int Sum(int arr[], const int n) 
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n) 
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
float Sum(float arr[], const int n) 
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
char Sum(char arr[], const int n) 
{
	char sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS) 
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS) 
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS) 
{
	float sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS) 
{
	char sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(float arr[], const int n) 
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 1000;
		arr[i] /= 10;
	}
}
void FillRand(char arr[], const int n) 
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = (char)rand() % 100;
	}
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;

		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}
	}
}


template <typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template <typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
		cout << "\t";

	}
	cout << endl;
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
	}
}

void Sort_Rows(int arr[ROWS][COLS], const int ROWS, const int COLS) 
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = j + 1; k < COLS; k++)
			{
				if (arr[i][k] < arr[i][j]) {
					int buffer = arr[i][j];
					arr[i][j] = arr[i][k];
					arr[i][k] = buffer;
				}
			}
		}
	}
}
void Sort_Rows(double arr[ROWS][COLS], const int ROWS, const int COLS) 
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = j + 1; k < COLS; k++)
			{
				if (arr[i][k] < arr[i][j]) {
					double buffer = arr[i][j];
					arr[i][j] = arr[i][k];
					arr[i][k] = buffer;
				}
			}
		}
	}
}

template <typename T>
void Sort_Cols(T arr[ROWS][COLS], const int ROWS, const int COLS) 
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i + 1; k < ROWS; k++)
			{
				if (arr[k][j] < arr[i][j]) {
					T buffer = arr[i][j];
					arr[i][j] = arr[k][j];
					arr[k][j] = buffer;
				}
			}
		}
	}
}

template <typename T>
void Sort_all_arr(T arr[ROWS][COLS], const int ROWS, const int COLS) 
{
	int k = 0;
	T arr_save[N];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++, k++)
		{
			arr_save[k] = arr[i][j];
		}
	}
	Sort(arr_save, N);
	k = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++, k++)
		{
			arr[i][j] = arr_save[k];
		}
	}
}

void shiftLeft(int arr[], const int n, int lengthShift) 
{
	for (int i = 0; i < lengthShift; i++)
	{
		int save = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[(i + 1)];
		}
		arr[(n - 1)] = save;
	}
}
void shiftLeft(double arr[], const int n, int lengthShift) 
{
	for (int i = 0; i < lengthShift; i++)
	{
		double save = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[(i + 1)];
		}
		arr[(n - 1)] = save;
	}
}


void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int lengthShift) 
{
	{
		int save = 0;
		for (int i = 0; i < lengthShift; i++)
		{
			for (int j = 0; j < ROWS; j++)
			{
				save = arr[j][0];
				for (int k = 0; k < COLS; k++)
				{
					arr[j][k] = arr[j][k + 1];
				}
				arr[j][(COLS - 1)] = save;
			}
		}

	}
}
void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int lengthShift) 
{
	{
		double save = 0;
		for (int i = 0; i < lengthShift; i++)
		{
			for (int j = 0; j < ROWS; j++)
			{
				save = arr[j][0];
				for (int k = 0; k < COLS; k++)
				{
					arr[j][k] = arr[j][k + 1];
				}
				arr[j][(COLS - 1)] = save;
			}
		}

	}
}

void shiftRight(int arr[], const int n, int lengthShift) 
{
	for (int i = 0; i < lengthShift; i++)
	{
		int save = arr[(n - 1)];
		for (int i = (n - 1); i > 0; i--)
		{
			arr[i] = arr[(i - 1)];
		}
		arr[0] = save;
	}
}
void shiftRight(double arr[], const int n, int lengthShift) 
{
	for (int i = 0; i < lengthShift; i++)
	{
		double save = 0;
		save = arr[(n - 1)];
		for (int i = (n - 1); i > 0; i--)
		{
			arr[i] = arr[(i - 1)];
		}
		arr[0] = save;
	}
}
void shiftRight(float arr[], const int n, int lengthShift) 
{
	for (int i = 0; i < lengthShift; i++)
	{
		float save = 0;
		save = arr[(n - 1)];
		for (int i = (n - 1); i > 0; i--)
		{
			arr[i] = arr[(i - 1)];
		}
		arr[0] = save;
	}
}
void shiftRight(char arr[], const int n, int lengthShift) 
{
	for (int i = 0; i < lengthShift; i++)
	{
		char save = 0;
		save = arr[(n - 1)];
		for (int i = (n - 1); i > 0; i--)
		{
			arr[i] = arr[(i - 1)];
		}
		arr[0] = save;
	}
}

void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int lengthShift) 
{
	{
		int save = 0;
		for (int i = 0; i < lengthShift; i++)
		{
			for (int j = 0; j < ROWS; j++)
			{
				save = arr[j][COLS - 1];
				for (int k = (COLS - 1); k >= 0; k--)
				{
					arr[j][k] = arr[j][k - 1];
				}
				arr[j][0] = save;
			}
		}

	}
}
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int lengthShift) 
{
	{
		double save = 0;
		for (int i = 0; i < lengthShift; i++)
		{
			for (int j = 0; j < ROWS; j++)
			{
				save = arr[j][COLS - 1];
				for (int k = (COLS - 1); k >= 0; k--)
				{
					arr[j][k] = arr[j][k - 1];
				}
				arr[j][0] = save;
			}
		}

	}
}

