#include "mem1.h"
#include <stdlib.h>
#include <stdio.h>

int test_mem1(void)
{

    //This request space for 30 type double values and sets ptrMem to point
    // the location
    double *ptrMem;
    ptrMem = (double *) malloc(30 * sizeof(double));
    
    ptrMem[0] = 3.14;
    ptrMem[1] = 2.71;

    printf("ptrMem[1]: %f\n",*ptrMem++);
    printf("ptrMem[0]: %f\n",*ptrMem);

    free(ptrMem);
    return 0;
}

int test_mem2(void)
{
    double *ptd;
    int max;
    int number;
    int i =0;
    double tmpIn;
    puts("What is the maximum number of type double entries?");
    scanf("%d",&max);
    ptd = (double *) malloc(max * sizeof(double));
    if(ptd == NULL)
    {
        puts("Memory allocation failled, goodbye...");
        return 0;
    }
    
    puts("Enter values (q to quit): ");
    do
    {
        scanf("%lf",&ptd[i]);
        i++;
    } while (i<max && tmpIn != 'q');
    

    printf("Here are your entries %d entries: \n",number = i);
    for(i =0 ;i< number; i++)
    {
        printf("%f \n",*ptd++);
    }
    puts("Done\n");
    free(ptd);
    return 0;
}