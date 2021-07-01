/*
Find common element in 3 sorted arrays.
a=[1 5 10 20 40 80]
b=[6 7 20 80 100]
c=[3 4 15 20 70 80 100]
*/

#include<bits/stdc++.h>
using namespace std;

/*Approach 1*/
void common(int A[],int B[],int C[],int n1,int n2,int n3){
	vector<int> v;
    unordered_set<int> s1;
    unordered_set<int> s2;
    unordered_set<int> s3;
    for(int i=0;i<n1;i++){
        s1.insert(A[i]);
    }
    for(int i=0;i<n2;i++){
        if(s1.find(B[i]) != s1.end()){
            s2.insert(B[i]);
        }
    }
    for(int i=0;i<n3;i++){
        if(s2.find(C[i]) != s2.end()){
            s3.insert(C[i]);
        }
    }
    for(auto itr=s3.begin();itr!=s3.end();itr++){
        v.push_back(*itr);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
    	cout << v[i] << " ";
    }
}

/*
/*Approach 2*/
/*void common(int a[],int b[],int c[],int n1,int n2,int n3){
	int i=0,j=0,k=0;
	while(i<n1 and j<n2 and k<n3){
		if(a[i] == b[j] and b[j] == c[k]){
			cout << a[i] << " ";
			i++;
			j++;
			k++;
		}
		else if(a[i] < b[j]){
			i++;
		}
		else if(b[j] < c[k]){
			j++;
		}
		else{
			k++;
		}
	}
}*/

int main(){
	int n1,n2,n3;
	cin >> n1 >> n2 >> n3;
	int arr1[n1],arr2[n2],arr3[n3];
	for(int i=0;i<n1;i++){
		cin >> arr1[i];
	}
	for(int i=0;i<n2;i++){
		cin >> arr2[i];
	}
	for(int i=0;i<n3;i++){
		cin >> arr3[i];
	}
	common(arr1,arr2,arr3,n1,n2,n3);
	return 0;
}