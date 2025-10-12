#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include<queue>
#include <numeric>
#include <cmath>
typedef long long ll;
using namespace std;

void tc() {
    int n,count =0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=n-2;i>=0;i--){
        while(a[i] != 0 && a[i]>=a[i+1]) {
            a[i] /= 2;
            count++;
        }
        if (a[i]>=a[i+1]) {cout<<"-1\n";return;}
    }
    cout<<count<<"\n";
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}