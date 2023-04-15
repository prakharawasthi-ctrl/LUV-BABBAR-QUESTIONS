#include <bits/stdc++.h>
using namespace std;
int main()
{
    int target = 5;
    int n = 3;
    int m = 3;
    int arr[n][m] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int hi = (n * m) - 1;
    int lo = 0;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (arr[mid / m][mid % m] == target)
        {
            cout << "found " << endl;
            cout << "row " << mid / m << endl;
            cout << "column " << mid % m << endl;
            break;
        }
        else if (arr[mid / m][mid % m] > target)
        {
            hi = mid - 1;
        }
        else if (arr[mid / m][mid % m] <= target)
        {
            lo = mid + 1;
        }
        else
        {
            cout << "not found";
        }
    }
}