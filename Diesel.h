#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
 
void InputSize(int32_t& size){
    cout << '\n' << "Enter your size:";
    cin >> size;
}
bool CheckSize(int32_t size){
    return size > 0;
}
void FillArray(double* arr,int32_t size){
     for (int32_t i = 0;i < size;++i){
        cin >> arr[i];
    }
}
int32_t MaxDigit(double* arr,int32_t size){
    int32_t max{0};
    for (int32_t i = 1;i < size;++i){
        if (arr[i] > arr[max]){
             max = i;
        }
    }
    return max;

}
int32_t MinDigit(double* arr,int32_t size){
    int32_t min{0};
     for(int32_t i = 1;i < size;++i){
        if (arr[i] < arr[min]){
             min = i;
        }
    }
    return min;
}

double  CalculateAverage(double* arr,int32_t size){
    double sum{};
    int32_t count{};
    int32_t maxd = MaxDigit(arr,size);
    int32_t mind = MinDigit(arr,size);
    if (mind > maxd){
        std::swap(mind,maxd);
    }
    for (int32_t i = mind + 1;i < maxd;++i){
        sum += arr[i];
        ++count;
    }
    if (count == 0){
        return 0;
    }
    delete [] arr;
    return sum / count ;
}
bool CheckSimple(double digit ){
	for (int32_t i = 2;i <= sqrt(digit);++i){
		if (static_cast<int32_t>(digit) % i == 0){
			return false;
		}
	}
	return true;
}
double SumSimple(double* arr, int32_t size) {
    int32_t sum{};
    for (int32_t i = 0; i < size; ++i) {
        if (CheckSimple(arr[i])) {
            sum += arr[i];
        }
    }
    return sum;
}

template <typename T>
void BubbleSort(T* doubleArray, int32_t size) {
    for (int32_t i = 0; i < size - 1; ++i) {
        for (int32_t j = 0; j < size - i - 1; ++j) {
            if (doubleArray[j] > doubleArray[j + 1]) {// Use `CalculateAverage` to find the average of the double array
                T temp = doubleArray[j];
                doubleArray[j] = doubleArray[j + 1];
                doubleArray[j + 1] = temp;
            }
        }
    }
}
template <typename T>
void ReverseArray(T* doubleArray, int32_t size) {
    for (int32_t i = 0; i < size / 2; ++i) {
        T temp = doubleArray[i];
        doubleArray[i] = doubleArray[size - i - 1];
        doubleArray[size - i - 1] = temp;
    }
}
