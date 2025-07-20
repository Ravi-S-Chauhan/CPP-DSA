#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long gcd(long long a, long long b){
    return b?gcd(b,a%b):a;
}

void tc(){
    long long n,m;
    cin>>m>>n;
    long long gd = gcd(n,m);
    long long b = (m*n)/gd;
    if (b == n || b == m) cout<<max(n,m)*b/gd<<endl; else cout<<b<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}