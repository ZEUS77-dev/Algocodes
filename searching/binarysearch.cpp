#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    int to_find;
    cin >> to_find;
    int lo = 0, hi = n - 1;
    int mid;
    while (hi - lo > 1)
    {
        int mid = (hi + lo) / 2; //to prevent overflow mid=lo +(hi-lo)/2 can also be used
        if (v[mid] < to_find)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    } //OVERALL T.C = log2 (N)//

    if (v[lo] == to_find)
    {
        cout << lo << endl;
    }
    else if (v[hi] == to_find)
    {
        cout << hi << endl;
    }
    else
    {
        cout << "NOT FOUND";
    }
}
