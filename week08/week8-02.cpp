#include <iostream>
#include <vector>
int main()
{
    int a1[10]= {1,2,3,4,5,6,7,8,0,9};
    std::vector<int>a2(a1,a1+10);
    for(int i=0; i<10; i++)
        std::cout<<a2[i];

}
