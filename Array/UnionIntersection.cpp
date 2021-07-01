/*
	6. Union & Intersection of array
	i/p = a=[1 2 3 4] b=[1 2 7]
	o/p =Union=[1 2 3 4 7] Intersection=[3 4 7] 
*/

#include<bits/stdc++.h>
using namespace std;

void intersection(int a[],int b[],int n1,int n2){
	unordered_set<int> s;
	for(int i=0;i<n1;i++){
		s.insert(a[i]);
	}
	cout << "Intersection : ";
	for(int i=0;i<n2;i++){
		if(s.find(b[i]) != s.end()){
			cout << b[i] << " ";
		}
	}
}

void union1(int a[],int b[],int n1,int n2){
	set<int> s;
	for(int i=0;i<n1;i++){
		s.insert(a[i]);
	}
	for(int i=0;i<n2;i++){
		s.insert(b[i]);
	}
	cout << "Union : ";
	for(auto itr=s.begin();itr!=s.end();itr++){
		cout << *itr << " ";
	}
}

int main(){
	int n1,n2;
	cin >> n1 >> n2;
	int a[n1],b[n2];
	for(int i=0;i<n1;i++){
		cin >> a[i];
	}
	for(int i=0;i<n2;i++)
	{
		cin >> b[i];
	}
	intersection(a,b,n1,n2);
	cout << endl;
	union1(a,b,n1,n2);
	return 0;
}