#include<bits/stdc++.h>

using namespace std;

void chuanhoa(string &s){
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
}

void check(){
    int n; cin >> n;
    cin.ignore();
    string s;
    getline(cin , s);
    string tmp;
    stringstream ss(s);
    vector<string> v;
    while(ss >> tmp){
        v.push_back(tmp);
    }
    for(int i = 0; i < v.size(); i++){
        chuanhoa(v[i]);
    }
    if(n == 1){
        cout << v[v.size() -1] << " ";
        for(int i = 0; i < v.size() - 1; i++){
            cout << v[i] << " ";
        }
    }else if(n == 2){
        for(int i = 1; i < v.size(); i++){
            cout << v[i] << " ";
        }
        cout << v[0];
    }
    cout << endl;
}


int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        check();
    }
}