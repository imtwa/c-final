#include <stdio.h>  
#include <stdbool.h>  
  
bool isPrime(int n) {  
    if (n <= 1) {  
        return false;  
    }  
    for (int i = 2; i * i <= n; i++) {  
        if (n % i == 0) {  
            return false;  
        }  
    }  
    return true;  
}  
  
int sumOfPrimes(int n) {  
    int sum = 0;  
    for (int i = 2; i <= n; i++) {  
        if (isPrime(i)) {  
            sum += i;  
        }  
    }  
    return sum;  
}  
/*
1000���ڵ�����֮��
*/
int main() {  
    int n = 1000; 
    printf("1��%d֮�������֮��Ϊ��%d\n", n, sumOfPrimes(n));  
    return 0;  
}
