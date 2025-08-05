#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include <numeric>
#include <cmath>
using namespace std;

void tc() {
    int n,q;
    cin>>n>>q;
    vector<int> a(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        a[i] += a[i-1];
    }

    for(int i=0;i<q;i++){
        int l,r,k;
        cin>>l>>r>>k;
        if (((r-l+1)*k + (a[n]-(a[r]-a[l-1])))&1) cout<<"YES\n";
        else cout<<"NO\n";
    }
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}