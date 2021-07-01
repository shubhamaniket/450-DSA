/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.
You must solve the problem without modifying the array nums and uses only constant extra space.

Input: nums = [1,3,4,2,2]
Output: 2
*/

#include<bits/stdc++.h>
using namespace std;

void duplicateElement(int arr[],int n){
	for(int i=0;i<n;i++){
		if(arr[abs(arr[i])] >= 0){
			arr[abs(arr[i])] = -arr[abs(arr[i])];
		}
		else{
			cout << abs(arr[i]) << " "; 
		}
	}
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	duplicateElement(arr,n);
	return 0;
}