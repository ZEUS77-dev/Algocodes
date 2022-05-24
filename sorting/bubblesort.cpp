#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define MP make_pair
 
 void bubblesort(int arr[],int size){
 	for(int k=1;k<size-1;k++){        
 	int swapped=0;
 	for(int i=0;i<size-k-1;i++) {   //to iterate the number of passes
 		if(arr[i]>arr[i+1])
 		swap (arr[i],arr[i+1]);
 		swapped=1;
 	}
 	if(swapped==0) //optimization
 	break;
 }
 }

int main() {
 
	int t;
 
	cin >> t;
 
	while (t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		bubblesort(a,n);
		for(int j=0;j<n;j++){
			cout<<a[j]<<" ";
		}
	}
	return 0;
 
	}