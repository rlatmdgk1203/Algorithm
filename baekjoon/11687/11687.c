#include <stdio.h>

int Count(int n){
    int count = 0;
    while(n!=0){
        n /= 5;
        count += n;
    }
    return count;
}

int main(){
    int m;
    scanf("%d", &m);
    int min = 0;
    int max = m*5
    int temp, tempM;
    while(1){
        int temp = (min+max)/2;

        int tempM = Count(temp);

        if(tempM < m){
            min = temp+1;
        }
        else if(tempM > m){
            max = temp + 1;
        }
        if(tempM == m){
            break;
        }
        
    }
    printf("%d %d\n", temp, tempM);
}