#include <stdio.h>

void csdn()
{
    printf("CSDN-->");
}

void yueluqu()
{
    printf("岳麓区-->");
    csdn();
}

void changsha()
{
    printf("长沙-->");
    yueluqu();
}

void hunan()
{
    printf("湖南-->");
    changsha();
}

void china()
{
    printf("中国-->");
    hunan();
}

china();
printf("https://www.csdn.net/");

int main(int argc, char** argv)
{
    return 0;
}