#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){ 

setlocale(LC_ALL, "");

int menu;

struct cliente{ 
char primeiroNome[20];
char ultimoNome[20];
int carro;
}A;  
  
printf("\t\tBem vindo ao estacionamento do Philiphe");
printf("Bom dia, qual o seu primeiro nome?\n");
scanf("%S", &A.primeiroNome);
  
printf("Qual seu ultimo nome?\n");
scanf("%S", &A.ultimoNome);  

system("cls");

printf("Bom dia senhor %i %i, gostariamos de saber qual a marca do seu carro com as opções a baixo: ", A.primeiroNome, A.ultimoNome);
printf("1-Onix.\n2-HB20.\n3-Gol.4-KA.\n5-Argo.\n6-Kwid.\n7-Mobi.\n8-Polo.\n9-Sandeiro.\n10-Uno.");
scanf("%i", &A.carro);


printf("-------------------------------------------------------------------------------------------------------------------");
printf("||                                      Ficha de informações                                                     ||");
printf("||  Nome: %S %S                                                                                                  ||", A.primeiroNome, A.ultimoNome);
printf("||  Tipo do carro:                                                                                               ||");
printf("||                                                                                                               ||");
printf("||                                                                                                               ||");  
  
system("pause");
}
