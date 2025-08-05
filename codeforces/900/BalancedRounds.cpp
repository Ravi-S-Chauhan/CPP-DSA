#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include <numeric>
#include <cmath>
using namespace std;

void tc() {
    int n,k,t=-1,count = 0, mx = 0;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    for(const auto& ai:a){
        if (t == -1 || ((ai-t) <= k)) count++;
        else {
            mx = max(count,mx);
            count = 1;
        }
        t = ai;
    }
    mx = max(count,mx);

    cout<<n-mx<<endl;
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}