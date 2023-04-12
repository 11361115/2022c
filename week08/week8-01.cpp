#include <iostream>
#include <vector>
int main()
{
std::vector <int> a(3);
    a[0]=101;
    a[1]=102;
    a[2]=103;
    for(int i=0; i<3; i++)
        std::cout<<a[i]<<"\n";
}
