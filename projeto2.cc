#include <stdio.h>
#include <locale>
/*Projeto Algoritmos e programação
Integrantes: Daniel, Gustavo, Anderson
como funciona: jogo de perguntas e respostas sobre como funciona a reciclagem.
*/

int main()
{

    int i, n;
    // n - variavel para controlar a quantidade de jogadores
    int manual, rr1, pontos = 0;
    // manual = variavel que controla se o usuário quer saber as regras ou se quer seguir direto para a jogatina
    // rr1 = varial que corresponde as respostas das perguntas apresentadas.
    // pontos = variavel que controla a pontuação do jogador.
    setlocale(LC_ALL, "Portuguese_Brazil");
    wprintf(L"\n**************************************************************************\n");
    wprintf(L"\n**********     Bem vindo ao projeto - Manual da Reciclagem!     **********\n");
    wprintf(L"\n**************************************************************************");
    wprintf(L"\n\n Vamos testar seu conhecimento?");

    do // laço de repetição para ver se o usuario quer entender como funciona o jogo ou jogar imediatamente.
    {
        wprintf(L" \n\n 1- Sim, quero ser desafiado! \n 2- Ainda não, quero saber como funciona! \n");
        scanf("%d", &manual);
        if (manual == 1)
        {
            wprintf(L"\n Ok, vamos iniciar nosso Jogo!\n"); // quem escolhe essa opção ja sabe previamente como funciona o jogo e ja parte para a ação
        }
        else if (manual == 2)
        {
            wprintf(L"\n O jogo funciona da seguinte forma:"); // explicação de como são as regras do jogo proposto.
            wprintf(L"\n\tNo jogo temos cinco perguntas, com três possíveis respostas!");
            wprintf(L"\n\tVocê terá que acertar para poder pontuar!");
            wprintf(L"\n\tCaso acerte, ganhará 10 pontos!");
            wprintf(L"\n\tAcertando as cinco questões sobre o descarte correto de resíduos, você fará 50 pontos!");
            wprintf(L"\n\tAposte com seus amigos e veja quem irá vencer esse desafio!\n\n");
        }
        else
        {
            wprintf(L"Opção não encontrada, favor regite!");
        }
    } while ((manual != 1) && (manual != 2));
    system("\n PAUSE \n");

    wprintf(L"\n\nQuantos jogadores terão nesta rodada? ");
    scanf("%d", &n);

    int pergunta1[n], pergunta2[n], pergunta3[n], pergunta4[n], pergunta5[n];
    int acertosporjogador[n];

    char nomes[n][50];

    for (i = 0; i < n; i++)
    {
        printf("Qual o nome do jogador %d?", i + 1);
        fflush(stdin);
        fgets(nomes[i], 50, stdin);
        
    }

    for (i = 0; i < n; i++) // laço de repetição para repetir as perguntas para todos os jogadores
    {
        printf("\n------------------------ Jogador %d - %s ------------------------\n", i + 1, nomes[i]);
        printf("\n-------------------- PRIMEIRA PERGUNTA --------------------");
        do // laço de repetição para confirmar que o usuário digitará uma resposta correspondente ao que foi solicitado.
        {
            wprintf(L"\n Pergunta 1: Qual é a importância da reciclagem?");
            wprintf(L"\n  1 - Proteger nossa biodiversidade e prezar pelos recursos naturais.");
            wprintf(L"\n  2 - Aumentar a poluição do ar.");
            wprintf(L"\n  3 - Economizar energia elétrica.");
            wprintf(L"\n Digite a sua resposta:");
            scanf("%d", &rr1);
            switch (rr1)
            {
            case 1:
                wprintf(L"\n Correta! Você ganhou 10 pontos!\n");
                pergunta1[i] = 10;
                break;
            case 2:
                wprintf(L"\n Errou! Infelizmente a Resposta está errada! :(");
                wprintf(L"\n Justificativa: A reciclagem é importante para reduzir a quantidade de resíduos sólidos que vão parar em aterros sanitários ou poluem o meio ambiente.");
                wprintf(L"Ela contribui para a conservação de recursos naturais e a minimização do impacto ambiental.\n");
                pergunta1[i] = 0;
                break;
            case 3:
                wprintf(L"\n Errou! Infelizmente a Resposta está errada! :( \n ");
                wprintf(L"\n Justificativa: A reciclagem é importante para reduzir a quantidade de resíduos sólidos que vão parar em aterros sanitários ou poluem o meio ambiente.");
                wprintf(L"Ela contribui para a conservação de recursos naturais e a minimização do impacto ambiental.\n");
                pergunta1[i] = 0;
                break;
            default:
                wprintf(L"\n Resposta inválida! Favor digitar um valor válido!\n ");
            }

        } while ((rr1 != 1) && (rr1 != 2) && (rr1 != 3));
        system("\n PAUSE \n");
        wprintf(L"\n-------------------- SEGUNDA PERGUNTA --------------------");
        do
        {
            wprintf(L"\n Pergunta 2: Qual item deve ser reciclado separadamente?");
            wprintf(L"\n  1 - Vidro");
            wprintf(L"\n  2 - Papel e Papelão");
            wprintf(L"\n  3 - Plástico e metal");
            wprintf(L"\n Digite a sua resposta:");
            scanf("%d", &rr1);
            switch (rr1)
            {
            case 1:
                wprintf(L"\n Correta! Você ganhou 10 pontos!\n");

                pergunta2[i] = 10;
                break;

            case 2:
                wprintf(L"\n Errou! Infelizmente a Resposta está errada! :(");
                wprintf(L"\n Justificativa: O vidro deve ser reciclado separadamente de outros materiais, pois ele é processado de maneira diferente");
                wprintf(L" e não deve ser misturado com papel, papelão, plástico ou metal para evitar contaminação. \n");
                pergunta2[i] = 0;
                break;
            case 3:
                wprintf(L"\n Errou! Infelizmente a Resposta está errada! :( \n ");
                wprintf(L"\n Justificativa: O vidro deve ser reciclado separadamente de outros materiais, pois ele é processado de maneira diferente");
                wprintf(L" e não deve ser misturado com papel, papelão, plástico ou metal para evitar contaminação. \n");
                pergunta2[i] = 0;
                break;
            default:
                wprintf(L"\n Resposta inválida! Favor digitar um valor válido!\n ");
            }
        } while ((rr1 != 1) && (rr1 != 2) && (rr1 != 3));
        system("\n PAUSE \n");
        wprintf(L"\n-------------------- TERCEIRA PERGUNTA --------------------");
        do
        {
            wprintf(L"\n Pergunta 3: Qual é o ciclo de vida de uma lata de alumínio reciclada?");
            wprintf(L"\n  1 - Infinito");
            wprintf(L"\n  2 - Uma vez");
            wprintf(L"\n  3 - Cinco vezes");
            wprintf(L"\n Digite a sua resposta:");
            scanf("%d", &rr1);
            switch (rr1)
            {
            case 1:
                wprintf(L"\n Correta! Você ganhou 10 pontos!\n");
                pergunta3[i] = 10;
                break;
            case 2:
                wprintf(L"\n Errou! Infelizmente a Resposta está errada! :(");
                wprintf(L"\n Justificativa: As latas de alumínio  podem ser recicladas infinitas vezes sem perder a qualidade.\n");
                wprintf(L" Isso economiza recursos naturais e energia. \n");
                pergunta3[i] = 0;
                break;
            case 3:
                wprintf(L"\n Errou! Infelizmente a Resposta está errada! :( \n ");
                wprintf(L"\n Justificativa: As latas de alumínio  podem ser recicladas infinitas vezes sem perder a qualidade.\n");
                wprintf(L" Isso economiza recursos naturais e energia. \n");
                pergunta3[i] = 0;
                break;
            default:
                wprintf(L"\n Resposta inválida! Favor digitar um valor válido!\n ");
            }
        } while ((rr1 != 1) && (rr1 != 2) && (rr1 != 3));
        system("\n PAUSE \n");
        wprintf(L"\n-------------------- QUARTA PERGUNTA --------------------");
        do
        {
            wprintf(L"\n Pergunta 4: O que é compostagem?");
            wprintf(L"\n  1 - Processo de reciclagem de vidro");
            wprintf(L"\n  2 - Processo de decomposição de resíduos orgânicos");
            wprintf(L"\n  3 - Reciclagem de eletrônicos");
            wprintf(L"\n Digite a sua resposta:");
            scanf("%d", &rr1);
            switch (rr1)
            {
            case 1:
                wprintf(L"\n Errou! Infelizmente a Resposta está errada! :( \n ");
                wprintf(L"\n Justificativa:  A compostagem é o processo de decomposição de resíduos orgânicos, como restos de alimentos ");
                wprintf(L"e materiais vegetais, para produzir adubo natural rico em nutrientes para o solo. \n");
                pergunta4[i] = 0;
                break;
            case 2:
                wprintf(L"\n Correta! Você ganhou 10 pontos!\n");
                pontos = pontos + 10;
                pergunta4[i] = 10;
                break;
            case 3:
                wprintf(L"\n Errou! Infelizmente a Resposta está errada! :(");
                wprintf(L"\n Justificativa:  A compostagem é o processo de decomposição de resíduos orgânicos, como restos de alimentos ");
                wprintf(L"e materiais vegetais, para produzir adubo natural rico em nutrientes para o solo. \n");
                pergunta4[i] = 0;
                break;
            default:
                wprintf(L"\n Resposta inválida! Favor digitar um valor válido!\n ");
            }
        } while ((rr1 != 1) && (rr1 != 2) && (rr1 != 3));
        system("\n PAUSE \n");
        wprintf(L"\n--------------- QUINTA PERGUNTA ---------------");
        do
        {
            wprintf(L"\n Pergunta 5: Qual é a principal razão para reciclar papel e papelão?");
            wprintf(L"\n  1 - Diminuir o consumo de petróleo e combustíveis de fontes fósseis ");
            wprintf(L"\n  2 - Redução no desmatamento");
            wprintf(L"\n  3 - Reduzir a poluição do ar");
            wprintf(L"\n Digite a sua resposta:");
            scanf("%d", &rr1);
            switch (rr1)
            {
            case 1:
                wprintf(L"\n Errou! Infelizmente a Resposta está errada! :( \n ");
                wprintf(L"\n Justificativa: A reciclagem de papel e papelão ajudam a reduzir o desmatamento, uma vez que a produção de papel a partir de fibras recicladas requer menos recursos naturais");
                wprintf(L" do que a produção a partir de matéria-prima virgem. Isso contribui para a conservação das florestas.\n");
                pergunta5[i] = 0;
                break;
            case 2:
                wprintf(L"\n Correta! Você ganhou 10 pontos! \n");
                pergunta5[i] = 10;
                break;
            case 3:
                wprintf(L"\n Errou! Infelizmente a Resposta está errada! :(");
                wprintf(L"\n Justificativa: A reciclagem de papel e papelão ajudam a reduzir o desmatamento, uma vez que a produção de papel a partir de fibras recicladas requer menos recursos naturais");
                wprintf(L" do que a produção a partir de matéria-prima virgem. Isso contribui para a conservação das florestas.\n");
                pergunta5[i] = 0;
                break;
            default:
                wprintf(L"\n Resposta inválida! Favor digitar um valor válido!\n ");
            }
        } while ((rr1 != 1) && (rr1 != 2) && (rr1 != 3));

        system("\n PAUSE \n");
        acertosporjogador[i] = pergunta1[i] + pergunta2[i] + pergunta3[i] + pergunta4[i] + pergunta5[i];

        if (acertosporjogador[i] == 50)
        {
            wprintf(L"\nVocê acertou todas as questões!Parabens, você tem um grande conhecimento em separação de resíduos!\n");
            printf("       ___________      \n");
            printf("      '._==_==_=_.'     \n");
            printf("      .-\\:      /-.    \n");
            printf("     | (|:.     |) |    \n");
            printf("      '-|:.     |-'     \n");
            printf("        \\::.    /      \n");
            printf("         '::. .'        \n");
            printf("           ) (          \n");
            printf("         _.' '._        \n");
            printf("        '-------'       \n\n");
            wprintf(L"\n\t%d Pontos\n\n", acertosporjogador[i]);
        }
        else if ((acertosporjogador[i] == 40) || (acertosporjogador[i] == 30))
        {
            wprintf(L"\nParabens! você teve um bom desempenho, mas ainda pode aprimorar um pouco mais!");
            wprintf(L"\n%d Pontos\n\n", acertosporjogador[i]);
        }
        else if (((acertosporjogador[i] == 20) || (acertosporjogador[i] == 10)))
        {
            wprintf(L"\nParabens por participar! Pesquisando mais sobre a separação de resíduos, logo estará dominado o assunto.");
            wprintf(L"\n%d Pontos\n\n", acertosporjogador[i]);
        }
        else if (acertosporjogador[i] == 0)
        {
            wprintf(L"\nParabens por participar! Notamos que está com um pouco de dificuldade, releia as justificativas das resposta e amplie seu conhecimento");
            wprintf(L"\n%d Pontos\n\n", acertosporjogador[i]);
        }
    }

    int somap1 = 0, somap2 = 0, somap3 = 0, somap4 = 0, somap5 = 0;
    wprintf(L"--------------- Relatório Final ---------------\n\n");
    wprintf(L"---------- informações por jogador ----------");
    for (i = 0; i < n; i++)
    {
        wprintf(L"\nJogador %d - %d%% de aproveitamento", i + 1,(acertosporjogador[i] / 5) * 10);
    }
    wprintf(L"\n---------- informações por pergunta ----------");
    for (i = 0; i < n; i++)
    {
        somap1 = pergunta1[i] + somap1;
        somap2 = pergunta2[i] + somap2;
        somap3 = pergunta3[i] + somap3;
        somap4 = pergunta4[i] + somap4;
        somap5 = pergunta5[i] + somap5;
    }
    
    printf("\nPergunta 1 - %.1f%% dos jogadores acertaram", (somap1 / (float)n) * 10);
    printf("\nPergunta 2 - %.1f%% dos jogadores acertaram", (somap2 / (float)n) * 10);
    printf("\nPergunta 3 - %.1f%% dos jogadores acertaram", (somap3 / (float)n) * 10);
    printf("\nPergunta 4 - %.1f%% dos jogadores acertaram", (somap4 / (float)n) * 10);
    printf("\nPergunta 5 - %.1f%% dos jogadores acertaram", (somap5 / (float)n) * 10);

    
}