#include<stdio.h>
float simint(int principal,float rate,float time)
{
    float si;
    si = (principal*rate*time)/100.0;
    return si;
}
int main()
{
    float principal;
    float rate,time;
    principal = 10000.0;
    rate = 7.8;
    time = 10.0;
    float sp = simint(principal,rate,time);
    printf("SI IS = %.2f",sp);
    return 0;
    

    }
    
