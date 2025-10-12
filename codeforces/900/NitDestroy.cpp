#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<queue>
#include <numeric>
#include <cmath>
using namespace std;

void tc() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int count =0,idx=0;
    while(idx<n){
        if (a[idx]>0) {
            count++;
            while(idx<n && a[idx]>0)idx++;
        } else {
            while(idx<n && a[idx]==0)idx++;
        }
    }
    cout<<min(count,2)<<endl;
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}