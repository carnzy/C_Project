#include<stdio.h>

int main(int argc,char** argv)
{
    int score;
    printf("??????????");
    scanf("%d",&score);
    if((score>100)||score<0)
    {
        printf("??????????????");
        return 0;
    }
    int quotient = score/10;
    switch(quotient){
        case 10:
        case 9:
        printf("A");
        break;
        case 8:
        printf("B");
        break;
        case 7:
        printf("C");
        break;
        case 6:
        printf("D");
        break;
        default:
        printf("E");
        break;
    }
    return 0;
}