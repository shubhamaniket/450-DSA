/*
	7. Cycle rotate an array by one
	i/p = [1 2 3 4 5]
	o/p = [5 1 2 3 4]
*/

#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int start,int end){
    while(start <= end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void rotate(int arr[], int n)
{
    reverse(arr,0,n-1);
    reverse(arr,0,0);
    reverse(arr,1,n-1);
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i]; 
	}
	rotate(arr,n);
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}