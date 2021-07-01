/*
	Count the elements which has freqency greater than 
	n/k where n is the no. of elements.

	arr = {3, 1, 2, 2, 1, 2, 3, 3} ; k = 4
	o/p = 2 
	
	Explanation: - 
	2 and 3 occurs 3 times which is greater than 8/4=2 times.

	Solution Used: -
	O(N) -> Time Complexity
	O(N) -> Space Complexity
*/

#include<bits/stdc++.h>
using namespace std;

int countnk(int arr[],int n,int k){
	map<int,int> m;
	int con = n/k;
	for(int i=0;i<n;i++){
		m[arr[i]]++;
	}
	int count = 0;
	for(auto x : m){
		if(x.second > con){
			count++;
		}
	}
	return count;
}

int main(){
	int n,k;
	cin >> n >> k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int res = countnk(arr,n,k);
	cout << res;
	return 0;
}
