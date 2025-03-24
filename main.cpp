#include "Diesel.h"  
#include "krokodos.h"  
#include <iostream>

int main()
{
    int32_t size;
    
    EnterSize(size);
  
    if (!CheckSize(size)) {
        std::cout << "Size is invalid. Exiting the program.\n";
        return -1; 
    }
   
    int32_t* intArray = new int32_t[size]; 
    double* doubleArray = new double[size]; 
    
    std::cout << "Enter elements for the double array:\n";
    FillArray(doubleArray, size);
    
    std::cout << "Enter elements for the int array:\n";
    InputArray(intArray, size);
    
    std::cout << "Integer Array: ";
    PrintArray(intArray, size);
    
    int32_t maxDigitIndex = MaxDigit(doubleArray, size);
    int32_t minDigitIndex = MinDigit(doubleArray, size);
    std::cout << "\nMax Digit Index (double array): " << maxDigitIndex;
    std::cout << "\nMin Digit Index (double array): " << minDigitIndex << "\n";
    
    int32_t maxElement = MaxElement(intArray, size);
    int32_t minElement = MinElement(intArray, size);
    std::cout << "Max Element (int array): " << maxElement << "\n";
    std::cout << "Min Element (int array): " << minElement << "\n";
    
    DeleteNegativeNumbersAndSortZeros(intArray, size);
    std::cout << "Array after replacing negatives with zero: " << '\n';
    PrintArray(intArray, size);
    
    int64_t number;
    InputNumber(number);
    int32_t index = FindElement(intArray, size, number);
    std::cout << "Index of element : " << index << "\n";
    
    double average = CalculateAverage(doubleArray, size);
    std::cout << "Average of elements between min and max (double array): " << average << "\n";
    
    double simpleSum = SumSimple(doubleArray, size);
    std::cout << "Sum of prime numbers (double array): " << simpleSum << "\n";
   
    BubbleSort(doubleArray, size);
    std::cout << "BubbleSorted Array (double): ";
    for (int32_t i = 0; i < size; ++i) {
        std::cout << doubleArray[i] << " ";
    }
    std::cout << "\n";
   
    ReverseArray(doubleArray, size);
    std::cout << "Reversed Array (double): ";
    for (int32_t i = 0; i < size; ++i) {
        std::cout << doubleArray[i] << " ";
    }
    std::cout << "\n";
    std::cout << "it would be a great project";
    return 0;
}
