#include <stdio.h>   // necessário para printf e scanf

int main() {
    int total_disciplinas, limite_alunos = 100, total_alunos = 0;
    int disciplinas_contadas = 0;   // rastreia quantas foram realmente contadas

    printf("Sistema de contagem de alunos matriculados!\n");
    printf("Insira o numero de disciplinas disponiveis: ");
    scanf("%d", &total_disciplinas);

    for (int i = 1; i <= total_disciplinas; i++) {
        int alunos_matriculados;

        // Validação com do-while (mais limpo que i--)
        do {
            printf("Insira o numero de alunos matriculados na disciplina %d: ", i);
            scanf("%d", &alunos_matriculados);

            if (alunos_matriculados < 0)
                printf("Numero de alunos invalido. Tente novamente.\n");
        } while (alunos_matriculados < 0);

        total_alunos += alunos_matriculados;
        disciplinas_contadas++;   // conta a disciplina processada

        // Verifica o limite DEPOIS de somar
        if (total_alunos >= limite_alunos) {
            printf("Limite de alunos atingido. Encerrando contagem.\n");
            break;
        }
    }

    printf("Total de disciplinas contadas: %d\n", disciplinas_contadas);
    printf("Total de alunos matriculados: %d\n", total_alunos);

    return 0;
}