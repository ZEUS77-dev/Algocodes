#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i]; //O(n-1)
	}
	for (int i = 0; i < n; ++i)
	{
		int minIndex = i;
		for (int j = i + 1; j < n; ++j)
		{
			if (a[j] < a[minIndex])
			{
				minIndex = j; //O(N^2)
			}
		}
		swap(a[i], a[minIndex]);
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " "; //O(1)
	}
} //overall O(N^2)