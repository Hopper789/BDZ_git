#include <stdio.h>

int fib(int a){
    if (a == 0 || a == 1)
        return 1;
    else
        return fib(a-1) + fib(a-2);

}


int main(){
    int tt;
    scanf("%d", &tt);
    printf("Fibonachi %d: - %d", tt, fib(tt));
    
    return 0;    
}

