#include <stdio.h>


int decide(int operation) {
    
    int numero1;
    int numero2;
    
    int resultado;

    printf("Welcome, please type 2 numbers for the calculator\n");
   
    scanf("%i%i",&numero1,&numero2);
    printf("debug mode: %i\n %i\n",numero1 ,numero2);
    
   
    switch(operation) {
        case 1:
            resultado = numero1 + numero2;
            break;
        case 2:
            resultado = numero1 - numero2;
            break;
        case 3: 
            resultado = numero1 * numero2;
            break;
        case 4: 
            resultado = numero1 / numero2;
            break;
        default:
            printf("algo errado selecionando a operação, fazendo soma\n");
            resultado = numero1 + numero2;
            break;
            
    }
    
    printf("the result is %i\n", resultado);
            return 0;
}

int chooseOperation() {    
    int operation;
    printf("type 1 for sum\n 2 for subtraction\n 3 for multiplication\n 4 for division\n");    
    scanf("%d", &operation);    
    decide(operation);
    int resultado;
    
    return 0;
    
}



int main(void) {    
    
    printf("This is the crazy calculator program!\n");
    chooseOperation();
    
    return 0;
}
            
