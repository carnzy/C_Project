#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int a=0;a<=2237;a++){
        for(int b=0;b<=2237;b++){
            for(int c=0;c<=2237;c++){
                int d_d=n-a*a-b*b-c*c;
                int t=sqrt(d_d);
                if(t*t==d_d){
                    cout<<a<<" "<<b<<" "<<c<<" "<<t<<endl;
                    return 0;
                }
            }
        }
    }
}