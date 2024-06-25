#include <iostream> // inclui a blibioteca padrao de entrada e saide em C++, necessaria para usar cin e cout
#include <cstdlib> // inclui a blibioteca padrao C, que permite o uso da funcao rand() para geracao fr numeros aleatorios

using namespace std; // permite o uso direto das funcoes e objetos do namespace std, como cout e cin, sm precisar prefixar com std::

int main()// funcao principal onde a execucao do programa comeca
{
   // gera um numero aleatorio entre 1 e 100
   // rand ()% 100 gera um numero entre 0 e 99. adicionando 1,temos o intervalo de 1 a 100
  int numeroSecreto = rand() % 100 + 1;
  
  // define o numero de tentativas que o usuario tem para adivinhar o numero
  int tentativas = 8;
  int palpite; // declara uma variavel para armazenar o palpite do usuario
  
  //loop para adivinhar o numero
  do
  {
  
  //exibe o numero da tentativa atual e solicita ao usuario que insira um numero
  cout << "Tentativa" << tentativas << ", digite um numero: ";
  
  cin >> palpite; // lê o palpite do usuario e menor que o numero secreto 
 
 if (palpite > numeroSecreto) // verifica se o palpite do usuario e menor que o numero secreto
 {
     cout << "muito baixo!" << endl; // informa ao usuario que o palpite e muito baixo
 }
    else if(palpite > numeroSecreto)
    {
        cout << "muito alto!" << endl; // informa ao usuario que o palpite e muito alto
    }
        tentativas --; // decrementa o numero de tentaivas restantes
  } while (palpite !=numeroSecreto && tentativas > 0); // continua o loop enquanto o palpite nao for o numero secreto e houver tentativas restantes
  
      if(palpite == numeroSecreto) //apos sair do loop, verifica se o usuario adivinhou o numero secreto
  {
      //informa ao usuario que ele acertou o numero secreto e mostra quantas tentativas foram usadas
      //note que a variavel tentativas aqui reflete as tentativas restantes.para mostrar quantas tentativas foram usadas, usamos 8 - tentativas
      cout << "Parabens! voce acertou o numero com "<< 8 - tentativas << " tentativas(s)!" << endl;
  }
  else
  {
      // informa o usuario que ele nao conseguiu adivinhar o numero e revela qual era o numero secreto
      cout <<"voce nao conseguiu adivinhar o numero. o numero secreto era: "<< numeroSecreto << "!" << endl; 
   
  }
    return 0; // retorna 0 indicando que o programa terminou com sucesso 
    
    
}