#include <iostream>
#include <algorithm>
using namespace std;

#define x first
#define y second

typedef pair<int,int> PII;
const int N = 100010;
PII w[N];
int cnt[N];
bool res[N];	// 存放答案
int n, d, k;

int main()
{
    cin >> n >> d >> k;
    int a, b;
    for(int i = 0;i < n;i ++) {
        scanf("%d%d",&a,&b);
        w[i] = {a,b};
    }
    
    sort(w,w + n);
    
    for(int i = 0,j = 0;i < n;i ++) {
        
        while(j < n && w[j].x - w[i].x < d){
            cnt[w[j].y] ++;
            if(cnt[w[j].y] >= k) res[w[j].y] = true;
            j ++;
        }

        cnt[w[i].y] --;
    }
    
    
    for(int i = 0;i < N;i ++) 
        if(res[i]) printf("%d\n",i);
    return 0;
}