#include<stdio.h>
  
#define SIZE 110  
#define INF 1000000
 
int map[SIZE][SIZE];  //邻接矩阵存储 
int len[SIZE];  	//d[i]表示源点到i这个点的距离 
int visit[SIZE];  //节点是否被访问 
int n,m;  //n个顶点，m个边
 
int dijkstra(int from, int to){	//从源点到目标点 
	
    int i;  
    
    for(i = 0 ; i < n ; i ++){	//初始化 
        visit[i] = 0;	//一开始每个点都没被访问 
        len[i] = map[from][i];	//先假设源点到其他点的距离 
    }  
  
    int j;  
    for(i = 0 ; i < n-1 ; ++i){	//对除源点的每一个点进行最短计算 
        int min = INF;  //记录最小len[i] 
        int pos;  //记录小len[i] 的点 
  
        for(j = 0 ; j < n ; ++j){	
            if(!visit[j] && min > len[j]){  
                pos = j;  
                min = len[j];  
            }  
        }  
        visit[pos] = 1;  
  
        for(j = 0 ; j < n ; ++j){
            if(!visit[j] && (len[j] > (len[pos] +map[pos][j]))){ //如果j节点没有被访问过&&j节点到源节点的最短路径>pos节点到源节点的最短路径+pos节点到j节点的路径  
                len[j] = len[pos] + map[pos][j];	//更新j节点到源节点的最短路径	
            }  
        }  
    }  
  
    return len[to];
}
  
  
int main () {  
 
    int i,j;  
    
  //  scanf("%d%d",&n,&m);	//输入数据
	n = 11;	//测试数据 
	m = 17;
 
    for(i = 0 ; i < n ; ++i){	//设一开始每个点都不可达 
        for(j = 0 ; j < n ; ++j){  
            map[i][j] = INF;  
        }  
    }  
	
/*	int a,b,c;	//输入数据 
    for(i = 1 ; i <= m ; ++i){  
        scanf("%d%d%d",&a,&b,&c);  
        map[a][b] = map[b][a] = c;  
    }  */
    
    map[0][1] = 25;	//测试数据 
	map[0][2] = 21;
	map[1][2] = 23;
	map[1][7] = 11;
	map[1][8] = 6;
	map[2][3] = 20;
	map[2][4] = 25;
	map[3][5] = 20;
	map[3][4] = 12;
    map[4][6] = 45;
    map[5][7] = 35;
    map[5][6] = 8;
    map[5][11] = 21;
    map[6][11] = 12;
    map[7][8] = 25;
    map[7][9] = 55;
    map[8][9] = 33;
    map[9][11] = 18; 
    int temp = INF;
	for(i = 0 ; i < n ; ++i){
		for(j = 0 ; j < n ; ++j){
			if(map[i][j] == temp)
				map[i][j] = map[j][i];
		}
	}
 
    int ans = dijkstra(0,11);  
 
    printf("%d",ans);  
 
    return 0;  
} 
 
/*	边的数据 
1 2 7
1 3 9
1 6 14
2 3 10
2 4 15
3 6 2
5 6 9
4 5 6
3 4 11
*/