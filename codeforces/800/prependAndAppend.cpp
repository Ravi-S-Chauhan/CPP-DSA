#include<iostream>
using namespace std;

void tc(){
    int n;
    string s;
    cin>>n;
    cin.ignore();
    getline(cin,s);
    int i=0;
    while(i<n/2 && s[i] != s[n-i-1]) i++;
    cout<<n-2*i<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}