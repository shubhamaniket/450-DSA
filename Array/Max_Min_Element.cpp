/*
	2. Max & Min Element: -
	arr = [1 2 3 4]
	o/p = Min - 1 Max - 4 
*/

#include<bits/stdc++.h>
using namespace std;

void maxmin(int arr[],int n){
	int max = INT_MIN;
	int min = INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	for(int i=0;i<n;i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	cout << "Max : " << max << " Min : " << min;
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
	//Max & Min element
	maxmin(arr,n);
	return 0;
}