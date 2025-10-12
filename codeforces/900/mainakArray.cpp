#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include <numeric>
#include <cmath>
using namespace std;

void tc() {
    int n;
    cin>>n;
    vector<int> a(n);
    int ans = INT_MIN,mn = 0, mx = 0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if (i>0) ans = max(ans,a[i-1]-a[i]);
        if (i>0) ans = max(ans,a[i]-a[0]);
        if (i<n-1) ans = max(ans,a[n-1]-a[i]);
    }
    if (n==1) cout<<0<<"\n";
    else cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}