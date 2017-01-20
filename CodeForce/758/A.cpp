#include <cstring>
#include <cstdio>
#include <iostream>
using namespace std;
const int maxn = 210;
int main()
{
    int n;
    int a[maxn];
    cin>>n;
    int imax = -1;
    int sum = 0;
    for(int i = 0; i < n; i ++  )
    {
        cin>>a[i];
        sum += a[i];
        imax = max(imax,a[i]);
    }
    cout<<imax*n - sum<<endl;

}
