#include <iostream>
#include <vector>
#include <queue>
#define N 100005
using namespace std;

vector<int> e[N]; //存每个节点的邻居
int vis[N];       //记录每个节点是否被访问过
queue<int> q;     //用于节点出入的队列

void bfs(){
    vis[1]=1; //设为访问过
    q.push(1); //入栈
    while(q.size()) {
        int x=q.front(); q.pop();
        //弹出节点
        //此时可以对该节点进行计算
        for(auto &y : e[x]){  //对该节点未被访问过的邻居
            if(vis[y]==1) continue;
            vis[y]=1;  //设为已访问
            q.push(y); //然后push
            //此时可以对这个y节点进行各种计算了
        }
    }
    //整个队列结束后，我们也可以进行某些计算
}