#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string a[5]={"5","2","C","D","+"};
    cout<<sizeof(a)<<endl;
    cout<<sizeof(a)/sizeof(a[0])<<endl;
    cout<<sizeof(a)/sizeof(a[2])<<endl;
    cout<<sizeof(a)/sizeof(a[4])<<endl;
}