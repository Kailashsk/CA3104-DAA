//wap in C to implement the selection sort 
#define MAXSIZE 30
void main()
{
	int x[MAXSIZE];
	int size,i;
	printf("Enter the size of the array \n");
	scanf("%d",&size);
	printf("Enter the elements of the array \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("Array elements are\n");
	for(i=0;i<size;i++)
	{
		printf("%4d",x[i]);
	}
	printf("\n");
	selectionsort(x,size);
}
void selectionsort(int x[],int size)
{
	int position,i,j,temp,k;
	for(i=0;i<size;i++)
	{
		position=i;
		printf("The array of elements are after pass-%d\n",i+1);
		for(j=i+1;j<size;j++)
		{
			if(x[position] > x[j])
			{
				position=j;
			}
		}
		temp=x[i];
		x[i]=x[position];
		x[position]=temp;
		for(k=0;k<size;k++)
		{
			printf("%4d",x[k]);
		}printf("\n");
			
	}//end of outer loop.
		
}


//@Ks
