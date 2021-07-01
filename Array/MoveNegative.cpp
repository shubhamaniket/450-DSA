/*
	5. Move all negative negative elements to one side
	i/p = [-12 11 -13 -5 6 -7 5 -3 -6]
	o/p = [-12 -13 -5 -7 -3 -6 11 6 5]
*/

#include<bits/stdc++.h>
using namespace std;

void moveneg(int arr[],int n){
	int temp[n];
	int j = 0;
	for(int i=0;i<n;i++){
		if(arr[i] < 0){
			temp[j] = arr[i];
			j++;
		}
	}
	for(int i=0;i<n;i++){
		if(arr[i] >= 0){
			temp[j] = arr[i];
			j++;
		}
	}
	//Displaying the array
	for(int i=0;i<n;i++){
		cout << temp[i] << " ";
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
	moveneg(arr,n);
	return 0;
}