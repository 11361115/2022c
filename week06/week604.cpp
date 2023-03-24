#include <iostream>
#include <stdlib.h>
#include <stdio.h>

    int a[10]= {1,3,4,5,6,7,8,9,2};
    int compare(const void *p1 ,const void *p2)
    {
        return *(int*)p1 - *(int*)p2;
    }
    int main()
    {
        qsort(a,10,sizeof(int),compare);
        for(int i=0; i<10; i++)
        {
            printf("%d",a[i]);

        }
    }

