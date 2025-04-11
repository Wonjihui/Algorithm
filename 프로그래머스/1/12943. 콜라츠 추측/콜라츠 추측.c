#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    int count = 0;
    long long n = num;  // 계산 중 int 범위를 넘을 수 있어 long long 사용

    while (n != 1) {
        if (count >= 500) return -1;

        if (n % 2 == 0)
            n /= 2;
        else
            n = n * 3 + 1;

        count++;
    }

    return count;
}
