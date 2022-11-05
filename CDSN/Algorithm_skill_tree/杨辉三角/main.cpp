#include<iostream>
using namespace std;
int main(){
    int data[9][9];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            data[i][j]=1;
        }
    }
    for(int i=2;i<9;i++){
        for(int j=1;j<i;j++){
            data[i][j]=data[i-1][j]+data[i-1][j-1];
        }
    }
    for(int i=0;i<9;i++){
        for(int k=0;k<26-6*i/2;k++){
            printf(" ");
        }
            for(int j=0;j<=i;j++){
                printf("%6d",data[i][j]);
            }
        printf("\n");  
    }
    
}