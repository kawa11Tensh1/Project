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
		cout << "Перемножение невозможно" << endl;
	}
	return 0;
}