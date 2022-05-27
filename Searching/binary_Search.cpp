#include <bits/stdc++.h>
using namespace std;


// Recursive
// Time O(logn)
// extra space O(logn)
int recursiveBinarySearch(int array[], int start_index, int end_index, int element){
   if (end_index >= start_index){
      int middle = start_index + (end_index - start_index )/2;
      if (array[middle] == element)
         return middle;
      if (array[middle] > element)
         return recursiveBinarySearch(array, start_index, middle-1, element);
      return recursiveBinarySearch(array, middle+1, end_index, element);
   }
   return -1;
}

int binary_Search(int *input, int n, int val)
{
    int start = 0, end=n-1;
    return recursiveBinarySearch(input, start, end, val);
}

//iterative
// Time O(logn)
int binary_Search(int *input, int n, int val)
{

    int start = 0, last = n-1;
    while (start <= last){
     
	int mid = (start + last)/2; 
     if ( input[mid] == val)  {
         return mid;
     } 
     else if (input[mid]>val){
     last = mid-1;
     }
     else if (input[mid]<val){
     start = mid + 1;
     }

    }
	return -1;    
}

int main()
{
    
    int size;
    cout << "Enter size of array = ";
    cin >> size;

    int *arr = new int[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    int num;
    cout << "Enter number to search = ";
    cin >> num;

    if (binary_Search(arr, size, num)==-1){
        cout << "Element not found in array";
    }
    else {cout << "num found at index " << binary_Search(arr, size, num);}

    return 0;
}
