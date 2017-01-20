#include <iostream>
#include <string.h>
#include <algorithm>
#include <stdio.h>
#include <math.h>

using namespace std;
typedef unsigned int uint;
const int N = 100000005;
const int M = 6000005;
const int SHIFT = 5;
const int RADIX = (1 << SHIFT) - 1;

int flag[(N>>SHIFT)+1];
uint sum[M];
int p[M];
int k;

inline void SetBit(int x)
{
    flag[x>>SHIFT] |= (1<<(x&RADIX));
}

inline bool GetBit(int x)
{
    return flag[x>>SHIFT] & (1<<(x&RADIX));
}

void isprime()
{
    k = 0;
    for(int i=2; i<N; i++)
    {
        if(!GetBit(i))
        {
            p[k++] = i;
            for(int j=i+i; j<N; j+=i)
                SetBit(j);
        }
    }
}

void Init()
{
    sum[0] = p[0];
    for(int i=1; i<k; i++)
        sum[i] = sum[i-1] * p[i];
}

int main()
{
    isprime();
    Init();
    int T,n,tt = 1;
    while(~scanf("%d",&n))
    {
        uint ans = 1;
        int cnt = 1;
        while(1)
        {
            int m = (int)pow(n+0.9,1.0/cnt);
            if(m < 2) break;
            int i = lower_bound(p,p+k,m) - p;
            if(p[i] != m) i--;
            ans *= sum[i];
            cnt++;
        }
        printf("%u\n",ans);
    }
    return 0;
}
