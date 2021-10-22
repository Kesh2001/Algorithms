//Median of two sorted arrays of different sizes

// Given two sorted arrays, a[] and b[],
//the task is to find the median of these sorted arrays,
// in O(log n + log m) time complexity, where m and are the number of elemnts in in a[] and b[] respectively.

// Algorithm:

//1. Given two arrays are sorted. So they can be merged in O(m+n) time. Create a variable count to have a count of elements in the output array.

//2. If the value of (m+n) is odd then there is only one median else the median is the average of elements at index (m+n)/2 and ((m+n)/2 – 1).

//3. To merge the both arrays, keep two indices i and j initially assigned to 0. Compare the ith index of 1st array and jth index of second,
// increase the index of the smallest element and increase the count.

//4. Check if the count reached (m+n) / 2 if (m+n) is odd and store the element,if even store the average of (m+n)/2 th and (m+n)/2 -1 th element and print it.

// code :-

// merging the 2 sorted arrays to get the median of 2 sorted arrays which takes time complexity O(n)

#include <bits/stdc++.h>
using namespace std;

/* This function returns median of ar1[] and ar2[]. assuming 
both ar1[] and ar2[] are sorted  */
int getMedian(int ar1[], int ar2[], int n, int m)
{
    int i = 0; /* Current index of input array ar1[] */
    int j = 0; /* Current index of input array ar2[] */
    int count;
    int m1 = -1, m2 = -1;

    // Since there are (n+m) elements,
    // There are two cases :
    // if n+m is odd then median is the middle element m+n/2

    if ((m + n) % 2 == 1)
    {
        for (count = 0; count <= (n + m) / 2; count++)
        {
            if (i != n && j != m)
            {
                //using ternary operator
                m1 = (ar1[i] > ar2[j]) ? ar2[j++] : ar1[i++];
            }
            else if (i < n)
            {
                m1 = ar1[i++];
            }
            // for case when j<m,
            else
            {
                m1 = ar2[j++];
            }
        }
        return m1;
    }

    //if m+n  is even;

    // then median will be average of elements
    // at index ((m+n)/2 - 1) and (m+n)/2
    // in the array obtained after merging ar1 and ar2
    else
    {
        for (count = 0; count <= (n + m) / 2; count++)
        {
            m2 = m1;
            if (i != n && j != m)
            {

                //using ternary operator

                m1 = (ar1[i] > ar2[j]) ? ar2[j++] : ar1[i++];
            }
            else if (i < n)
            {
                m1 = ar1[i++];
            }
            // for case when j<m,
            else
            {
                m1 = ar2[j++];
            }
        }
        return (m1 + m2) / 2;
    }
}

int main()
{
    int ar1[] = {900};
    int ar2[] = {5, 8, 10, 20};

    int n1 = sizeof(ar1) / sizeof(ar1[0]);
    int n2 = sizeof(ar2) / sizeof(ar2[0]);
    cout << getMedian(ar1, ar2, n1, n2);

    return 0;
}
