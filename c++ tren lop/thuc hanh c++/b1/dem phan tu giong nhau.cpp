#include<bits/stdc++.h>

using namespace std;

void dempt(){
	int n;
	cin >> n;
	int a[101][101];
	int dem = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j]; 
		}
	}
	map<int, int> mp;
	for(int i = 0; i < n; i++){
		mp[a[0][i]] = 1;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(mp[a[i][j]] == i){
				mp[a[i][j]]++;
			}
		}
	}
	for(auto it : mp){
		if(it.second == n){
			dem++;
		}
	}
	cout << dem << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		dempt();
	}
}
