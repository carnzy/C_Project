#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int m, n;
    scanf("%d%d", &n, &m);
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%c", 65 + abs(i - j));
        }
        printf("\n");
    }
    return 0;
}