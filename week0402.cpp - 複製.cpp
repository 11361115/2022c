#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
int a=10,b=20;

int *p1=&a;
int *p2=&b;

printf("%d\n",*p1);
printf("%d\n",*p2);
p1=p2;
printf("%d\n",*p1);
printf("%d\n",*p2);
return 0;
}
