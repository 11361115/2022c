#include <iostream>
#include <stdio.h>

int main()
{
    FILE *fin = fopen("output.txt","r");

    char line[3000];
    fscanf(fin,"%s",line);
    printf("u read %s\n",line);

    fscanf (fin,"%s",line);
    printf("u read %s\n",line);

}
