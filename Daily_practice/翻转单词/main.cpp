#include<iostream>
#include<string.h>
using namespace std;

void trans(char* p,int len){
    char* s= new char[len];
    memcpy(s,p,len);//内存复制，string头，目标，源，长度
    for(int i=0;i<len;i++){
        p[i]=s[len-1-i];//s从后向前给p从前向后
    }
    delete[] s;//删除s
    s=0;
}//所以这个函数是借助一个临时的s将p到p+len的字母翻转

void transfun(char* p,int len){
    int start =0;
    int i=0;
    int shift=0;
    while(i<len){
        for(i=start;i<len;i++){
            if(p[i]==' ')
            {
                break;
            }
        }//遇到单词间隔时停止遍历
        trans(p+shift,i-start);//翻转单词
        shift += i-start+1;//因为p是首地址不变，所以要改变shift，其值即每次翻转的单词长度加一
        start = i+1;
        i+=1;//i+1因为要继续遍历
    }
}//所以这个函数是完整的功能：遍历且翻转
void output(char* p){
    printf("%s\n",p);
}

int main(){
    char buf[1000] = {0};
    cout<<"请输入字符串";
    gets(buf);//从输入缓冲区中读取一个字符串存储到字符指针变量 str 所指向的内存空间
    transfun(buf,strlen(buf));
    output(buf);
    return 0;
}