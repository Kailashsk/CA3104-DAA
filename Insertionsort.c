//wap in C to implement insertion sort.
#define MAXSIZE 30
void main()
{
	int size,i;
	int x[MAXSIZE];
	printf("Enter the size of the array\n");
	scanf("%d",&size);
	printf("Enter the elements of the array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("The array elements are\n");
	for(i=0;i<size;i++)
	{
		printf("%4d",x[i]);
	}
	printf("\n");
	insertion_sort(x,size);
}
void insertion_sort(int x[], int size)
{
	int i,j,temp;
	for(i=1;i<size;i++)
	{
	printf("The array of elements after pass-%d",i);
		j=i;
		while(j>0 && x[j]<x[j-1])
		{
			temp=x[j];
			x[j]=x[j-1];
			x[j-1]=temp;
			j--;
		}
		for(j=0;j<size;j++)
		{
			printf("%4d",x[j]);
		}
		printf("\n");
	}
}


//@Ks
