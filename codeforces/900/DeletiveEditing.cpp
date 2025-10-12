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
    string s,t;
    cin>>s>>t;
    int n = s.size(), m = t.size();
    if (m>n) {cout<<"NO\n";return;}
    vector<vector<int>> a(26);
    for(int i=0;i<n;i++){
        a[s[i]-'A'].push_back(i);
    }

    int last = -1;
    for(int i=m-1;i>=0;i--){
        if (!a[t[i]-'A'].empty() && (last == -1 || last > a[t[i]-'A'].back())){
            last = a[t[i]-'A'].back();
            a[t[i]-'A'].pop_back();
        } else {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}