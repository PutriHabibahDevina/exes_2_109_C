#include <iostream>
using namespace std;

int arr[5];
int n;
int i;

void input() {
	while (true)
	{
		cout << "Masukan panjang element array: ";
		cin >> n;

		if (n <= 5)
			break;
		else
			cout << "\nMaksimum panjang array adalah 5" << endl;
	}

	cout << "\n------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void AlgorithmSearch(int low, int high, int mid)
{
	int i, j, k;
	i = 0;		
	j = (n - 1);
	k = (i + j) / 2;
	char ch;
	int ctr;	

	do
	{
		cout << "\nEnter the element you want to search: ";	
		int element;
		cin >> element;

		ctr = 0;
		for (i = 0; i < n; i++)								
		{
			ctr++;
			if (arr[k] == element)								
			{
				cout << "\n" << element << "Found" << (i + 1) << endl;
				break;
			}
		}
		if (element < arr[k])
		{
			j = (k - 1);
		}

		if (element > arr[k])
		{
			j = (k + 1);
		}

		if (j <= i)
		{
			k = (j + i) / 2;
		}
		cout << "\n" << element << "Not Found\n";
		cout << "\nNumber of comparisons :" << ctr << endl;

		cout << "\nContinue search (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));
}

int main()
{
	input();
	AlgorithmSearch();
	return 0;
}