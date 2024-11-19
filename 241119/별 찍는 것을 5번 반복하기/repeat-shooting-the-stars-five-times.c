#include <stdio.h
void PrintStars(){
    for(int i=0; i<10; i++)
    printf("*");
}

int main() {
    for(int i=0; i<5; i++){
    PrintStars();
    printf("\n");
    }
    return 0;
}