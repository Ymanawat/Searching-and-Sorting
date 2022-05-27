void rotate(int *input, int d, int n)
{
    int temp[d],i;
    for(i=0;i<d;i++){
        temp[i]=input[i];
    }
    for(i=0;i<n-d;i++){
        input[i]=input[i+d];
    }
    for(i=0;i<d;i++){
    input[n-d+i]=temp[i];
    }
}
