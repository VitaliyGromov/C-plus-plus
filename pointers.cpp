#include <iostream>
#include <string>
using namespace std;

/*
    Функция принимает указатель на массив, который в данном случае указывает на первый элемент массива.
        *(arr + i) - сдвиг указателя
*/
int minimal(int* arr, int length) {
    int minEl = *arr;

    for (int i = 0; i < length; i++)
    {
        if (minEl > *(arr + i))
        {
            minEl = *(arr + i);
        }
        
    }
    
    return minEl;
}

int main() {
    // Ссылки
    int num = 10;
    int &a = num;

    a = 15;

    cout << &num << " - " << num << endl;
    cout << &a << " - " << a << endl;

    // Указатели
    int val = 12;
    int* ptrval = &val;

    *ptrval = 34;
    ptrval = nullptr;
    cout << &val << " - " << val << endl;
    cout << ptrval << " - " << *ptrval << endl;

    int arr[] = {4, 5,-7, 9, 8};
    cout << "Minimal: " << minimal(arr, 5);

    return 0;
}