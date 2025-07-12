#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    vector<int> freq(26,0);

    char ch = '0';
    for(const auto ch:s){
        freq[ch-'A']++;
    }

    string t;
    for(int i=0;i<26;i++){
        if (freq[i]==0) continue;
        if (freq[i]&1) {
            if (ch == '0') {
                ch = 'A'+i;
                freq[i]--;
            } else {
                cout<<"NO SOLUTION"<<endl;
                return 0;
            }
        } 
        if (freq[i]%2 == 0) {
            t += string(freq[i]/2,i+'A');
        }
    }

    cout<<t;
    reverse(t.begin(),t.end());
    if (ch!='0')
        cout<<ch;
    cout<<t<<endl;

    return 0;
}