/*
Merge without extra space

Given two sorted arrays we need to sort in such a way that
we dont uses any extraspace

input => a=[1,3,5,7,9]
		 b=[0,2,4,6]

output => a=[0,1,2,3,4]
          b=[5,6,7,9]
*/

#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int b[],int n,int m){
	int i=n-1;
	int j=0;
	while(i >= 0 && j < m){
		if(a[i] > b[j]){
			swap(a[i],b[j]);
			i--;
			j++;
		}
		else{
			break;
		}
	}
	sort(a,a+n);
	sort(b,b+m);
}

int main(){
	int n,m;
	cin >> n >> m;
	int a[n],b[m];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<m;i++){
		cin >> b[i];
	}
	merge(a,b,n,m);
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	for(int i=0;i<m;i++){
		cout << b[i] << " ";
	}
	return 0;
}