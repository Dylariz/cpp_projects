#include <iostream>
using namespace std;
void print(int* arr) 
{
    for (size_t i = 0; i < 15; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void shift(int* arr)
{
    int h = arr[0];
    for (size_t i = 0; i < 14; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[14] = h;
}

int main()
{
    srand(rand());
    int* arr = new int[15]; // создаём указатель на массив

    for (size_t i = 0; i < 15; i++)
        arr[i] = rand() % 99 + 0; // заполняем массив рандомными числами от 0 до 99

    print(arr);
    shift(arr);
    shift(arr);
    print(arr);

    int h = 0;
    for (size_t i = 0; i < 3; i++)
    {
        h = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = h;
    }

    for (size_t i = 0; i < 3; i++)
    {
        h = arr[i + 5];
        arr[i + 5] = arr[9 - i];
        arr[9 - i] = h;
    }

    for (size_t i = 0; i < 3; i++)
    {
        h = arr[i + 10];
        arr[i + 10] = arr[14 - i];
        arr[14 - i] = h;
    }

    print(arr);

    delete[] arr; // отчистка массива
    return 0;
}