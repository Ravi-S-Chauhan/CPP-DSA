#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include <numeric>
using namespace std;

void tc() {
    int n,k,odd = 0;
    string s;
    vector<int> freq(26,0);
    cin >> n >> k;
    cin.ignore();
    getline(cin,s);
    for(const auto& ch:s) freq[ch-'a']++;
    for(int i=0;i<26;i++){
        if (freq[i]&1) odd += 1;
    }

    if (k+(n-k)%2 >= odd) cout<<"Yes\n"; else cout<<"No\n";
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}