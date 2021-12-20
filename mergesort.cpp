#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];

void merge(int l, int r, int mid)
{
    int l_sz = mid - l + 1;
    int L[l_sz + 1];    // left array construction // +1 for INT_MAX approach
    int r_sz = r - mid; //r-(mid+1) +1
    int R[r_sz + 1];    // right array constuction
    for (int i = 0; i < l_sz; i++)
    {
        L[i] = a[i + l];
    }
    for (int i = 0; i < r_sz; i++)
    {
        R[i] = a[i + mid + 1];
    }

    L[l_sz] = R[r_sz] = INT_MAX;
    int l_i = 0;
    int r_i = 0;
    for (int i = 0; i <= r; i++)
    {
        if (L[l_i] <= R[r_i]) //left array construction
        {
            a[i] = L[l_i];
            l_i++;
        }
        else
        {
            a[i] = R[r_i]; // right array construction
            r_i++;
        }
    }
}

void mergeSort(int l, int r)
{
    if (l == r)
        return; //mergesort function
    int mid = (l + r) / 2;
    mergeSort(l, mid);
    mergeSort(mid + 1, r);
    merge(l, r, mid);
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    } //main function
    mergeSort(0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
//total complexity = O(Nlog(2)N)