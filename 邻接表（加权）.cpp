#include<bits/stdc++.h>
#define N 10000
using namespace std;
struct EDGE
{
    int to;//�յ�
    int cost;//�ߵ�Ȩֵ
};
vector<EDGE>G[N];//G[i]��i��ʾ������
int m,n;
int temp1;//������
int main()
{
    scanf("%d%d",&n,&m);
    while(m--)
    {
        EDGE e;
        scanf("%d%d%d",&temp1,&e.to,&e.cost);//��������㣬�յ㣬�ߵ�Ȩֵ
        G[temp1].push_back(e);//������ѹ�붯̬���飬��ʾ������������������ı�
                              //�൱�ڶ�ά��̬����
    }
    for (int i=1;i<=n;i++)//���ճ������˳�����
    {
        for(int j=0;j<G[i].size();j++)//�����������������ı�
        {
            EDGE e=G[i][j];//1�Զ�ά������ʽ���
            printf("from %d to %d,the cost is %d\n",i,e.to,e.cost);
        }
    }
    return 0;
}
