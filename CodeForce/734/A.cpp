//734A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 500005;
#define ll long long
char str[maxn];
int sum[3];

int main()
{
    int n;
    cin>>n;
    int l = 0, r = 0;
    for(int i = 0; i < n; i ++)
    {
        cin>>str[i];
        if(str[i]=='A') l ++;
        if(str[i] == 'D') r ++;
    }
    if( l > r) cout<<"Anton"<<endl;
    else if( l < r) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
    return 0;

}
