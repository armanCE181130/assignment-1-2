
#include<stdio.h>
int main(){

int a[10][10],b[10][10],sum[10][10];
int arows,acolumns,brows,bcolumns;
int i,j;
printf("Enter the number of rows and columns of first matrix: ");
scanf("%d %d",&arows,&acolumns);


printf("Enter the number of rows and columns of second matrix: ");
scanf("%d %d",&brows,&bcolumns);

if(arows!=brows,acolumns!=bcolumns)
{
    printf("\n The addition is not possible.\n");
}

else
{
    printf("\n Enter the element of first matrix: \n");
    for (i=0;i<arows;i++)
    for(j=0;j<acolumns;j++)

        scanf("%d",&a[i][j]);


    printf("\n Enter the element of second matrix: \n");
    for(i=0;i<brows;i++)
        for(j=0;j<bcolumns;j++)
        scanf("%d",&b[i][j]);

    printf("\n addition of Entered Matrix: \n");
    for(i=0;i<arows;i++){
        for(j=0;j<acolumns;j++)
        {
            sum[i][j]=a[i][j]-b[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}


}
