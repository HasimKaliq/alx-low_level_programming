// Online C compiler to run C program online
#include <stdio.h>


 
int main() {
// Write C code here
int i;
for(i = 1; i <= 100; i++) {

if(i % 3 == 0 && i % 5 == 0){
printf("FizzBuzz ");
continue;

}
else if(i % 3 == 0) {
printf("Fizz ");
continue;
}
else if(i % 5 == 0) {
printf("Buzz ");
continue;
}
        
}
printf("%d ",i);
        
return (0);
}
