/*
	8. Kadane's 
	arr = [-2 -3 4 -1 -2 1 5 -3]
	o/p = 7
*/

#include<bits/stdc++.h>
using namespace std;

int kadane_sum(int arr[],int n){
	int max_so_far = INT_MIN;
	int curretsum = 0;
	for(int i=0;i<n;i++){
		curretsum += arr[i];
		if(max_so_far < curretsum){
			max_so_far = curretsum;
		}
		if(curretsum < 0){
			curretsum = 0;
		}
	}
	return max_so_far;
}
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int maxsum = kadane_sum(arr,n);
	cout << maxsum;
	return 0;
}