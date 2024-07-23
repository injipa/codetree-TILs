#include <stdio.h>

int main() {
    int arr[10];  // 10개의 정수를 저장할 배열 선언
    int count = 0;  // 입력된 정수의 개수를 세기 위한 변수
    

    
    for (int i = 0; i < 10; i++) {
        int num;
        scanf("%d", &num);
        
        if (num == 0) {
            break;  // 0이 입력되면 입력을 중단
        }
        
        arr[count] = num;  // 입력된 정수를 배열에 저장
        count++;  // 입력된 정수의 개수를 증가
    }
    
    
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}