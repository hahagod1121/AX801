#include <stdio.h>
#include <stdlib.h>

int main()
{
    char m = 'm' , o = 'o' , k = 'k';

    char g = 'g' , a = 'a' , w = 'w';
    char n1,n2,n3,n4,n5,n6,n7,n8;
    printf("enter your name(8 characters long only) ex.mokogawa\n");
    scanf("%c%c%c%c%c%c%c%c" ,&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8);
    printf("%c%c%c%c\n" ,n1,n2,n3,n4);
    printf("%+3c%c%c%c" ,n5,n6,n7,n8);

    return 0;
}

