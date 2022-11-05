#include<stdio.h>
int main(){
 int a,b,c,d,e,f;
 for(a=1000;a<10000;a++){
  f=a;
 // b=a%10;
  a=a/10;
  c=a%10;
//  a=a/10;
//  d=a%10;
//  e=a/10;
//  if((b==e)&&(c==d))
 printf("%d\n",c);
 }
 return 0; 
}