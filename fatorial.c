#include <stdio.h>

//printf("Digite as notas dos alubos: \n");

void preencher_vetor(int n, float notas[]){
    for(int i=0; i<n; i++){
        scanf("%f", &notas[i]);
    }
}

void processar_vetor(int n, float notas[], float *maior, float *menor, float *media){
    *maior = notas[0];
    *menor = notas[0];
    float soma = 0;

    for(int i = 0; i<n; i++){
        if(notas[i] > *maior){
            *maior = notas[i];
        }
        if(notas[i]< *menor){
            *menor = notas[i];
        }
        soma += notas[i];
    }
    *media = soma/n;
}

int main(){

    int n;
    scanf("%d", &n);

    float notas[n];

    preencher_vetor(n, notas);

    float maior, menor, media;

    processar_vetor(n, notas, &maior, &menor, &media);

    printf("%.1f %.1f %.1f\n", maior, menor, media);

    return 0;
}