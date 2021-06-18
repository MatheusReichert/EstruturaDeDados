/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
