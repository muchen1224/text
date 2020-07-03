#include<stdio.h>
#include<stdlib.h>
void copy_arr(double target[], double source[], int num)
{
    for (size_t i = 0; i < num; i++)
    {
        target[i] = source[i];
    }

    return;
}
void copy_ptr(double *target, double *source, int num)
{
    for (size_t i = 0; i < num; i++)
    {
        *(target + i) = *(source + i);
    }
    return;
}
void copy_ptrs(double *target, double *source_begin, double *source_end)
{
    for (double *i = source_begin; i < source_end; i++)
    {
        *target++ = *i;
    }
    return;
}
int main(void)
{
    double source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    double target1[5];
    double target2[5];
    double target3[5];

    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source+5);
     printf("target1:");
    for (size_t i = 0; i < 5; i++)
    {
        printf(" %.2lf", target1[i]);
    }
    printf("\n");

    printf("target2:");
    for (size_t i = 0; i < 5; i++)
    {
        printf(" %.2lf", target2[i]);
    }
    printf("\n");

    printf("target3:");
    for (size_t i = 0; i < 5; i++)
    {
        printf(" %.2lf", target3[i]);
    }
    printf("\n");
    
    
}