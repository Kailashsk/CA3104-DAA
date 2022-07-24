#include<stdio.h>

int main()
{
    int size,arr[30];
    printf("Enter size of array");
    scanf("%d",&size);

    printf("Enter elements of the array");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The elements of the array");
    for(int i=0;i<size;i++)
    {
        printf("%4d",arr[i]);
    }

    quick4(arr,0,size-1);
    printf("\n After sorted elements");
    for(int i=0;i<size;i++)
    {
        printf("%4d",arr[i]);
    }
}

quick4(int arr[],int first,int last)
{
    int i,j,temp,pivot;
    if(first<last)
    {
        i=first;
        j=last;

        pivot=first;

        while(arr[i]<=arr[pivot] && i<last)
        i++;
        while(arr[j]>arr[pivot])
        j--;

        if(i<j)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }

        temp=arr[pivot];
        arr[pivot]=arr[j];
        arr[j]=temp;

        quick4(arr,j+1,last);
        quick4(arr,first,j--);
        
    }
}
