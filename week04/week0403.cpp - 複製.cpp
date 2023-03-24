#include <stdio.h>
#include <iostream>
int main()
{
    int a=10,b=20;
    int *p1=&a;
    int *p2=&b;
    std::cout<<&a<<"\n"<<&b;
    p1=p2;
    std::cout<<*p1<<"\n"<<p2;
    p1=&a;
    std::cout<<*p1<<"\n"<<*p2;
    return 0;
}

