#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<unordered_set>
#include <numeric>
#include <cmath>
using namespace std;

void tc() {
    int n,mx = 0, count = 1;
    string s;
    cin>>n;
    cin.ignore();
    getline(cin,s);
    for(int i=1;i<n;i++){
        if (s[i] == s[i-1]) count++;
        else {
            mx = max(mx,count);
            count = 1;
        }
    }
    cout<<max(count,mx)+1<<endl;
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}