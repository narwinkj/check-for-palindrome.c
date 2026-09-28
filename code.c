#include <stdio.h>
int main(void){
    int num = 0, new_num = 0, tmp = 0, old_num = 0;
    printf("Enter the number to text for Palindromicity: ");
    scanf("%d", &num);
    old_num = num;
    while (num != 0){
        tmp = num % 10;
        num = num / 10;
        new_num = new_num * 10 + tmp;
    }if (old_num == new_num){
        printf("The given number %d is a Palindrome.\n", old_num);
    }else{
        printf("The given number %d is Not a Palindrome.\n", old_num);
    }
    return 0;
}
