#include <stdio.h>
void insertion(int a[],int n);// function prototypes
void print(int a[],int n);
int main()
{
	int n,i,ch;
	printf("Enter total number of elements:\t");
	scanf("%d", &n);
	if(n<0)
	{
		printf("WRONG INPUT");
		return 0;
	}
	printf("Enter %d elements\n", n);
	int a[n];
	for(i=0;i<n;i++)
	{
	scanf("%d", &a[i]);
	}
	printf("\n ORIGINAL ARRAY \n");
	print(a,n);//calling function print to print original array
	insertion(a,n);
	printf("\n SORTED ARRAY \n");
	print(a,n);//calling function print to print sorted array
	return 0;
}
void insertion(int a[], int n)
{
    int i, key, j;
    for (i=1;i<n;i++) {
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key)//ascending
		 {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
void print(int a[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
	printf("%d ", a[i]);
}
