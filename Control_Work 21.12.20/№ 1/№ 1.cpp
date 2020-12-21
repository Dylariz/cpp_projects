#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int* arr = new int[a]; // создаём указатель на массив

    for (size_t i = 0; i < a; i++)
        cin >> arr[i]; // заполняем массив
    cout << endl;

    int max = arr[0];
    int res = 0;
    for (size_t i = 1; i < a; i++)
    {
        if (arr[i] > max && arr[i] % 2 == 0 && arr[i] % 10 == 4)
        {
            max = arr[i];
            res = i;
        }
    }

    cout << res;

    delete[] arr; // отчистка массива
    return 0;
}