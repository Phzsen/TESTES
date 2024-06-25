#include <stdio.h>

//fumção que recebe dois inteiros e retorna a soma deles
int soma(int a, int b){
    int resultado = a + b;
    return resultado;
}

int main(){
    int x=5;
    int y=3;

    int soma = somar(x,y);
    printf("a soma de %d e %d e %d\n",x,y,soma);

    return 0;
}
