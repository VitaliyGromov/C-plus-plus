#include <iostream>
#include <string>
#include <cstring>
using namespace std;

template<class T>
class Array {
    private:
        int length;
        T *arr;
    public:
        Array(T *arr, int length) {
            this->length = length;
            this->arr = new T[length];

            for (int i = 0; i < length; i++)
            {
                *(this->arr + i) = *(arr + i); // Заполняем наш массив тем массивом, что передал пользователь
            }
            
        }

        void get() {
            for (int i = 0; i < this->length; i++)
            {
                cout << *(arr + i) << endl;
            }
        }

        ~Array() {
            delete[] this->arr;
        }
};

int main() {

    int arr1[] = {1,2,3,4,5,6};
    Array<int> arr(arr1, 6);

    float arr2[] = {2.3f, 45.4f};
    Array<float> object(arr2, 2);
    arr.get();
    object.get();
    return 0;
}