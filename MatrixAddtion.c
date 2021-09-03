#include<stdio.h>

int main()
{
    int arr1[3][3],arr2[3][3],arr3[3][3],i,j;
    
    printf("Enter Array 1 Elements:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n");
            scanf("%d",&arr1[i][j]);
        }
    }
    
    //Accepting Elements for Array 2
    printf("Enter array2 Elements:");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n");
            scanf("%d",&arr2[i][j]);
        }
    }
    
    
    //Addtion Operation
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            arr3[i][j] = arr1[i][j]+arr2[i][j];
        }
    }
    
    //Printing Array 3(Addition of two arrays).
    
    printf("Matrix Addition is: \n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \t",arr3[i][j]);
        }
        printf("\n");
    }
}
