#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(rand());
	int n;
	cin >> n;

	int* arr = new int[n]; // создаём указатель на массив int

	for (size_t i = 0; i < n; i++)
		arr[i] = rand() % 200 + 50; // заполняем массив рандомными числами от 50 до 250
	cout << "\nВесь массив: \n";

	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << " "; // вывод всего массива
	}

	cout << "\n\nЧетные элементы: \n";
	for (size_t i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			cout << arr[i] << " "; // вывод четных элементов массива
	}
	cout << endl;

	delete[] arr; // отчистка адреса на массив
	return 0;
}