#include <cstring>
#include <cstdio>
#include <iostream>
using namespace std;
#define ll long long
ll n,m,k,x,y;
ll sum_nm,sergei_nm;
const int maxn = 310;
void slove1()
{
    if(k == sum_nm)
    {
        printf("1 1 1\n");
    }else
    {
        if(sergei>=sum_mn)
        {
            printf("1 0 0\n");
        }else
        {
            printf("1 1 0\n");
        }
    }
}

void slove2()
{
    ll tmp_k = k - sum_nm;
    ll row_k = tmp_k % ( sum_nm * 2 - 2 * m);
    //一次循环中，除第一行和最后一行是一次
    //每次循环中 出现的最多个数和最少的个数
    //确定是在第一行还是第二行
    tmp_k = tmp_k - row_k *  ( sum_nm * 2 - 2 * m);
    ll




}
int main()
{

    cin>>n>>m>>k>>x>>y;
    sum_nm = n * m;
    sergei_nm = x * y;
    if(k <= sum_nm)
    {
        slove1();
    }else
    {
        slove2();
    }
}
