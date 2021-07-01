/*
Next Permutation
Given an array find its next permutation.
Can also be done using the STL functions `next_permutation(arr,arr+n)`.

Algo: -
1. Lets take an array [5 4 7 5 3 2]

2. First from the end of the array we will find out an element which is just
less than the previous element. Here it is 4.
If we dont find any such element this means that the whole array is in descending order we simply
just reverse the whole array and return its output.

3. We will store its index and then from its next index will run a loop to find out
element which is just greater than 4.

4. We find that the element just greater than 4 is 5 at index 3.

5. Now we will swap 4 and 5.

6. So now the array becomes [5 5 7 4 3 2]

7. Now from (index of 4) + 1  which we found earlier we will reverse the array.

8. So now the array becomes [5 5 2 3 4 7] which is the next permutation. 
*/
#include<bits/stdc++.h>
using namespace std;

void nextPermutation(int nums[],int n){
	int idx = -1;
	for(int i=n-1;i>0;i--){
		if(nums[i-1] < nums[i]){
			idx = i;
			break;
		}
	}
	if(idx == -1){
		reverse(nums,nums+n);
	}
	else{
		int prev = idx;
		for(int i=idx+1;i<n;i++){
			if(nums[i] > nums[idx-1] and nums[i] <= nums[prev]){
				prev = i;
			}
		}
		swap(nums[idx-1],nums[prev]);
		reverse(nums+idx,nums+n);
	}
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	nextPermutation(arr,n);
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}