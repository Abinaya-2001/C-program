#include <stdio.h>
int main() {
    int num, Num, rem, result = 0;
    scanf("%d", &num);
    Num = num;

    while (Num != 0) {
        rem = Num % 10;
        
       result += rem * rem* rem;
       Num /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
}
