#include <iostream>
#include <Windows.h>

double* create_array(int size)
{
	return new double[size]();
}

int main()
{
	SetConsoleOutputCP(1251);

	int size = 0;
	std::cout << "Введите размер массива: ";
	std::cin >> size;
	double* arr = create_array(size);
	std::cout << "Массив: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}

	delete[] arr;
}