#include <iostream>

using std::cout;
using std::cin;

int32_t FindElement(int32_t* array, int32_t size, int64_t number)
{
	int32_t temp{};
	int32_t i{};
	while (i < size)
	{
		if (array[i] = number)
		{
			temp = i;
		}
		++i;
	}
	if (temp == 0)
	{
		return -1;
	}
	return temp;
}
int32_t MaxElement(int32_t* array, int32_t size)
{
	int32_t max{};
	int32_t i{};
	while (i < size)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
		++i;
	}
	return max;
}

int32_t MinElement(int32_t* array, int32_t size)
{
	int32_t min{};
	int32_t i{};
	while (i < size)
	{
		if (array[i] < min)
		{
			min = array[i];
		}
		++i;
	}
	return min;
}
void EnterSize(int32_t& size) {
	cout << '\n' << "Enter your size:";
	cin >> size;
}

void InputArray(int32_t* array, int32_t size) {
	for (int32_t i = 0; i < size; ++i) {
		cout << '\n' << "Input your array:";
		cin >> array[i];
	}
}

void PrintArray(int32_t* array, int32_t size)
{
	for (int32_t i = 0; i < size; i++)
	{
		cout << array[i] << " , ";
	}
	cout << "end, elements of array were printed";
}

int32_t CountElements(int32_t* array, int32_t size)
{
	int32_t counter{};
	int32_t i{};
	while (i < size)
	{
		if (array[i] == 0)
		{
			while (i < size)
			{
				if (array[i + 1] != 0)
				{
					counter++;
					++i;
				}
				else return counter;
			}
		}
		i++;
	}
	return -1;
}

void InputNumber(int64_t number) 
{
	std::cout << " Enter your number ";
	std::cin >> number;
}

void DeleteNegativeNumbersAndSortZeros(int32_t* array, int32_t size) {
    int32_t writeIndex = 0;
    // First pass: Remove negatives and keep non-negative values
    for (int32_t i = 0; i < size; ++i) {
        if (array[i] >= 0) {
            array[writeIndex++] = array[i];
        }
    }
    // Second pass: Fill the remaining positions with zeros
    for (int32_t i = writeIndex; i < size; ++i) {
        array[i] = 0;
    }
}
