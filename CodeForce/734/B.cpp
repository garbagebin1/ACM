//734B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 500005;
#define ll long long
char str[maxn];
int sum[4];

int main()
{
    int imin1 = 0,imin2 = 0;
    for(int i= 0; i < 4;i ++)
        cin>>sum[i];
    imin1 = min(sum[0],min(sum[2],sum[3]));
    sum[0] -= imin1;
    imin2 = min(sum[0],sum[1]);
    cout<<256*imin1+32*imin2<<endl;
    return 0;
}
