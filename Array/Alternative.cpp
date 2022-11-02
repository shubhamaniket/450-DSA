/*
Rearrange the array elements in alternative order of
negative and positive elements in O(1) extra space.
*/

#include<bits/stdc++.h>
using namespace std;

void alternateNegPos(int arr[],int n){
	int neg = 0,pos = 0;a++
	int dup = neg;
	for(int i=0;i<n;i++){
		if(arr[i] < 0){
			neg++;
		}
		else{
			pos++;
		}
	}
	sort(arr,arr+n);
	int i=0,j=0;
	for(int k=0;k<n;k++){
		if(arr[k] >= 0){
			j = k;
			break;
		}
	}
	while(neg-- and pos--){
		cout << arr[i] << " " << arr[j] << " ";
		i++;
		j++;
	}
	if(pos > neg){
		while(j < n){
			cout << arr[j] << " ";
			j++;
		}
	}
	else{
		while(neg--){
			cout << arr[i] << " ";
			i++;
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
	alternateNegPos(arr,n);
	return 0;
}
