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
void BubbleSort(T* , int32_t ); 
    
template <typename T>
void ReverseArray(T* , int32_t ); 
