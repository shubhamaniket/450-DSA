/*
	4. Sort an array consisting of 0,1 & 2 without
	using a sort function.
	I/p = n = 9 arr = [0 1 2 1 2 1 1 2 2]
	o/p = [0 1 1 1 1 2 2 2 2]
*/

#include<bits/stdc++.h>
using namespace std;

void sort012(int arr[],int n){
	int count0=0,count1=0,count2=0;
	for(int i=0;i<n;i++){
		if(arr[i] == 0){
			count0++;
		}
		else if(arr[i] == 1){
			count1++;
		}
		else{
			count2++;
		}
	}
	int i = 0;
	while(count0--){
		arr[i] = 0;
		i++;
	}
	while(count1--){
		arr[i] = 1;
		i++;
	}
	while(count2--){
		arr[i] = 2;
		i++;
	}
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
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
	sort012(arr,n);
	return 0;
}