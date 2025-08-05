#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include <numeric>
using namespace std;

void tc() {
    long long n,k,x;
    cin >> n >> k >> x;
    long long f = n*(n+1)/2, b = k*(k+1)/2;
    long long e = f-((n-k)*(n-k+1)/2);
    if (x<= (f) && x>=(b) && x<=e) cout<<"Yes\n";
    else cout<<"No\n";
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}