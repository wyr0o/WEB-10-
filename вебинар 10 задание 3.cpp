#include <iostream>
#include <Windows.h>

int** create_two_dim_array(int rows, int columns)
{
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[columns]();  
	}
	return arr;
}

void fill_two_dim_array(int** arr, int rows, int columns) 
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			arr[i][j] = (i+1) * (j+1);
		}
	}
}

void print_two_dim_array(int** arr, int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}

void delete_two_dim_array(int** arr, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

int main()
{
	SetConsoleOutputCP(1251);
	int rows = 0;
	int columns = 0;
	std::cout << "Введите количество строк: ";
	std::cin >> rows;
	std::cout << "Введите количество столбцов: ";
	std::cin >> columns;
	int** arr =create_two_dim_array(rows, columns);
	fill_two_dim_array(arr, rows, columns);
	print_two_dim_array(arr, rows, columns);
	delete_two_dim_array(arr, rows);

}