#include <stdio.h>
int main (){

        float temperatura, umidade;
        unsigned int estoque, estoqueminimo = 1000;

        printf ("Entre com a temperatura: \n");
        scanf ("%f", &temperatura);
        printf ("Entre com a umidade: \n");
        scanf ("%f", &umidade);
        printf ("Entre com o estoque: \n");
        scanf ("%u", &estoque);

if (temperatura > 30){
    printf ("A temperatura está alta\n");
} else {
    printf ("A temperatura está dentro dos parâmetros\n");
}

    if (umidade > 50){
        printf ("umidade elevada\n");
    } else {
        printf ("umidade está dentro dos parâmetros\n");
    }

if (estoque < estoqueminimo){
    printf ("Estoque abaixo do mínimo\n");
} else {
    printf ("Estoque normal\n");
}


}