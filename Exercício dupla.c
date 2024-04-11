//Crie um algoritmo que receba o nome de três disciplinas, receba três notas, entre
//zero e dez, para cada disciplina e mostre a média ponderada de cada disciplina:
#include <locale.h>
#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#include<stdlib.h>
#define Q_DISCIPLINAS 3
#define Q_NOTAS 3

int main() {
	setlocale(LC_ALL, "");
	
float notas[Q_DISCIPLINAS][Q_NOTAS], soma[Q_DISCIPLINAS][Q_NOTAS], media[Q_DISCIPLINAS], peso[Q_NOTAS]={3,3,4};
char disciplina[Q_DISCIPLINAS][200];
int i,j;

// Solicitação dos nomes das disciplinas
for (i=0; i<Q_DISCIPLINAS; i++){
	printf("=== ATIVIDADE PONTUADA II - VETORES E MATRIZES ===\n");
	printf("\n");
	printf("Digite o nome da %iª disciplina: ", i+1);
	scanf("%s", &disciplina[i]);
	
	//
	system("cls");
	
// Solicitação das notas para cada disciplina

	for (j=0; j<Q_NOTAS; j++){
		do{
		//
		printf("=== ATIVIDADE PONTUADA II - VETORES E MATRIZES ===\n");
		printf("\n");	
		printf("Disciplina %s: \n", disciplina[i]);
		//
		printf("Digite a %iª nota: ", j+1);
		scanf("%f", &notas[i][j]);
		soma[i][j]=notas[i][j]*peso[j];
		//
		system("cls");
		//
		}while (notas[i][j]<0 || notas[i][j]>10);
	}
}
 // Cálculo das médias ponderadas para cada disciplina
    for (i = 0; i < Q_DISCIPLINAS; i++) {
        for (j = 0; j < Q_NOTAS; j++) {
        	
            media[i] = media[i]+soma[i][j];
        }
	}
// Exibição das médias ponderadas para cada disciplina
    printf("=== ATIVIDADE PONTUADA II - VETORES E MATRIZES ===\n");
	printf("\n");
	printf("Médias ponderadas das disciplinas:\n");
    for (i = 0; i < Q_DISCIPLINAS; i++) {
        printf("Disciplina %s: %.2f\n", disciplina[i], media[i]/10);
    }
    printf("\n");
	printf("\n");
	printf("\n");
	printf("Ítalo Mateus Santos Alves da Silva\n");
	printf("Carlos Eduardo Lemos Nascimento\n");
    return 0;
}
