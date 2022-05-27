#include <iostream>
using namespace std;

void pushZeroesEnd(int *input, int size)
{
	
    int count=0;
    for(int i=0; i<size;i++){
        if(input[i] != 0){
            input[count] = input[i];
            count++;
        }
    }
    while(count<size){
        input[count]=0;
        count++;
    }
    
}
