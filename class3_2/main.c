#include <stdio.h>
#include <stdlib.h>


void swap(int *i,int *k){
    int temp = *i;
    *i = *k;
    *k = temp;
}
void avg(int i,int k){
    int a;
    a = i + k;
    a = a / 2;
    printf("%d", a);
}
void sum(int i,int k){
    int e;
    e = i + k;
    printf("%d", e);
}
int main()
{
    int scan1,scan2;

    printf("two number plz:");
    scanf("%d %d", &scan1, &scan2);

    sum(scan1,scan2);
    printf("\n");

    avg(scan1,scan2);
    printf("\n");

    swap(&scan1,&scan2);
    printf("%d,%d",scan1 ,scan2);

    return 0;

}

