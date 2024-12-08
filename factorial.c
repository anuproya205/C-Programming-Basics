#include <stdio.h>
int main() {
    printf("Factorials of numbers from 1 to 10:\n");
    for (int num = 1; num <= 10; num++) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
   fact =fact*i; 
 }
 printf("%d\n", fact);
}
return 0;
}
