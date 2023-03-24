#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
long long int a,b;
while(std::cin>>a>>b){
    long long int ans=a-b;
    if(ans<0)ans=b-a;
    std::cout<<ans;



}


}
