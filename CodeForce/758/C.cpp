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
    //һ��ѭ���У�����һ�к����һ����һ��
    //ÿ��ѭ���� ���ֵ������������ٵĸ���
    //ȷ�����ڵ�һ�л��ǵڶ���
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
