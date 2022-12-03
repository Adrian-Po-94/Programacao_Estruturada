// IFSul de minas
// Tecnico em desenvolvimento de Sistemas
// Programação Estruturada
// Atividade Pratiques
// Adrian Caldas Pó  202224410281

#include <stdio.h>
int main()
{
    char candidato1[] = "Fulano";
    char candidato2[] = "Ciclano";
    char candidato3[] = "Beltrano";
    char candidato4[] = "Solano";
    char branco[] = "Branco";
    char nulo[] = "Nulo";

    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, voto, votoBranco = 0, votoNulo = 0;

    printf("\n======== Eleição Para Representante de Turma ========\n");
    printf("Esses são os candidatos:\n %s: 10\n %s: 20\n %s: 30\n %s: 40\n %s: 0\n %s: Qualquer outro número\n", candidato1, candidato2, candidato3, candidato4, branco, nulo);
    printf("=====================================================\n\n");

    printf("=====================================================\n");
    printf("Eleitor 1, Escolha seu Candidato\n");
    printf("Digite o Numéro do seu Candidato:\n");
    scanf("%d", &voto);

    if (voto == 10)
    {
        c1 = c1 + 1;
    }
    else if (voto == 20)
    {
        c2 = c2 + 1;
    }
    else if (voto == 30)
    {
        c3 = c3 + 1;
    }
    else if (voto == 40)
    {
        c4 = c4 + 1;
    }
    else if (voto == 0)
    {
        votoBranco = votoBranco + 1;
    }
    else
    {
        votoNulo = votoNulo + 1;
    }
    printf("Confirmado\n\n");
    printf("=====================================================\n");

    printf("=====================================================\n");
    printf("Eleitor 2, Escolha seu Candidato\n");
    printf("Digite o Numéro do seu Candidato:\n");
    scanf("%d", &voto);
    if (voto == 10)
    {
        c1 = c1 + 1;
    }
    else if (voto == 20)
    {
        c2 = c2 + 1;
    }
    else if (voto == 30)
    {
        c3 = c3 + 1;
    }
    else if (voto == 40)
    {
        c4 = c4 + 1;
    }
    else if (voto == 0)
    {
        votoBranco = votoBranco + 1;
    }
    else
    {
        votoNulo = votoNulo + 1;
    }
    printf("Confirmado\n\n");
    printf("=====================================================\n");

    printf("=====================================================\n");
    printf("Eleitor 3, Escolha seu Candidato\n");
    printf("Digite o Numéro do seu Candidato:\n");
    scanf("%d", &voto);
    if (voto == 10)
    {
        c1 = c1 + 1;
    }
    else if (voto == 20)
    {
        c2 = c2 + 1;
    }
    else if (voto == 30)
    {
        c3 = c3 + 1;
    }
    else if (voto == 40)
    {
        c4 = c4 + 1;
    }
    else if (voto == 0)
    {
        votoBranco = votoBranco + 1;
    }
    else
    {
        votoNulo = votoNulo + 1;
    }
    printf("Confirmado\n\n");
    printf("=====================================================\n");

    printf("=====================================================\n");
    printf("Eleitor 4, Escolha seu Candidato\n");
    printf("Digite o Numéro do seu Candidato:\n");
    scanf("%d", &voto);
    if (voto == 10)
    {
        c1 = c1 + 1;
    }
    else if (voto == 20)
    {
        c2 = c2 + 1;
    }
    else if (voto == 30)
    {
        c3 = c3 + 1;
    }
    else if (voto == 40)
    {
        c4 = c4 + 1;
    }
    else if (voto == 0)
    {
        votoBranco = votoBranco + 1;
    }
    else
    {
        votoNulo = votoNulo + 1;
    }
    printf("Confirmado\n\n");
    printf("=====================================================\n");

    printf("=====================================================\n");
    printf("Eleitor 5, Escolha seu Candidato\n");
    printf("Digite o Numéro do seu Candidato:\n");
    scanf("%d", &voto);
    if (voto == 10)
    {
        c1 = c1 + 1;
    }
    else if (voto == 20)
    {
        c2 = c2 + 1;
    }
    else if (voto == 30)
    {
        c3 = c3 + 1;
    }
    else if (voto == 40)
    {
        c4 = c4 + 1;
    }
    else if (voto == 0)
    {
        votoBranco = votoBranco + 1;
    }
    else
    {
        votoNulo = votoNulo + 1;
    }
    printf("Confirmado\n\n");
    printf("=====================================================\n");

    printf("=====================================================\n");
    printf("Resultado da Eleição:\n");
    printf("%s = %d\n %s = %d\n %s = %d\n %s = %d\n %s = %d\n %s = %d\n", candidato1, c1, candidato2, c2, candidato3, c3, candidato4, c4, branco, votoBranco, nulo, votoNulo);

    if ((c1 > c2) && (c1 > c3) && (c1 > c4))
    {
        printf("=====================================================\n");
        printf("O candidato %s está Eleito\n", candidato1);
        printf("=====================================================\n");
    }
    else if ((c2 > c1) && (c2 > c3) && (c2 > c4))
    {
        printf("=====================================================\n");
        printf("O candidato %s está Eleito\n", candidato2);
        printf("=====================================================\n");
    }
    else if ((c3 > c1) && (c3 > c2) && (c3 > c4))
    {
        printf("=====================================================\n");
        printf("O candidato %s está Eleito\n", candidato3);
        printf("=====================================================\n");
    }
    else if ((c4 > c1) && (c4 > c2) && (c4 > c3))
    {
        printf("=====================================================\n");
        printf("O candidato %s está Eleito\n", candidato4);
        printf("=====================================================\n");
    }
    else if ((c1 == c2) && (c1 > c3) && (c1 > c4))
    {
        printf("=====================================================\n");
        printf("Houve empate entre os candidatos %s e %s\n", candidato1, candidato2);
        printf("Vai para o segundo turno!\n");
        printf("=====================================================\n");
    }
    else if ((c1 == c3) && (c1 > c2) && (c1 > c4))
    {
        printf("=====================================================\n");
        printf("Houve empate entre os candidatos %s e %s\n", candidato1, candidato3);
        printf("Vai para o segundo turno!\n");
        printf("=====================================================\n");
    }
    else if ((c1 == c4) && (c1 > c2) && (c1 > c3))
    {
        printf("=====================================================\n");
        printf("Houve empate entre os candidatos %s e %s\n", candidato1, candidato4);
        printf("Vai para o segundo turno!\n");
        printf("=====================================================\n");
    }
    else if ((c2 == c3) && (c2 > c1) && (c2 > c4))
    {
        printf("=====================================================\n");
        printf("Houve empate entre os candidatos %s e %s\n", candidato2, candidato3);
        printf("Vai para o segundo turno!\n");
        printf("=====================================================\n");
    }
    else if ((c2 == c4) && (c2 > c1) && (c2 > c3))
    {
        printf("=====================================================\n");
        printf("Houve empate entre os candidatos %s e %s\n", candidato2, candidato4);
        printf("Vai para o segundo turno!\n");
        printf("=====================================================\n");
    }
    else if ((c3 == c4) && (c3 > c1) && (c3 > c2))
    {
        printf("=====================================================\n");
        printf("Houve empate entre os candidatos %s e %s\n", candidato3, candidato4);
        printf("Vai para o segundo turno!\n");
        printf("=====================================================\n");
    }
    else if ((c1 == 0) && (c2 == 0) && (c3 == 0) && (c4 == 0) && (votoBranco > c1) && (votoBranco > c2) && (votoBranco > c3) && (votoBranco > c4))
    {
        printf("=====================================================\n");
        printf("Não houve candidato votado\n");
        printf("Todos os votos foram em Branco\n");
        printf("Haverá uma Nova Eleição\n");
        printf("=====================================================\n");
    }
    else if ((c1 == 0) && (c2 == 0) && (c3 == 0) && (c4 == 0) & (votoNulo > c1) && (votoNulo > c2) && (votoNulo > c3) && (votoNulo > c4))
    {
        printf("=====================================================\n");
        printf("Não houve candidato votado!\n");
        printf("Todos os votos foram Nulo\n");
        printf("Haverá uma Nova Eleição\n");
        printf("=====================================================\n");
    }

    printf("======================= Fim =========================\n");

    return 0;
}
