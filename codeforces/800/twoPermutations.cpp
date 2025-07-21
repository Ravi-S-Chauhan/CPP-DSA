#include<iostream>
using namespace std;

void tc(){
    int n,a,b;
    cin>>n>>a>>b;
    if (n == a && a == b) {cout<<"Yes\n";return;}
    if (n-(a+b)>1) cout<<"Yes\n";
    else cout<<"No\n";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}