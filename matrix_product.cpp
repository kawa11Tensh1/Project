#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    // заполнение матрицы А
    int n, k1;
    cout << "Введите размер матрицы A: ";
    cin >> n >> k1;
    int a[n][k1];
    for (int i = 0; i < n; i++)
    {
    	for (int j = 0; j < k1; j++)
    	{
    		cin >> a[i][j];
		}
	}
	cout << endl;
	// заполнение матрицы B
	int k2, m;
    cout << "Введите размер матрицы B: ";
    cin >> k2 >> m;
    int b[k2][m];
    for (int i = 0; i < k2; i++)
    {
    	for (int j = 0; j < m; j++)
    	{
    		cin >> b[i][j];
		}
	}
	if (k1 == k2)
	{
		// выделение памяти
		int **c = new int *[n];
		for (int i = 0; i < n; i++) 
		{
		    c[i] = new int[m];
		}
		// заполнение матрицы C
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				c[i][j] = 0;
				for (int k = 0; k < n; k++)
				{
					c[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		// вывод матрицы C
		cout << "Матрица C = A * B: " << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << c[i][j] << " ";
			}
			cout << endl;
		}
		// освобождение памяти
        for (int i = 0; i < n; i++) 
        {
            delete[] c[i];
        }
        delete[] c;
    }
	{
		cout << "Перемножение невозможно" << endl;
	}
	return 0;
}