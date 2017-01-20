//codeforces 276B

#include <iostream>
#include<string.h>
#include<memory.h>
#include<math.h>
#include<stdio.h>
#include<algorithm>
const int maxn = 2e5+10;
using namespace std;
int res = 0;
int a[maxn];
int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        int sum = 1;
        while(1)
        {
            if((sum * n)% 10 == m||(sum * n)% 10 == 0 )
            {
                break;
            }else
            {

                sum ++;
            }
        }
        printf("%d\n",sum);
    }
    return 0;

}
