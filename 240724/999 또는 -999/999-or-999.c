#include <stdio.h>
#include <limits.h>

int main() {
    int nums[100];
    int count = 0;
    int num;

    while (count < 100) {
        scanf("%d", &num);

        if (num == 999 || num == -999) {
            break;
        }

        nums[count] = num;
        count++;
    }



    int max_num = INT_MIN;
    int min_num = INT_MAX;

    for (int i = 0; i < count; i++) {
        if (nums[i] > max_num) {
            max_num = nums[i];
        }
        if (nums[i] < min_num) {
            min_num = nums[i];
        }
    }

    printf("%d %d", max_num, min_num);


    return 0;
}