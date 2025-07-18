#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a;
        for(int i=0;i<n;i++) {
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        sort(a.begin(),a.end());
        if (a[0] == a[n-1]) {
            cout<<-1<<endl;
        } else {
            int i=0;
            while(a[i] == a[0]) i++;
            cout<<i<<" "<<n-i<<"\n";
            for(int j = 0;j<i;j++) cout<<a[j]<<" ";
            cout<<"\n";
            for(int j=i;j<n;j++) cout<<a[j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}