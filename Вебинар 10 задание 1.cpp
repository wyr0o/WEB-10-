#include <iostream>
#include <Windows.h>

void inputArr(int size, int* arr)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << "arr[" << i << "] = ";
		std::cin >> arr[i];

	}
}

int main()
{
	SetConsoleOutputCP(1251);

	std::cout << "введите размер массива: ";
	int size = 0;
	std::cin >> size;

	int* arr = new int[size]();

	inputArr(size, arr);
	std::cout << "Введённый массив: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i]<< " ";
	}
	delete[] arr;
}