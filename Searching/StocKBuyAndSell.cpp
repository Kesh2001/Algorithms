
//descriptive solution

// IDEA :

// when the stock price is lowest we but it and when it is at the highest peak we sell it
// plot the values of input array as a graph , when the graph goes up we get higher diffrence and when garph goes down do nothing

//Naive  solution   time complexity O(n^2)

#include <iostream>
#include <cmath>
using namespace std;

int maxProfit(int price[], int start, int end)
{
    //start and end are the starting and end indices of array
    if (end <= start)
        return 0;

    int profit = 0;

    //running loop from sart to end

    // The day at which the stock
    // must be bought
    for (int i = start; i < end; i++)
    {
        //when stock is sold

        for (int j = i + 1; j <= end; j++)
        {
            if (price[j] > price[i])
            {

                // looking over profit
                int curr_profit = price[j] - price[i] + maxProfit(price, start, i - 1) + maxProfit(price, j + 1, end);

                profit = max(profit, curr_profit);
            }
        }
    }

    return profit;
}

int main()
{

    int arr[] = {1, 5, 3, 8, 12}, n = 5;

    cout << maxProfit(arr, 0, n - 1);
}

//EFFIECIENT SOLUTION  time complexity : O(n)
//called as peak valley approach..

#include <iostream>
#include <cmath>
using namespace std;

int maxProfit(int arr[], int n)
{
    int profit = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i - 1])

            profit = profit + arr[i] + arr[i - 1];

        return profit;
    }
}

int main()
{

    int arr[] = {1, 5, 3, 8, 12}, n = 5;

    cout << maxProfit(arr, 0, n - 1);
}