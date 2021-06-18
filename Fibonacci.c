#include <stdio.h>

int fibonacci(int numero){
    if(numero < 0){
        return 0;
    }
    if(numero == 1 || numero == 2){
        return 1;
    }
    
    return (fibonacci(numero-1) + fibonacci(numero-2));
}

int main()
{
    printf("Hello World");
    
    for(int i = 0; i < 100 ; i++){
        printf("%i : %i\n", i, fibonacci(i));
    }
    
    return 0;
}
