Sure, I can help you with a program to find prime numbers in C! Here's an example:

```c
#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (isPrime(n)) {
        printf("%d is a prime number.", n);
    } else {
        printf("%d is not a prime number.", n);
    }
    
    return 0;
}
```

In this program, we define a function `isPrime()` that checks if a number is prime or not. Then, in the `main()` function, we take input from the user and use the `isPrime()` function to determine if the number is prime or not.

Feel free to give it a try and let me know if you have any questions!
