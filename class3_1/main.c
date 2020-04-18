#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0;
    int f[5];

    printf("number(five only)");
    scanf("%d %d %d %d %d", &f[0], &f[1], &f[2], &f[3], &f[4]);

    for(int i = 0; i < 5; i++){
        sum += f[i];
    }
    printf("%d",sum);


}
