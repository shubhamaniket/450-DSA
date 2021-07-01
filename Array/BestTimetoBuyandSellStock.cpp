/*
	Given an array of prices find out the maximum profit
	a person can get by buying a stock and then selling it.
	prices = [7 1 5 3 6 5]
	max profit = 5 (He would buy when the price is 1
	and then sell it when the price is 6 so, 6-1=5)	
*/

#include<bits/stdc++.h>
using namespace std;

int buysell(int prices[],int n){
	int current = INT_MAX;
	int profit = 0;
	for(int i=0;i<n;i++){
		if(prices[i] < current){
			current = prices[i];
		}
		else{
			profit = max(profit,prices[i]-current);
		}
	}
	return profit;
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int profit = buysell(arr,n);
	cout << profit;
	return 0;
}