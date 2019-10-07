#include<stdio.h>
#include<stdlib.h>
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

void bubbleSort(int a[],int n) 
{ 
   int i,j; 
   for (i = 0; i < n-1; i++)       
   for (j = 0; j < n-i-1; j++)  
	if (a[j] < a[j+1]) 
    swap(&a[j], &a[j+1]); 
} 
void printarray(int a[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", a[i]); 
    	printf("\n"); 
} 
void selectionSort(int a[], int n) 
{ 
    int i, j, min_index; 
	for (i = 0; i < n-1; i++) 
    { 
    	min_index = i; 
        for (j = i+1; j < n; j++) 
          if (a[j] < a[min_index]) 
            min_index = j; 
        swap(&a[min_index], &a[i]); 
    } 
} 
  
  int main() 
{ 	
	printf("enter the length of array:\n");
	int k;
	scanf("%d", &k);
	printf("enter elements to sort:\n");
	int a[k];
	for (int i = 0 ; i < k; ++i) 
 	{
	 scanf("%d", &a[i]);
	}
    int n = sizeof(a)/sizeof(a[0]); 
    bubbleSort(a,n); 
    printf("Sorted array bubble in descending order : \n"); 
    printarray(a,n); 
    selectionSort(a,n);
	printf("Sorted array selection in ascending order : \n");
	printarray(a,n); 
	return 0; 
} 

