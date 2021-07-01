/*
	Check in array for subarray with 0 sum
	i/p arr = [4 2 -3 1 6]
	o/p = Yes

	Explanation: - 
	In the above example the subarray with 0 sum is [2 -3 1]
	Prefix sum = [4 6 3 4 10]
	We can see that 4 is repeated twice so we can say that there exists
	a subarray with 0 sum. 
	Meanwhile we also check if prefix is 0 in the loop itself and return 
	true if present.
*/

#include<bits/stdc++.h>
using namespace std;

bool subarraywith0sum(int arr[],int n){
	unordered_set<int> s;
	int prefix = 0;
	for(int i=0;i<n;i++){
		prefix += arr[i];
		if(prefix == 0){
			return true;
		}
		if(s.find(prefix) != s.end()){
			return true;
		}
		s.insert(prefix);
	}
	return false;
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	if(subarraywith0sum(arr,n)){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}