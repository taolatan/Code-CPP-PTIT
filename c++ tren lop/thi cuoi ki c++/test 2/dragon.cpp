#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n, s;
	cin >> n >> s;
	pair<int, int> a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i].first >> a[i].second;
	}
	sort(a, a + n);
	for(int i = 0; i < n; i++){
		if(a[i].first >= s){
			cout << "NO" << endl;
			return 0;
		}else{
			s += a[i].second;
		}
	}
	cout << "YES" << endl;
}
