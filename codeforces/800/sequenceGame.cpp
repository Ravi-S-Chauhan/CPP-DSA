#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a,b;
        bool increasing = true;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            if (i!=0 && a.back()>temp)  increasing = false;
            a.push_back(temp);
        }
        if (increasing){
            cout<<a.size()<<endl;
            for(const auto i:a) cout<<i<<" ";
            cout<<endl;
        } else {
            for(int i=0;i<n;i++){
                if (i == 0 || b.back() <= a[i]) {
                    b.push_back(a[i]);
                } else {
                    int temp = 1;
                    while(temp > a[i]) temp++;
                    b.push_back(temp);
                    b.push_back(a[i]);
                }
            }
            cout<<b.size()<<endl;
            for(const auto i:b) cout<<i<<" ";
            cout<<endl;
        }
    }
    return 0;
}