//rules for this 1. only one disc moves one at a time
//2. no larger disc above another
// 3. should be palced in same order
// 4. only the top disc of a tower can be moved

//time complexity : O(n)
#include <bits/stdc++.h>
using namespace std;

// A , B, C are the discs
void TOH(int n, char A, char B, char C)
{
    if (n == 1)
    {
        cout << "Move 1 from " << A << "to" << C << endl;
        return;
    }

    TOH(n - 1, A, C, B);
    cout << "move" << n <, "from" << A << "to" << C << endl;

    TOH(n - 1, B, A, C);
}