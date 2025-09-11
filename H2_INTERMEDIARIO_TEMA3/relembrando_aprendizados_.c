#include <stdio.h>
int main (){

char nome[20];
char genero[10];
char paisorigem[20];
char cidadenascimento[20];
int idade;
float altura;

printf ("Qual é o seu nome? \n");
scanf ("%s", nome);

printf ("Quantos anos você tem? \n");
scanf ("%d", &idade);

printf ("Qual é o seu gênero(M ou F): \n");
scanf ("%s", genero);

printf ("País de origem: \n");
scanf ("%s", paisorigem);

printf("Cidade em que você nasceu: \n");
scanf ("%s", cidadenascimento);

printf ("Qual é a sua altura? \n");
scanf ("%f", &altura);

printf ("Nome: %s\nIdade: %d\nGênero: %s\nPaís de Origem:%s\nCidade em que nasceu:%s\nAltura:%.2f\n", nome, idade, genero, paisorigem, cidadenascimento, altura);

if (idade >= 18){
    printf ("Você é maior de idade\n");
} else {
    printf ("Você é menor de idade\n");
}

if (altura > 1.79){
    printf ("Você é alto\n");
} else {
    printf ("Você é baixinho\n");
}


        return 0;
}