#include <iostream>
using namespace std;
int main()
{
    int a[]= {1,2,3,4,5,6,7,8,9,10};
    int *p=a;
    for(int i=0; i<10; i++)
    {

        cout<<a[i]<<p[i];
    }
}
