#include <stdio.h>
int main()
{
  int c, first, last, middle, n, search, array[100];

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("Enter value to find\n");
  scanf("%d", &search);

  first = 0;
  last = n - 1;
  middle = (first + last) / 2;

  while (first <= last)
  {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search)
    {
      printf("%d found at location %d.\n", search, middle + 1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last) / 2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);

  return 0;
}

/// binary insertion sort

// C program for implementation of
// binary insertion sort
#include <iostream>
using namespace std;

// A binary search based function
// to find the position
// where item should be inserted
// in a[low..high]
int binarySearch(int a[], int item,
                 int low, int high)
{
  if (high <= low)
    return (item > a[low]) ? (low + 1) : low;

  int mid = (low + high) / 2;

  if (item == a[mid])
    return mid + 1;

  if (item > a[mid])
    return binarySearch(a, item,
                        mid + 1, high);
  return binarySearch(a, item, low,
                      mid - 1);
}

// Function to sort an array a[] of size 'n'
void insertionSort(int a[], int n)
{
  int i, loc, j, k, selected;

  for (i = 1; i < n; ++i)
  {
    j = i - 1;
    selected = a[i];

    // find location where selected should be inseretd
    loc = binarySearch(a, selected, 0, j);

    // Move all elements after location to create space
    while (j >= loc)
    {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = selected;
  }
}

// Driver Code
int main()
{
  int a[] = {37, 23, 0, 17, 12, 72, 31, 46, 100, 88, 54};
  int n = sizeof(a) / sizeof(a[0]), i;

  insertionSort(a, n);

  cout << "Sorted array: \n";
  for (i = 0; i < n; i++)
    cout << " " << a[i];

  return 0;
}

// this code is contribution by shivanisinghss2110
