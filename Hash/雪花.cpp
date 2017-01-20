#include <cstdio>
#include <cstring>
#include <set>
#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <vector>
const int MAX_SIZE = 100005;
const int MOD_VAL = 90001;
using namespace std;
int snow[MAX_SIZE][6];
vector<int> _hash[MOD_VAL];
bool same(int a,int b)
{
    for(int i = 0; i < 6;i ++)
    {
        if((snow[a][0] == snow[b][i]&&snow[a][1] == snow[b][(i+1)%6]&&snow[a][2] == snow[b][(i+2)%6]&&snow[a][3] == snow[b][(i+3)%6]
           &&snow[a][4] == snow[b][(i+4)%6]&&snow[a][5] == snow[b][(i+5)%6])||
           (snow[a][0] == snow[b][i]&&snow[a][1] == snow[b][(i+5)%6]&&snow[a][2] == snow[b][(i+4)%6]&&snow[a][3] == snow[b][(i+3)%6]
           &&snow[a][4] == snow[b][(i+2)%6]&&snow[a][5] == snow[b][(i+1)%6]))
           return true;
    }
    return false;
}
int main()
{
    int n,sum,key;
    scanf("%d",&n);
    for(int i = 0;i < n ; i ++)
    {
        for(int j = 0;j < 6; j ++)
            scanf("%d", &snow[i][j]);
    }
    for(int i = 0; i < n; i ++)
    {
        sum = 0;
        for(int j = 0; j < 6; j ++)
            sum += snow[i][j];
        key = sum %MOD_VAL;
        for(vector<int>::size_type j = 0 ; j < _hash[key].size();j ++ )
        {
            if(same(_hash[key][j],i))//将hash值相同元素放在_hash[key]这个数组中
            {
                printf("Twin snowFlakes are alike.");
                return 0;
            }
        }
        _hash[key].push_back(i);
    }
    printf("No two snowFlakes are alikes");
    return 0;
}
