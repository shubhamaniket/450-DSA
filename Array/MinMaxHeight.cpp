/*
	Minimize the maximum difference between the heights
	Given heights of n towers and a value k. We need to either increase or decrease the height of every tower by k (only once) where k > 0. The task is to minimize the difference between the heights of the longest and the shortest tower after modifications and output this difference.
	Examples: 

	Input  : arr[] = {1, 15, 10}, k = 6
	Output :  Maximum difference is 5.

	Explanation : We change 1 to 7, 15 to 
	9 and 10 to 4. Maximum difference is 5
	(between 4 and 9). We can't get a lower
	difference.

	7 9 4
	7 21 16
*/

#include<bits/stdc++.h>
using namespace std;

int minmaxheight(int arr[],int n,int k){
	sort(arr,arr+n);
	int maxEle,minEle;
	int res = arr[n-1] - arr[0];

	for(int i=1;i<=n-1;i++){
		maxEle = max(arr[i-1]+k,arr[n-1]-k);
		minEle = min(arr[0]+k,arr[i]-k);
		res = min(res,maxEle-minEle);
	}
	return res;
}

int main(){
	int n,k;
	cin >> n >> k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int ans = minmaxheight(arr,n,k);
	cout << ans;
	return 0;
}