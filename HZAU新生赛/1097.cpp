#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
using namespace std;
const int maxn = 1010;
const int INF  = 9999999;
int a[maxn][maxn]; //save
int book[maxn][maxn]; //d
int n,m;
int startx,starty,endx,endy;
int move_x[4]={0,0,1,-1};
int move_y[4]={1,-1,0,0};
int bfs()
{
    queue<pair<int,int> > que;
    int i, j;
    for(i = 1; i <= n; i ++)
    {
        for(j = 1; j <= m ;j ++)
        {
            book[i][j] = INF;
        }
    }
    que.push(make_pair(startx,starty));
    book[startx][starty] = 0;
    while(que.size())
    {
        pair<int,int> q = que.front();
        que.pop();
        if(q.first == endx && q.second == endy)
        {
            return book[q.first][q.second];
        }
        for(i = 0; i<4; i ++)
        {
            int dx = q.first + move_x[i];
            int dy = q.second + move_y[i];
            if(dx >= 1 && dx <= n &&dy >= 1 && dy <= m &&a[dx][dy]!=1&&book[dx][dy]==INF)
            {
                que.push(make_pair(dx,dy));
                book[dx][dy] = book[q.first][q.second] + 1;
            }
        }
    }
    return INF;
}
int main()
{
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        int num;
        memset(a,0,sizeof(a));
        scanf("%d",&num);
        int x1,y1;
        while(num --)
        {
            scanf("%d %d",&x1,&y1);
            a[x1][y1] = 1;
        }
        scanf("%d %d %d %d",&startx,&starty,&endx,&endy);
        int res = bfs();
        if(res == INF)
        {
            printf("-1\n");
        }else
        {
            printf("%d\n",res);
        }
    }
    return 0;
}
