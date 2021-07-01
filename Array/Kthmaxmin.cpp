/*
	3. Kth Max & Min element in an array
	i/p = [1 2 3 4 5 6] k = 2
	o/p = Kmax = 5 Kmin = 2
*/

#include<bits/stdc++.h>
using namespace std;

void kmaxmin(int arr[],int n,int k){
	sort(arr,arr+n);
	cout << "Kmax = " << arr[n-k];
	cout << " Kmin = " << arr[k-1];
}

int main(){
	//Enter no. of elements
	int n;
	cin >> n;
	//Enter array elements
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int k;
	cin >> k;
	//K Max & Min element
	kmaxmin(arr,n,k);
	return 0;
}