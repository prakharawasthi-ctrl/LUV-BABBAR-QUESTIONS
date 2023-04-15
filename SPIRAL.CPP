#include <bits/stdc++.h>
using namespace std;
#define N 3;
#define M 3;
int main()
{
    int m = 3;
    int n = 3;
    int arr[m][n] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    int down = m - 1;
    int top = 0;
    int left = 0;
    int right = n - 1;
    int i = 0;
    int dir = 0;
    while (top <= down && left <= right)
    {
        if (dir == 0)
        {
            for (int i = left; i <= right; i++)
            {
                cout << arr[top][i] << endl;
            }
            top += 1;
        }
        else if (dir == 1)
        {
            for (int i = top; i <= down; i++)
            {
                cout << arr[i][right] << endl;
            }
            right -= 1;
        }
        else if (dir == 2)
        {
            for (int i = right; i >= left; i--)
            {
                cout << arr[down][i] << endl;
            }
            down -= 1;
        }
        else if (dir == 3)
        {
            for (int i = down; i >= top; i--)
            {
                cout << arr[i][left] << endl;
            }
            left += 1;
        }
        dir = (dir + 1) % 4;
    }
}