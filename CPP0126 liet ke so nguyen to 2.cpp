#include<bits/stdc++.h>

using namespace std;

bool snt(int n){
	if(n <= 3) return n > 1;
	else if(n % 2 == 0 || n % 3 == 0){
		return false;
	}
	int i = 5;
	while(i * i <= n){
		if(n % i == 0 || n % (i + 2) == 0){
			return false;
		}
		i += 6;
	}
	return true;
}

void check(){
	int a, b;
	cin >> a >> b;
	for(int i = a; i <= b; i++){
		if(snt(i)){
			cout << i << " ";
		}
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
	return 0;
}

