#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
#include<unordered_set>
#include<algorithm>
#include<queue>
#include <numeric>
#include <cmath>
typedef long long ll;
using namespace std;

void tc() {
    int n,mx = INT_MIN, op = 0, need = 0;
    cin>>n;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        mp[t]++;
        mx = max(mp[t],mx);
    }
    need = n - mx;
    while(mx<n) {
        op++;
        mx = (mx<<1);
    }
    cout<<need+op<<endl;
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}