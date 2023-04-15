#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    vector<vector<int>> vec{{1, 4, 5}, {2, 5, 6}, {4, 6, 7}};
    int col = vec[0].size();
    int row = vec.size();
    int lo = 0;
    int hi = col * hi;
    int i = 0;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        arr.push_back(vec[mid / col][mid % col]);
        lo++;
    }
    sort(arr.begin(), arr.end());
    int n = arr.size();
    if (n % 2 == 0)
    {
        cout << "when number of elements are even" << endl;
        cout << (arr[n / 2] + arr[n / 2 + 1]) / 2;
    }
    else
    {
        cout << "when number of elements are odd" << endl;
        cout << arr[n / 2];
    }
}