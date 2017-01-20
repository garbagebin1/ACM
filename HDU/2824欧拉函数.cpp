#include<stdio.h>
#include<iostream>
#include <memory.h>
#include<algorithm>
#include <math.h>
using namespace std;
#define ll long long
const int maxn = 3000010;
int minDIv[maxn], phi[maxn], sum[maxn];
//多个数求欧拉函数  时间复杂度 O(nlogn)
void genPhi()
{
    for(int i = 1; i < maxn; i++)
    {
        minDIv[i] = i;
    }
    for(int i = 2; i * i < maxn ; i ++)
    {
        if(minDIv[i] == i)
        {
            for(int j = i * i; j < maxn ; j += i)
            {
                minDIv[j] = i;
            }
        }
    }
    phi[1]= 1;
    for(int i = 2; i < maxn ; i ++)
    {
        phi[i] = phi[i / minDIv[i]];
        if( (i / minDIv[i]) % minDIv[i]==0 )
        {
            phi[i] *= minDIv[i];
        }else
        {
            phi[i] *= minDIv[i] - 1;
        }
    }
}

int main()
{

    int m,n;
    ll ans = 0;
    genPhi();
    while(cin>>m>>n)
    {
        for(int i = m; i <= n ; i ++)
        {
            ans += phi[i];
        }
        cout<<ans<<endl;
        ans = 0;
    }
    return 0;
}
