#include <stdio.h>

int main(){
    long long int a,b;
    int d;
    while(1){
        scanf("%d", &d);
        for(int i=0; i<d; i++){
        scanf("%lld", &a);
        b += a;
        }
        if(b == 0){
            printf("0\n");
        }
        if(b > 0){
            printf("+\n");
        }
        if(b < 0){
            printf("-\n");
        }
    }
}