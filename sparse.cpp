#include <iostream>

int **createMat(int, int);
int inputMat(int**, int, int);
void **sparse(int**, int**, int, int, int);
void display(int**, int, int);
void delMat(int**, int);


int main()
{
	int **arr = NULL, **sparseMat = NULL, **resultSp = NULL, rows, columns, nonZeroCount = 0;
	int consCol = 3;
	std::cout << "Enter the number of rows and columns" << std::endl;
	std::cin >> rows >> columns;
	arr = createMat(rows, columns);
	std::cout << "Enter the elements in the matrix" << std::endl;
	nonZeroCount = inputMat(arr, rows, columns);
	sparseMat = createMat(nonZeroCount + 1, consCol);
	sparse(sparseMat, arr, nonZeroCount, rows, columns); 
	std::cout << "The COO representation of the sparse-matrix is" << std::endl;
	display(sparseMat, nonZeroCount, consCol);
	delMat(sparseMat, nonZeroCount); 
	delMat(arr, rows);
}

int **createMat(int row, int col)
{
	int **arrp = new int*[row];
	for(int i = 0; i < row; i++)
		*(arrp + i) = new int[col]();
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

void **sparse(int **sparseMat, int **arr, int spRow, int row, int col)
{
	int z = 0;
	int x = 0;
	int y = 0;
	sparseMat[0][0] = row;
	sparseMat[0][1] = col;
	sparseMat[0][2] = spRow;
	for(z = 0, y = 1; y <= spRow + 1, z != row; )
	{
		if(x < col && *(*(arr + z) + x) != 0)
		{
			sparseMat[y][0] = z;
			sparseMat[y][1] = x;
			sparseMat[y][2] = *(*(arr + z) + x);
			x++;
			y++;
			continue;
		}
		else if(x < col && *(*(arr + z) + x) == 0)
		{
			x++;
			continue;
		}
		else if(x == col)
		{
			x = 0;
			z++;
			continue;
		}
	}	
}			

void display(int **sparseMat, int spRow, int spCol)
{
	for(int i = 0; i <= spRow; i++)
	{
		for(int j = 0; j < spCol; j++)
			std::cout << sparseMat[i][j] << " ";
		std::cout << "\n";
	}
}

void delMat(int **arr, int row)
{
	for(int i = 0; i < row; i++)
		delete [] arr[i];
	delete [] arr;
}
	