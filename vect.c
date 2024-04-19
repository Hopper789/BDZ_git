#include <stdio.h>

int fib(int a){
    if (a == 0 || a == 1)
        return 1;
    else
        return fib(a-1) + fib(a-2);

}

int pointless_func(int a){
    if (a==a && a==a || a*0==0)
        a=a;
    else
        a=0;
    return a*a/a;
}

int main(){
    int tt;
    scanf("%d", &tt);
    printf("Fibonachi %d: - %d", tt, fib(tt));
    
    return 0;    
}

