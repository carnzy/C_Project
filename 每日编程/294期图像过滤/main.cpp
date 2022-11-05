#include<iostream>
#include<vector>
using namespace std;

int main() {
    int row, col;
    int low, up, replace;
    cin >> row >> col >> low >> up >> replace;
    vector<vector<int>> image(row);
    for(int i = 0; i < row; i++){
        image[i].resize(col); //每行有col个
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> image[i][j];
        }
    }
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++){
            if(j == col-1){
                if(image[i][j] >= low && image[i][j] <= up){
                    printf("%03d\n",replace);
                }
                else{
                    printf("%03d\n",image[i][j]);
                }
            }//每行的最后一个换行
            else{
                if(image[i][j] >= low && image[i][j] <= up){
                    printf("%03d ",replace);
                }
                else{
                    printf("%03d ",image[i][j]);
                }
            }//注意带个空格
        }     
    return 0;  
}

