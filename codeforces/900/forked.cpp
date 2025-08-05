#include<iostream>
#include <set>
#include<vector>
using namespace std;


void tc() {
    set<pair<int,int>> pq1,pq2;
    pair<int,int> k,q,a;
    int count = 0;
    cin>>a.first>>a.second;
    cin>>k.first>>k.second;
    cin>>q.first>>q.second;
    auto& [x,y] = a;
    vector<pair<int,int>> direction = {{x,y},{x,-y},{-x,y},{-x,-y},{y,-x},{y,x},{-y,x},{-y,-x}};
    for(int i=0;i<8;i++){
        pq1.insert({k.first+direction[i].first,k.second+direction[i].second});
        pq2.insert({q.first+direction[i].first,q.second+direction[i].second});
    }

    for(auto& it:pq1){
        if (pq2.find(it)!=pq2.end()) count++;
    }
    cout<<count<<endl;
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}