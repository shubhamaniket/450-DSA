/*
	Buy and sell stcok atmost two times and return the 
	maximum profit.
	
	Valley-Peak Approach

	arr = {10, 22, 5, 75, 65, 80}
	o/p = 87
                                  80 
                           75    /
                           / \  /
	                      /   65
                         /   
         22             /     
        /  \           /
	   /    \         /
	  /      \       /
	10        \     /
               \   /
                \ /
                 5

Buy at 10 -> Sell at 22
Buy at 5 -> Sell at 80

Max Profit = (22-10)+(80-5) = 87
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int profit = 0;
	for(int i=1;i<n;i++){
		int peak = arr[i] - arr[i-1];
		if(peak > 0){
			profit += peak;
		} 
	}
	cout << profit;
	return 0;
}