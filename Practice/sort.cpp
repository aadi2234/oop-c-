#include <stdio.h>
#define SIZE 50
void Array_Input();
void Display();
void Bubble_Sort();
int A[SIZE],n,i,j,k,temp;
void Array_Input()
{
	printf("How many elements u want? ");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;++i)
	{
		scanf("%d",&A[i]);
	}
}
void Bubble_Sort()
{
	int comp=0,exe=0,pass=0;
	for(i=1;i<n;i++)
	{
		pass++;
		for(j=0;j<n-1;j++)
		{
			comp++;
			if(A[j]>A[j+1])
			{
				exe++;
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
	printf("\nAfter Sorting: ");
	Display();
	printf("\nNumber of Passes: %d",pass);
	printf("\nAfter Pass %d",i);
	for(k=0;k<n;k++)
	{
			printf("\nAfter Pass %d",k);
		printf("%5d ",A[i]);
    }
	printf("\nNumber of Comparison: %d",comp);
	printf("\nNumber of Swapping: %d",exe);
}
void Display()
{
  printf("\nElements are: ");
  for(i=0;i<n;++i)
	{ 
		printf("%d ",A[i]);
	}	
}	
int main()
{
	Array_Input();
	printf("Before Sorting: ");
	Display();
	Bubble_Sort(); //call function
	return (0);
}
