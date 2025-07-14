#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,block = 0,space=0;
        cin>>n;
        string s;
        cin.ignore();
        getline(cin,s);
        for(int i=0;i<n;i++){
            if (s[i] == '.') {
                space++;
            } else {
                space = 0;
                block++;
            }
            if (space==3) {
                cout<<2<<endl;
                break;
            }
        }
        if (block == n) cout<<0<<endl;
        else if (space<3)cout<<n-block<<endl;
    }

    return 0;
}