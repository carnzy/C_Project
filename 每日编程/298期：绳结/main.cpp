#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    //sort(v.begin(),v.end());
    int result = v[0];
    for(int i = 1; i < n; i++){
        result = (result + v[i])/2;
    }
    cout << result ;
    return 0;
}