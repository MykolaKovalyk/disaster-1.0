
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


bool is_sorted(int input[], int size);


int main()
{      
    printf("\n<Lab 3>\n\n");


    int sizeA;
    printf("Enter the size of array A: ");
    scanf("%i", &sizeA);

    int sizeB;
    printf("Enter the size of array B: ");
    scanf("%i", &sizeB);



    int* inputA = (int *)malloc(sizeA * sizeof(int));
    int* inputB = (int *)malloc(sizeB * sizeof(int));



    printf("Enter the elements for array A:\n\n");
    for(int i = 0; i < sizeA; i++)
    {
        printf("\t%i:   ", i);
        scanf("%i", &inputA[i]);
    }

    printf("Enter the elements for array B:\n\n");
    for(int i = 0; i < sizeB; i++)
    {
        printf("\t%i:   ", i);
        scanf("%i", &inputB[i]);
    }



    is_sorted(inputA, sizeA);
    is_sorted(inputB, sizeB);



    free(inputA);
    free(inputB);



    printf("\n</Lab 3>\n\n");
}




bool is_sorted(int input[], int size)
{
    for(int i = 1;  i < size; i++)
        if(input[i - 1] > input[i]) 
        {
            printf("the array is not sorted!\n");
            return false;
        }


    printf("the array is sorted!\n");
    return true;
}