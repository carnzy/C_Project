#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    vector<string> s;
    string temp;
    
    int count = 0;
    while(cin>>temp){
        
        if(temp.find(',')!=string::npos)
            count ++;
        s.push_back(temp);
        if(cin.get()=='\n')
            break;
    }
    //cout<<s.size();
   
    cout<< s.size()+count-1;
    return 0;
}