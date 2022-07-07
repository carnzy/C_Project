#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
int main(){
    int n=1000-52,y,m,d;
    int y0=2015,m0=1,d0=1;
    for(int yy=y0;yy<=y0+n/365;++yy){
        for(int mm=1;mm<=12;){
            if(n>=31&&mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12){n-=31;++mm;}
            if(n>=30&&mm==4||mm==6||mm==9||mm==11){n-=30;++mm;}
            if(n>=29&&mm==2&&!(yy%4)){n-=29;++mm;}
            if(n>=28&&mm==2){n-=28;++mm;}
            else {cout<<yy<<'-'<<mm<<'-'<<n<<endl;break;}
        }
    }


    return 0;
}