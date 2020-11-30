#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(rand());
	int n, a;
	cin >> n;
	a = n;

	int* arr = new int[n]; // создаём указатель на массив int

	for (size_t i = 0; i < n; i++)
	{
		arr[i] = a; // заполняем массив рандомными числами от 50 до 250
		a--;
	}
	cout << "\nВесь массив: \n";

	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << " "; // вывод всего массива
	}

	cout << endl;
	delete[] arr; // отчистка адреса на массив
	return 0;
}