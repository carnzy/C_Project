#include<iostream>
using namespace std;
#define MaxSize 50
typedef int ElemType;
typedef struct {
    int data[MaxSize];
    int length;
}sqList;
bool Del_s_t2(sqList &L, ElemType s, ElemType t){
    //删除有序顺序表L中值在给定值s与t之间的所有元素
    int i,j;

    if((s>=t) || L.length==0)
        return false;

    for (i=0; i<L.length && L.data[i] <s; i++) ;    //寻找值>=s 的第一个元素

    if(i>=L.length)
        return false;  //所有元素值均小于s，则返回

    for(j=i; j<L.length && L.data[j] <=t; j++) ;    //寻找值>t 的第一个元素

    for(;j<L.length;i++, j++)
        L.data[i]=L.data[j];  //前移，填补被删元素位置

    L.length=i;
    return true;
}
int main() {
    sqList L;
	L.length = 0;
	for(int i = 0; i < 10; i++){
		scanf("%d", &L.data[i]);
		L.length++;
	}
    Del_s_t2(L,3,8);
	for(int i = 0; i < L.length; i++){
		printf("%d ", L.data[i]);
	}
	return 0; 
}
