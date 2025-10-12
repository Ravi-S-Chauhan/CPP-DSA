#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
#include<unordered_set>
#include<set>
#include<algorithm>
#include<queue>
#include <numeric>
#include <cmath>
typedef long long ll;
#define YES std::cout << "YES\n"
#define NO std::cout << "NO\n"
using namespace std;

void tc() {
    int a,b,c;
    cin>>a>>b>>c;
    int newa = b - (c-b);
    if (newa >= a && (newa%a == 0) && newa !=0) {YES;return;}
    int newb = a + (c-a)/2;
    if (newb >= b && (c-a)%2 == 0 && (newb%b == 0) && newb !=0) {YES;return;}
    int newc = a+ 2*(b-a);
    if (newc >= c && (newc%c ==0) && newc !=0) {YES;return;}
    NO;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}