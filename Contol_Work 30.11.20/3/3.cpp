#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n; // n - размер матрицы
	cin >> n;

	int** arr = new int* [n]; // создаём указатель на массив указателей - n
	for (size_t i = 0; i < n; i++)
		arr[i] = new int[n]; // заполняем массив указателей массивами - n

	for (size_t i = 0; i < n; i++)
		for (size_t j = 0; j < n; j++) // заполняем массив сравнивая i и j
		{
			if (i == j)
				arr[i][j] = 0;
			if (i < j)
				arr[i][j] = 1;
			if (i > j)
				arr[i][j] = -1;
		}
	cout << endl;

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
			cout << arr[i][j] << " "; // вывод массива
		cout << endl;
	}

	for (size_t i = 0; i < n; i++)
		delete[] arr[i]; // отчистка адресов в массиве
	delete[] arr; // отчистка адреса на массив
	return 0;
}