#include <stdio.h>

int main()
{
 int quantidadeNotas;
 float nota, soma = 0, media;
 
 printf("quantas notas deseja inserir? ");
 scanf("%d", &quantidadeNotas);
 
 for (int i = 1; i <= quantidadeNotas; i++){
     printf("digite a nota #%d: ", i);
     scanf("%f", &nota);
     
     soma += nota;
 }
 media = soma / quantidadeNotas;
 
 printf("a media das notas e: %.2f\n", media);
 
    return 0;
}
