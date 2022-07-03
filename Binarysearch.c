//wap in c to implement binary search
#define MAX 100
int main()
{
	int i,key;
	int x[MAX]={11,34,54,67,92};
	printf("The array elements are \n");
	for(i=0;i<5;i++)
	{
		printf("%4d",x[i]);
	}
	printf("\n");
	
	printf("Enter the element to be search\n");
	scanf("%d",&key);
	int r=binary_search(x,key);
	if(r==1)
	{
		printf("searched element %d found\n",key);
	}
	else
	{
		printf("Searched element %d not-found\n",key);
	}
}
int binary_search(int x[],int key)
{
	int static li=0,hi=4,mid;
	if(li<=hi)
	{
		mid=(li+hi)/2;
		if(x[mid]==key)
		{
		return 1;
		}
		else if(key> x[mid])
		{
			li=mid+1;
			return binary_search(x,key);
		}
		else
		{
			hi=mid-1;
			return binary_search(x,key);	
		}
	}
	return 0;
}
	//@Ks	
