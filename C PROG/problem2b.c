#include <stdio.h>

int reverse(int num,int rev) {
    if(num==0){
        return rev;
    }
    else{
        int ld = num % 10;
        return reverse(num/10,rev * 10 + ld);
    }   
}

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int rev=reverse(num,0);
    printf("%d",rev);
    return 0;
}