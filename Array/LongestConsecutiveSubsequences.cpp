/*
	Find the length of longest consecutive subsequence.
	arr = {2,6,1,8,9,4,5,3}
	o/p = 6

	Since longest consecutive occurring elements are 1,2,3,4,5,6
*/

#include<bits/stdc++.h>
using namespace std;

int maxConseutiveSubSeq(int arr[],int n){
	unordered_set<int> s;
	int maxCount = 0;
	for(int i=0;i<n;i++){
		s.insert(arr[i]);
	}
	for(int i=0;i<n;i++){
		if(s.find(arr[i]-1) == s.end()){
			int curr = 1;
			while(s.find(arr[i]+curr) != s.end()){
				curr++;
			}
			maxCount = max(maxCount,curr);
		}
	}
	return maxCount;
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int res = maxConseutiveSubSeq(arr,n);
	cout << res;
	return 0;
}