#include <stdio.h>
#include <math.h>

int get_order(int x) {
    int len = 0;
    while (x) {
        len++;
        x /= 10;
    }
    return len;
}

int main() {
    int lower, upper, num, temp, sum, digit, order;

    printf("Enter lower bound: ");
    scanf("%d", &lower);
    printf("Enter upper bound: ");
    scanf("%d", &upper);

    printf("Armstrong numbers in range [%d, %d]: ", lower, upper);
    for (num = lower; num <= upper; num++) {
        temp = num;
        sum = 0;
        order = get_order(num);
        
        while (temp > 0) {
            digit = temp % 10;
            sum += pow(digit, order);
            temp /= 10;
        }
        
        if (sum == num) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}   
