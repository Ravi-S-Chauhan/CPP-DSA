#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=-1,b=-1,ca=0,cb=0;
        bool flag = false;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            if (a == -1 || a == temp) {
                a = temp;
                ca++;
            } else if (b == -1 || b == temp) {
                b = temp;
                cb++;
            } else {
                flag = true;
            }
        }

        if (flag) {
            cout<<"NO"<<endl;
            continue;
        }
        if (b==-1 || (ca == cb) || (ca-1==cb) || (ca == cb-1)){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
        
    }
}
/**
 * Only a is there -> ok
 * Only b is there -> ok
 * if a & b is there then there count can be 1 == 1 or 1 = 2 or 2 = 1
 */