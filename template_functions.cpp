#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// Эта ебатория помогает нам работать с различными типами данных
template<typename T>
void print_arr(T *arr, int length) {
    for (int i = 0; i < length; i++)
    {
        cout << *(arr + i);
    }
    
}

int main() {
    int arr[] = {3,5,2,5,1, -9};

    //<int> обозначает, что мы передаем именно int, хотя компилятор может и сам определить
    print_arr<int>(arr, 6);
    return 0;
}