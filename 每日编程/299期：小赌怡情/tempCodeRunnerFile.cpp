#include<iostream>
using namespace std;

int main(){
    int T, K, n1, n2, b, t;
    cin >> T >> K;
    for(int i = 0; i < K; i++){
        cin >> n1 >> b >> t >> n2;
        int ans = n1 > n2 ? 0 : 1;
        if(T == 0){
            cout << "Game Over" <<endl;
            return 0;
        }else if(t > T){
            cout << "Not enough tokens. Total = " << T << endl;
        }else if(ans == b){
            T += t;
            cout << "Win " << t << "! Total = " << T << endl;
        }else if(ans != b){
            T -= t;
            cout << "Lose " << t <<". Total = " << T << endl;
        }
    }
    return 0;
}