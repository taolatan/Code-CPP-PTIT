#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int ok = 1;
	while(cin >> s){
		int n = s.length();
		for(int i = 0; i < n; i++){
			if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
		}
		if(ok == 1){
			s[0] -= 32;
			ok = 0;
		}
		if(s[n - 1] == '.'|| s[n - 1] == '!'|| s[n - 1] == '?'){
			s.erase(s.end() - 1);
			cout<< s <<endl;
			ok = 1;
		}
		else cout << s << " ";
	}
}
