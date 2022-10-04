#include<stdio.h>
void swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
}
void selectionSort(int array[],int size)
{
    for(int step=0;step<size-1;step++)
    {
        int min_idx=step;
        for(int i=step+1;i<size;i++)
        {
            if (array[i]<array[min_idx])
            min_idx=i;
        }
        swap(&array[min_idx],&array[step]);
    }
}
void printArray(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d \n",array[i]);
    }
    printf("\n");
}
int main()
{
    int data[]={10,20,30,40,50};
    int size = sizeof(data)/sizeof(data[0]);
    selectionSort(data,size);
    printf("sorted array in ascending order:\n");
    printArray(data,size);
}

