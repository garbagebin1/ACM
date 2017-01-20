#include <iostream>
#include<string.h>
#include<memory.h>
#include<math.h>
const int maxn = 110;
using namespace std;
int res = 0;
char str[maxn];
int main()
{
    while(cin>>str)
    {
        int len = strlen(str);
        res = (int)fabs(str[0]-'a');
        if(res >  13) res = 26 - res;
        for(int i = 1 ; i < len ; i ++)
        {
            int tmp = (int)fabs(str[i]-str[i-1]);
            //cout<<tmp<<"1. ";
            if(tmp > 13 ) tmp = 26 - tmp;
            //cout<<tmp<<"2. ";
            res += tmp;
        }
        cout<<res<<endl;
        res = 0;
        memset(str,'\0',strlen(str));

    }
    return 0;
}
