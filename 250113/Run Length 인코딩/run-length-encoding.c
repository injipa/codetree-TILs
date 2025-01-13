#include <stdio.h>
#include <string.h>

int main() {
    char str[1001];          // 최대 1000자 입력 가능
    char encoded[2001] = ""; // 압축 결과를 저장 (최대 2000자: 문자 + 숫자)
    int length, count = 1, encodedLength = 0, pos = 0;

    scanf("%s", str);

    length = strlen(str);

    for (int i = 1; i <= length; i++) {
        if (str[i] == str[i - 1]) {
            count++;
        } else {
            // 문자 저장
            encoded[pos++] = str[i - 1];
            // 숫자 저장
            int digits[10], digitCount = 0, temp = count;
            do {
                digits[digitCount++] = temp % 10; // 각 자릿수 저장
                temp /= 10;
            } while (temp > 0);

            // 숫자 자릿수를 거꾸로 저장
            for (int j = digitCount - 1; j >= 0; j--) {
                encoded[pos++] = '0' + digits[j];
            }

            // 압축된 길이 계산
            encodedLength += 1 + digitCount;
            count = 1; // 카운트 초기화
        }
    }

    // 널 문자로 문자열 종료
    encoded[pos] = '\0';

    // 출력 순서 변경: Encoded Length 먼저 출력
    printf("%d\n", encodedLength);
    printf("%s\n", encoded);

    return 0;
}