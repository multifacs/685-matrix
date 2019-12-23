#include <iostream>
using namespace std;

int main()
{
	int n, max = 0;
	cout << "Введите нечётное n: ";
	cin >> n;

	int** arr = new int* [n];
	
	for (int i = 0; i < n; i++)
		arr[i] = new int[n];
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 10;

			if ((i == j) || (n - i - 1 == j))
				if (arr[i][j] > max)
					max = arr[i][j];
			
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Максимальный элемент = " << max << endl << "Меняем местами..." << endl;
	arr[n / 2][n / 2] = max;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}

	for (int i = 0; i < n; i++)
		delete[] arr[i];
	delete[] arr;

}