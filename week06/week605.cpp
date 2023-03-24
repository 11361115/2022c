#include <algorithm>
#include <iostream>
int main()
{
    int a[10]= {1,2,4,5,6,7,8,9,3};
    std::sort(a,a+10);
    for(int i=0; i<10; i++)
    {
        std::cout<<a[i];
    }
}
