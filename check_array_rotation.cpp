int arrayRotateCheck(int *input, int size)
{
    int count=1;
    bool check = false;
    for(int i = 0; i < size-1; i++){
        if(input[i] <= input[i+1]){
            count++;
        }
        else{
            check = true;
            break;
        }
    }
    if(check == false){
        return 0;
    }
    else{
        return count;
    }
}
