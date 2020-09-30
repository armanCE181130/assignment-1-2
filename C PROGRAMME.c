#include<stdio.h>
#include<stdlib.h>
int main()
{
    int sum=0,i,j;
    for(j=5;j>=1;j--){
        for(i=5;i>=j;i--)
            printf("*");
        printf("\n");
    }
}
