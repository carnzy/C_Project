#include<iostream>
#include<string.h>
using namespace std;

void trans(char* p,int len){
    char* s= new char[len];
    memcpy(s,p,len);//�ڴ渴�ƣ�stringͷ��Ŀ�꣬Դ������
    for(int i=0;i<len;i++){
        p[i]=s[len-1-i];//s�Ӻ���ǰ��p��ǰ���
    }
    delete[] s;//ɾ��s
    s=0;
}//������������ǽ���һ����ʱ��s��p��p+len����ĸ��ת

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
        }//�������ʼ��ʱֹͣ����
        trans(p+shift,i-start);//��ת����
        shift += i-start+1;//��Ϊp���׵�ַ���䣬����Ҫ�ı�shift����ֵ��ÿ�η�ת�ĵ��ʳ��ȼ�һ
        start = i+1;
        i+=1;//i+1��ΪҪ��������
    }
}//������������������Ĺ��ܣ������ҷ�ת
void output(char* p){
    printf("%s\n",p);
}

int main(){
    char buf[1000] = {0};
    cout<<"�������ַ���";
    gets(buf);//�����뻺�����ж�ȡһ���ַ����洢���ַ�ָ����� str ��ָ����ڴ�ռ�
    transfun(buf,strlen(buf));
    output(buf);
    return 0;
}