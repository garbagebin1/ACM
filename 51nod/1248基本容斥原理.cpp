#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 50005;
#define ll long long
//ÈÝ³âÔ­Àí
int main()
{
    int a = 2,b = 3,c = 5,d = 7;
    ll n;
    cin>>n;
    cout<<n-(n/2+n/3+n/5+n/7-n/6-n/10-n/14-n/15-n/21-n/35+n/30+n/42+n/70+n/105-n/210)<<endl;
}
