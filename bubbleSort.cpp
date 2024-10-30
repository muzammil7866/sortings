#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{

	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] >= arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

}

void display(int arr[], int size)
{
	cout << endl;

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}
int main()
{
	int size = 8;
	int arr[8] = { 1,2,4,6,1,23,44,41 };

	display(arr, size);

	bubbleSort(arr, size);

	display(arr, size);

	return 0;
}
