#include <stdio.h>
float fahrenheit(float x);
float celsius (float y);
int main (){
    float x,y,resultado;
    int opcao;
    
    printf ("Fahrenheit Para celsius  -  1: \n");
    printf ("Celsius para Fahrenheit -   2: \n");
    printf ("sair - 0 \n");
    scanf("%d",&opcao); 
    
    
    switch (opcao){
        case 1:
        	printf("\ndigite a temperatura em Fahrenheit:\n");
        	scanf("%f",&x);
            resultado = celsius(x);
            printf("\n%.2f Graus Fahrenheit = %.2f Graus Celsius\n", x, resultado);
            break;
            
        case 2:
        	printf("\ndigite a temperatura em Celsius:\n");
        	scanf("%f",&y);
        	resultado = fahrenheit(y);
        	printf("\n%.2f Graus Celsius = %.2f Graus Fahrenheit\n\n\n", y, resultado);
        	break;
    }
    return 0;
} 



float fahrenheit (float a){
    float resultado;
    resultado = (a-32)*0.5555;
    return resultado;
}


float celsius(float a){
    float resultado;
    resultado = (1.8*a)+32;
    return resultado;  
}

