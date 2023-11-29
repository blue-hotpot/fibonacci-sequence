//青蛙跳台阶问题
//一只青蛙一次可以跳一个或两个台阶
//问到第n个台阶有多少种方法

//解答：算青蛙到n-1个台阶有多少种+n-2个台阶有多少种

#include<stdio.h>

int fibonacci(int value)
{
    //1 1 2 3 5 8 13 21 34 55
    //1 2 3 4 5 6 7  8  9  10 
    if(value==1||value==2)
        return 1;
    return fibonacci(value-1)+fibonacci(value-2);
    //重复计算大量数据
}

int fibonacci1(int value)
{
    if(value==1||value==2)
        return 1;
    int ret1=1,ret2=1;
    int ret3=0;
    for(int i=3;i<=value;i++)
    {
        ret3=ret1+ret2;
        ret1=ret2;
        ret2=ret3;
    }
    return ret3;
}

int main()
{
    int data;
    int result;
    printf("plesae input:");
    scanf("%d",&data);
    result=fibonacci1(data);
    printf("the result is %d\n",result);
    return 0;
}