#include <iostream>

int **createMat(int, int);
void inputMat(int**, int, int);
void transpose(int**, int, int);
void delMat(int**, int);

int main()
{
	int **arr = NULL, rows, columns = 0;
	std::cout << "Enter the number of rows and columns" << std::endl;
	std::cin >> rows >> columns;
	arr = createMat(rows, columns);
	std::cout << "Enter the number of elements in the matrix" << std::endl;
	inputMat(arr, rows, columns);
	transpose(arr, rows, columns);
	delMat(arr, rows);
}
int **createMat(int row, int col)
{
	int **arrp = new int*[row];
	for(int i = 0; i < row; i++)
		*(arrp + i) = new int[col];
	return arrp;
}

void inputMat(int **arr, int row, int col)
{
	for(int i = 0; i < row; i++)
	{	
		for(int j = 0; j < col; j++)
		for(int j = 0; j < col; j++)
			std::cin >> *(*(arr + i) + j);
	}	
}

void transpose(int **arr, int row, int col)
{
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
			std::cout << arr[j][i] << " ";
		std::cout << "\n";
	}
}

void delMat(int **arr, int row)
{
	for(int i = 0; i < row; i++)
		delete [] arr[i];
	delete [] arr;
	
}	