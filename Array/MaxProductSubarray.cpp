/*
Maximum product subarray

6 -3 -10 0 2

minVal = 6 -> 6 -> -18 -> -3 -> 180
maxVal = 6 -> 6 -> -3 -> -18 -> -10
res    = 6 -> 6 -> 180 -> 180

i=1:
swap(maxVal,minVal)
maxVal = max(-3,-18) = -3
minval = min(-3,-18) = -18
res = max(res,maxVal) = 6

i=2
swap(maxval,minval)
maxVal = max(-10,180) = 180
minVal = min(-10,30) = -10
res = 180

i = 3:
maxVal = max(0,0) = 0
minVal = min(0,0) = 0
res = 180

i = 4:
maxVal = max(2,-20) = 2
minVal = min(2,360) = 2
res = 180
*/

#include<bits/stdc++.h>
using namespace std;

long long maxproductsubarray(int arr[],int n){
	if(n == 0){
		return 0;
	}
	long long minVal = arr[0];
	long long maxVal = arr[0];
	long long res = arr[0];

	for(int i=1;i<n;i++){
		if(arr[i] < 0){
			swap(maxVal,minVal);
		}
		maxVal = max((long long)arr[i],arr[i]*maxVal);
		minVal = min((long long)arr[i],arr[i]*minVal);
		res = max(res,maxVal);
	}
	return res;
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int res = maxproductsubarray(arr,n);
	cout << res;
	return 0;
}