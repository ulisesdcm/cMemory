#include "mem1.h"
#include <stdlib.h>
#include <stdio.h>

void test_mem1(void)
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
}

void test_mem2(void)
{
    double *ptd;
    int max;
    int number;
    int i =0;

    puts("What is the maximum number of type double entries?");
    scanf("%d",&max);
    ptd = (double *) malloc(max * sizeof(double));
    if(ptd == NULL)
    {
        puts("Memory allocation failled, goodbye...");
        return 0;
    }
    
    puts("Enter values (q to quit): ");
    while(i < max && scanf("%1f",&ptd[i]) != 'q')
        i++;
    
    printf("Here are your entries %d entries: \n",number = i);
    for(i =0 ;i< number; i++)
    {
        printf("%7.2f ",ptd[i]);
        if(i % 7 == 6)
            putchar('\n');
    }
    if(i % 7 == 6)
        putchar('\n');

    puts("Done");
    free(ptd);
    return 0;
}