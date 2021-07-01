/*
Count Pairs in an array with given sum.
arr = [1 5 7 1]; K = 6
o/p = 2 [(1 5) (5 1)]

Algorithm: - 
1. Create a hash map, Initilaize counter = 0.
2. Iterate over the array and calculate x=k-arr[i]
3. Check if value of x is present in the map.
4. If not present then increment the array value at that index.
5. If present the increment counter with value of map at x and increment the array value
at that index.


1. i=0, x=6-1=5.Since m[5] not present so increment value at arr[0] in map
count = 0
map: -
1 - 1

2. i=1, x=6-5=1.Since m[1] is present so counter is increased and m[arr[1]] is also increased.
counter = 1
map: - 
1 - 1
5 - 1

3. i=2, x=6-7=-1.
counter = 1
map: - 
1 - 1
5 - 1
7 - 1

4. i=3, x=6-1=5
counter = 2
map: -
1 - 2
5 - 1
7 - 1
*/

#include<bits/stdc++.h>
using namespace std;

int countPair(int arr[],int n,int k){
	int count = 0;
	unordered_map<int,int> m;
	for(int i=0;i<n;i++){
		int x = k - arr[i];
		if(m[x] == 0){
			m[arr[i]]++;
		}
		else{
			count += m[x];
			m[arr[i]]++;
		}
	}
	return count;
}
int main(){
	int n,k;
	cin >> n >> k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int count = countPair(arr,n,k);
	cout << count;
	return 0;
}