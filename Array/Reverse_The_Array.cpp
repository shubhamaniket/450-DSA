/*
	1. Reverse the array: -
	arr = [1 2 3 4]
	o/p = [4 3 2 1] 
*/

#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n){
	int start = 0;
	int end = n-1;
	while(start < end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
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
	//Reverse functions
	reverse(arr,n);
	//Displaying the reversed array
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}