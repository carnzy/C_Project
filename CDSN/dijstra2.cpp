#include<stdio.h>
  
#define SIZE 110  
#define INF 1000000;  
 
int map[SIZE][SIZE];  //邻接矩阵存储 
int len[SIZE];  	//d[i]表示源点到i这个点的距离 
int visit[SIZE];  //节点是否被访问 
int n,m;  //n个顶点，m条边
 
int dijkstra(int from, int to){	//从源点到目标点 
	
    int i;  
    
    for(i = 1 ; i <= n ; i ++){	//初始化 
        visit[i] = 0;	//一开始每个点都没被访问 
        len[i] = map[from][i];	//先假设源点到其他点的距离 
    }  
  
    int j;  
    for(i = 1 ; i < n ; ++i){	//对除源点的每一个点进行最短计算 
        int min = INF;  //记录最小len[i] 
        int pos;  //记录较小len[i] 的点 
  
        for(j = 1 ; j <= n ; ++j){	
            if(!visit[j] && min > len[j]){  
                pos = j;  
                min = len[j];  
            }  
        }  
        visit[pos] = 1;  
  
        for(j = 1 ; j <= n ; ++j){
            if(!visit[j] && (len[j] > (len[pos] +map[pos][j]))){ //如果j节点没有被访问过&&j节点到源节点的最短路径>pos节点到源节点的最短路径+pos节点到j节点的路径  
                len[j] = len[pos] + map[pos][j];	//更新j节点到源节点的最短路径	
            }  
        }  
    }  
  
    return len[to];
}
  
  
int main () {  
 
    int i,j;  
    
  
	n = 12;	
	m = 18;
 
    for(i = 1 ; i <= n ; ++i){	//设一开始每个点都不可达 
        for(j = 1 ; j <= n ; ++j){  
            map[i][j] = INF;  
        }  
    }  
	

    
    map[1][2] = 25;	
	map[1][3] = 21;
	map[2][3] = 23;
	map[2][8] = 11;
	map[2][9] = 6;
	map[3][4] = 20;
	map[3][5] = 25;
	map[4][6] = 20;
	map[4][5] = 12;
    map[5][7] = 45;
    map[6][8] = 35;
    map[6][7] = 8;
    map[6][12] = 21;
    map[7][12] = 12;
    map[8][9] = 25;
    map[8][10] = 55;
    map[9][10] = 33;
    map[10][12] = 18; 
    int temp = INF;
	for(i = 1 ; i <= n ; ++i){
		for(j = 1 ; j <= n ; ++j){
			if(map[i][j] == temp)
				map[i][j] = map[j][i];
		}
	}
 
    int ans = dijkstra(1,12);  
 
    printf("%d",ans);  
 
    return 0;  
} 
 
