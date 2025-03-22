#include <iostream>
#include <cstdint>

void InputSize(int32_t&);

bool CheckSize(int32_t);

void FillArray(double*,int32_t);

int32_t MaxDigit(double*,int32_t);

int32_t MinDigit(double*,int32_t);

double  CalculateAverage(double*, int32_t);

bool CheckSimple(double);

double SumSimple(double*,int32_t);

template <typename T>
void BubbleSort(T* arr, int32_t size) {
    for (int32_t i = 0; i < size - 1; ++i) {
        for (int32_t j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
template <typename T>
void ReverseArray(T* array, int32_t size) {
    for (int32_t i = 0; i < (size / 2); ++i) {
        T temp = arr[i];
        arr[i] = arr[(size - i) - 1];
        arr[(size - i) - 1] = temp;
    }
}
