#include<iostream>

using namespace std;

bool isValid(string s, string x){
    int i = 0;
    while(i<s.size()){
        if (s[i]!=x[0]) {
            i++;
            continue;
        }
        if (s.substr(i,x.size()) == x) return true;
        else i++;
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,count = 0;
        cin>>n>>m;
        string s,x;
        cin.ignore();
        getline(cin,s);
        getline(cin,x);
        while(s.size() < x.size()){
            s += s;
            count++;
        }
        if (isValid(s,x)) cout<<count<<endl;
        else {
            s += s;
            count++;
            if (isValid(s,x)) cout<<count<<endl;
            else cout<<-1<<endl;
        }

    }
}