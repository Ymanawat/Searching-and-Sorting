
#include <iostream>
using namespace std;
 
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // traverse through unsorted array
    for (i = 0; i < n-1; i++)
    {
       
        // Find the minimum element
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
        
      //Swap
        int temp = arr[min_idx];
        arr[min_idx]=arr[i];
        arr[i]=temp;
    }
}

int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		void selectionSort(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}
}
