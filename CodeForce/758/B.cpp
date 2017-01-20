#include <cstring>
#include <cstdio>
#include <iostream>
using namespace std;
const int maxn = 310;
int main()
{
    char str[maxn];
    cin>>str;
    int len = strlen(str);
    int f_r,f_b,f_y,f_g;
    int res_r = 0,res_b = 0,res_y = 0,res_g = 0;
    for(int i = 0; i < len ; i ++)
    {
        if(str[i]=='R')
        {
            f_r=i;
            break;
        }
    }
    for(int i = 0; i < len ; i ++)
    {
        if(str[i]=='B')
        {
            f_b=i;
            break;
        }
    }
    for(int i = 0; i < len ; i ++)
    {
        if(str[i]=='Y')
        {
            f_y=i;
            break;
        }
    }
    for(int i = 0; i < len ; i ++)
    {
        if(str[i]=='G')
        {
            f_g=i;
            break;
        }
    }
    f_r%= 4;
    f_b%= 4;
    f_y%= 4;
    f_g%= 4;
    //cout<<f_r<<" "<<f_b<<" "<<f_y<<" "<<f_g<<endl;

    for(int i = f_r; i < len ;i +=4 )
    {
        if(str[i] == '!')res_r++;
    }
    for(int i = f_b; i < len ;i +=4 )
    {
        if(str[i] == '!')res_b++;
    }
    for(int i = f_y; i < len ;i +=4 )
    {
        if(str[i] == '!')res_y++;
    }
    for(int i = f_g; i < len ;i +=4 )
    {
        if(str[i] == '!')res_g++;
    }
    cout<<res_r<<" "<<res_b<<" "<<res_y<<" "<<res_g<<endl;
    return 0;
}
