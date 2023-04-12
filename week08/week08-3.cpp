#include <iostream>
#include <vector>
int main()
{
    std::vector<int>a(2);
    a[0]=101;
    a[1]=102;
    for(int i=0; i<2; i++)
    {
        std::cout<<a[i];

    }
    std::cout<<"size=:"<<a.size();
    a.push_back(102);
    a.push_back(103);
    a.push_back(0);
    for(int i=0; i<a.size(); i++)
    {
        std::cout<<"now size=:"<<a.size()<<"\n";

    }
}
