#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n]; // создаём указатель на массив

    for (size_t i = 0; i < n; i++)
        cin >> arr[i];

    int nMin;
    for (int i = 0; i < n - 1; i++)
    {
        nMin = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[nMin])
                nMin = j;
        if (i != nMin)
        {
            swap(arr[i], arr[nMin]);
        }
    }

    if (arr[0] >= 100)
        cout << 0;
    else 
    {
        for (size_t i = 0; i < n; i++)
        {
            if (arr[i] < 100)
                cout << arr[i] << " ";
            else
                break;
        }
    }

    delete[] arr; // отчистка массива
    return 0;
}