
#include <stdio.h>


void fizzBuzz(){
    int i;
    for(i = 1; i <= 100; i++) {
        if(i % 3 == 0) {
            printf("Fizz ");
            continue;
        }
        else if(i % 5 == 0) {
            printf("Buzz ");
            continue;
        }
        
        else if(i % 3 == 0 && i % 5 == 0){
            printf("FizzBuzz ");
            continue;
        }
        printf("%d ",i);
        
    }
} 
int main(void) {
    // Write C code here
    fizzBuzz();
    return (0);
}
