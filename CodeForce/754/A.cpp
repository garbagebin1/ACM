#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;
typedef pair<int,int> pii;
int n;
int a[110];
pii ans[110];
int main()
{
	while(~scanf("%d",&n))
	{
		int cnt = 0,k = 0,p = 1;
		for(int i = 1; i <= n; i ++)
		{
			scanf("%d",a+i);
			if(a[i]!=0)
			{
				ans[k].first = p;
				ans[k++].second = i;
				p = i +1;
			}
		}
		if(p!=n+1)
		{
			ans[k-1].second = n;
		}
		if(k==0)
		{
			puts("NO");
		}
		else
		{
			puts("YES");
			printf("%d\n",k);
			for(int i = 0; i < k ; i ++)
				printf("%d %d\n",ans[i].first,	ans[i].second);
		}
	}
	return 0;
}
 
