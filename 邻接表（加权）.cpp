#include<bits/stdc++.h>
#define N 10000
using namespace std;
struct EDGE
{
    int to;//终点
    int cost;//边的权值
};
vector<EDGE>G[N];//G[i]中i表示出发点
int m,n;
int temp1;//出发点
int main()
{
    scanf("%d%d",&n,&m);
    while(m--)
    {
        EDGE e;
        scanf("%d%d%d",&temp1,&e.to,&e.cost);//输入出发点，终点，边的权值
        G[temp1].push_back(e);//将数据压入动态数组，表示在这个出发点下引出的边
                              //相当于二维动态数组
    }
    for (int i=1;i<=n;i++)//按照出发点的顺序遍历
    {
        for(int j=0;j<G[i].size();j++)//遍历出发点所引出的边
        {
            EDGE e=G[i][j];//1以二维数组形式输出
            printf("from %d to %d,the cost is %d\n",i,e.to,e.cost);
        }
    }
    return 0;
}
