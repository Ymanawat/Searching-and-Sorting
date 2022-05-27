#include <climits>

int findSecondLargest(int *input, int n)
{
    
    int maximum = input[0];
    int maxindex = 0;
    for (int i =0; i<n; i++){
        
        if (input[i]>maximum){
            maximum=input[i];
            maxindex=i;
            
        }
        
    }
    
    input[maxindex]=INT_MIN;
    
    for (int i = 0; i<n; i++){
    
        if(input[i]==maximum){
            input[i]=INT_MIN;
        }
    }
    
    maximum=input[0];
    for (int i =0; i<n; i++){
        
        if (input[i]>maximum){
            maximum=input[i];
            maxindex=i;    
        }
        
    }
    
    return maximum;
    
}
