#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {10,20,30};

    int *ptr1 = &arr[0];

    int sum = 0;

    for(int i = 0; i < 3; i++){
        sum += *ptr1;
        ptr1++;
    }
    printf("%d", sum);
}
