/*
Merge Overlapping Intervals
i/p => [[1,4],[4,5],[10,15],[14,19],[20,25]]
o/p => [[1,5],[10,19],[20,25]]
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x,y;
	cin >> n;
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++){
		cin >> x >> y;
		v.push_back(make_pair(x,y));
	}
	stack<pair<int,int>> s;
	s.push({v[0].first,v[0].second});
	for(int i=1;i<v.size();i++){
		int start1 = s.top().first;
		int end1 = s.top().second;
		int start2 = v[i].first;
		int end2 = v[i].second;

		if(end1 < start2){
			s.push({v[i].first,v[i].second});
		}
		else{
			s.pop();
			end1 = max(end1,end2);
			s.push({start1,end1});
		}
	}
	while(!s.empty()){
		cout << s.top().first << " " << s.top().second << endl;
		s.pop();
	}
	return 0;
}