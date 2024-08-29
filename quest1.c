#include <stdio.h>
#include <stdlib.h>

int main(){

    int cchar = sizeof(char);
    int iint = sizeof(int);
    int ffloat = sizeof(float);
    int ddouble = sizeof(double);

    printf("bytes char: %d\nbytes int: %d\nbytes float: %d\nbytes double: %d\n",cchar,iint,ffloat,ddouble);

}