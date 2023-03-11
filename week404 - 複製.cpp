#include <iostream>
using namespace std;
int main()
{
    int a=10,b=20;
    int *p1,*p2;
    cout<<a<<b;
    p1=&a;
    *p1=99;
    cout<<a<<b;

    p2=p1;
    *p2=77;
    cout<<a<<b;



}
