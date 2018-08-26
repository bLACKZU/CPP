#include <iostream>

int **createMat(int, int);
int inputMat(int**, int, int);
void **sparse(int**, int**, int, int, int, int);
void delMat(int**, int);

int main()
{
	int **arr = nullptr, **sparseMat = nullptr, rows, columns, nonZeroCount = 0;
	int consCol = 3;
	std::cout << "Enter the number of rows and columns" << std::endl;
	std::cin >> rows >> columns;
	arr = createMat(rows, columns);
	std::cout << "Enter the number of elements in the matrix" << std::endl;
	inputMat(arr, rows, columns);
	nonZeroCount = inputMat(arr, rows, columns);
	sparseMat = createMat(nonZeroCount, consCol);
	sparse(sparseMat, arr, nonZeroCount, rows, columns, nonZeroCount); 
	delMat(arr, rows);
	delMat(sparseMat, nonZeroCount); 
}
int **createMat(int row, int col)
{
	int **arrp = new int*[row];
	for(int i = 0; i < row; i++)
		*(arrp + i) = new int[col];
	return arrp;
}

int inputMat(int **arr, int row, int col)
{
	int nonZeroCount = 0;
	for(int i = 0; i < row; i++)
	{	
		for(int j = 0; j < col; j++)
		{
			std::cin >> *(*(arr + i) + j);
			if(*(*(arr + i) + j) != 0)
				nonZeroCount++;
		}	
	}
	return nonZeroCount;
}

void **sparse(int **sparseMat, int **arr, int spRow, int row, int col, int nonZeroCount)
{
	int z, x, bak = 0;
	sparseMat[0][0] = row;
	sparseMat[0][1] = col;
	sparseMat[0][2] = nonZeroCount;
	for(z = 0; z < spRow; z++)
	{
		bak = z;
		if(x < col && *(*(arr + z) + x) != 0)
		{
			sparseMat[z + 1][0] = z;
			sparseMat[z + 1][1] = x;
			sparseMat[z + 1][2] = *(*(arr + z) + x);
			x++;
			z = bak;
			continue;
		}
		else if(x < col && *(*(arr + z) + x) == 0)
		{
			x++;
			z = bak;
			continue;
		}
		else if(x == col)
		{
			x = 0;
			continue;
		}	
	}	
}			

void delMat(int **arr, int row)
{
	for(int i = 0; i < row; i++)
		delete [] arr[i];
	delete [] arr;
}	