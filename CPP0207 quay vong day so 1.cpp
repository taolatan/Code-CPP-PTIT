#include<bits/stdc++.h>

using namespace std;

void check(){
	int n, d;
	cin >> n >> d;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = d; i < n; i++){
		cout << a[i] << " ";
	}
	for(int j = 0; j < d; j++){
		cout << a[j] << " ";
	}
	cout << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		check();
	}
}