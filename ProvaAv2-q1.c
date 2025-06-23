#include <stdio.h>

// logica dos dias. Se estivermos no dia 1 e voltarmos 1 dia, voltara 1 mes. Se estivermos em 1 mes e voltarmos 1 mes, voltara 1 ano. Estou considerando q cada mes tem 31 dias

void diaAnterior(int *dia, int *mes, int *ano) {
    if (*dia > 1) {
        (*dia)--;
        return;
    }
    *dia = 31;

    (*mes)--;
    if (*mes == 0) {
        *mes = 12;
        (*ano)--;

        return;
    }
    (*ano)--;

}
int main(){
    int dia, mes, ano, prioridade;
    float totalEntregas, parteEntregas;

    totalEntregas = 0;
    parteEntregas = 0;
    
    printf("Qual é a prioridade da tarefa? [1 - normal, 2 - Alta, qualquer valor - encerra o programa]");
    scanf("%d", &prioridade);

    while (prioridade == 1 || prioridade == 2)
    {
        printf("Digite dia, mes e ano: ");
        scanf("%d %d %d", &dia, &mes, &ano);
        
        if (prioridade == 2) {
            diaAnterior(&dia, &mes,&ano);
            parteEntregas++;
        }
        
        totalEntregas++;

        printf("Qual é a prioridade da tarefa? [1 - normal, 2 - Alta, qualquer valor - encerra o programa]");
        scanf("%d", &prioridade);
    }
    
    printf("O percentual de entregas que foram ajustadas para dia anteior é %f", parteEntregas/totalEntregas);
    

    
}

