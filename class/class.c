#include <stdio.h>

int main(){
    char arr[10];
    char secret[10]= "secret123";

    scanf("%s", arr);
    printf("%lld\n", arr);
    printf("%lld\n", secret);

    printf("%s\n", arr);
    printf("%s\n", secret);
    for(int i=0; i != 10; ++i){
        printf("%c", secret[i]);
    }
    printf("\n");
}