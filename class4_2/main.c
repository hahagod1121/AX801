#include <stdio.h>
#include <stdlib.h>
void addArr(int *arr){
    for(int i = 0; i < 9 ; i++){
        arr[i] += 10;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};

    addArr(&arr);

    for(int i = 0; i < 9; i++){
        printf("%d ", arr[i]);
    }
}
