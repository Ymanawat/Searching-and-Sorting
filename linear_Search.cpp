#include <bits/stdc++.h>
using namespace std;

int linear_Search(int *arr, int size, int num){
    for(int i=0; i<size; i++){
        if (arr[i]==num){
            return i;
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

    if (linear_Search(arr, size, num)==-1){
        cout << "Element not found in array";
    }
    else {cout << "num found at index " << linear_Search(arr, size, num);}

    return 0;
}
