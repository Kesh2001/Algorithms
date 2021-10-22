#include <stdio.h>
void findFirstAndLast(int arr[], int n, int x)
{
    int first = -1, last = -1;
    for (int i = 0; i < n; i++)
	{
        if (x!= arr[i])
           continue;
        if (first == -1)
            first = i;
        last = i;
    }
    if (first != -1)
        printf("First Occurrence =%d\t and last Occurrence=%d\n",first,last);

    else
        printf("Not found");
}

int main()
{
    int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
    int n = sizeof(arr) / sizeof(int);
    int x = 2;
    findFirstAndLast(arr, n, x);
    return 0;
}
