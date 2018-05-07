#include <stdio.h>
#include <math.h>

int root(int n)
{
    return (int) sqrt((float) n);
}

int prime(int n)
{
    int i,bound;
    // 这里先判断一下基础的2,3,5
    if(n%2==0)
        return (n==2);
    if(n%3==0)
        return (n==3);
    if(n%5==0)
        return (n==5);
    // 这里预处理,不用每次都调用
   // bound = root(n);
     // 优化了上方的开方变为乘法
    for(i=7;i*i<=n;i++)
        if(n%i ==0)
            return 0;
    return 1;
}

int main()
{
    int i,n;
    n=1000;
    for(i=2;i<=n;i++)
        if(prime(i))
            printf("%d\n",i);
}
