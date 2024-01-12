#include <stdio.h>
#include <locale>
int main(void)
/*Projeto Algoritmos e programação
Integrantes: Daniel, Gustavo, Anderson
como funciona: jogo de perguntas e respostas sobre como funciona a reciclagem.
*/

{
    int manual, rr1, pontos = 0;
    // manual = variavel que controla se o usuário quer saber as regras ou se quer seguir direto para a jogatina
    // rr1 = varial que corresponde as respostas das perguntas apresentadas.
    // pontos = variavel que controla a pontuação do jogador.
    setlocale(LC_ALL, "Portuguese_Brazil");
    wprintf(L"\n BEM VINDO AO PROJETO MANUAL DA RECICLAGEM!");
    wprintf(L" \n VAMOS TESTAR O SEU CONHECIMENTO?");
    
    do // laço de repetição para ver se o usuario quer entender como funciona o jogo ou jogar imediatamente.
    {
        wprintf(L" \n 1- Sim, quero ser desafiado! \n 2- Ainda não, quero saber como funciona! \n");
        scanf("%d", &manual);
        if (manual == 1)
        {
            wprintf(L"\n Ok, vamos iniciar nosso Jogo!"); // quem escolhe essa opção ja sabe previamente como funciona o jogo e ja parte para a ação
        }
        else if (manual == 2)
        {
            wprintf(L"\n O jogo funciona da seguinte forma:"); // explicação de como são as regras do jogo proposto.
            wprintf(L"\n Você terá que acertar para poder pontuar!");
            wprintf(L"\n Caso acerte, ganha pontos!");
            wprintf(L"\n Caso erre, perderá pontos!");
            wprintf(L"\n No final de tudo, compare sua pontuação com seus amigos e descubra quem sabe mais!");
        }
        else
        {
            wprintf(L"Opção não encontrada, favor regite!");
        }
    } while ((manual != 1) && (manual != 2));
    system("\n PAUSE \n");
    wprintf(L"\n PRIMEIRA PERGUNTA!!");
    do // laço de repetição para confirmar que o usuário digitará uma resposta correspondente ao que foi solicitado.
    {
        wprintf(L"\n Pergunta 1: Qual é a importância da reciclagem?");
        wprintf(L"\n  1 - Reduzir a quantidade de resíduos");
        wprintf(L"\n  2 - Aumentar a poluição do ar");
        wprintf(L"\n  3 - Economizar eletricidade");
        wprintf(L"\n Digite a sua resposta:");
        scanf("%d", &rr1);
        switch (rr1)
        {
        case 1:
            wprintf(L"\n Correta! Você ganhou 10 pontos!");
            pontos = pontos + 10;
            wprintf(L"\n Justificativa: A reciclagem é importante para reduzir a quantidade de resíduos sólidos que vão parar em aterros sanitários ou poluem o meio ambiente.");
            wprintf(L"Ela contribui para a conservação de recursos naturais e a minimização do impacto ambiental.");
            break;
        case 2:
            wprintf(L"\n Errou! Infelizmente a Resposta está errada! :(");
            wprintf(L"\n Perdeu 10 pontos");
            pontos = pontos - 10;
            break;
        case 3:
            wprintf(L"\n Errou! Infelizmente a Resposta está errada! :( \n ");
            wprintf(L"\n Perdeu 10 pontos\n ");
            pontos = pontos - 10;
            break;
        default:
            wprintf(L"\n Resposta inválida! Favor digitar um valor válido!\n ");
        }

    } while ((rr1 != 1) && (rr1 != 2) && (rr1 != 3));
    system("\n PAUSE \n");
    wprintf(L"\n SEGUNDA PERGUNTA!!");
    do
    {
        wprintf(L"\n Pergunta 2: Qual item deve ser reciclado separadamente?");
        wprintf(L"\n  1 - Vidro");
        wprintf(L"\n  2 - Papel e Papelão");
        wprintf(L"\n  3 - Plástico e metal juntos");
        wprintf(L"\n Digite a sua resposta:");
        scanf("%d", &rr1);
        switch (rr1)
        {
        case 1:
            wprintf(L"\n Correta! Você ganhou 10 pontos!");
            pontos = pontos + 10;
            wprintf(L"\n Justificativa: O vidro deve ser reciclado separadamente de outros materiais, pois ele é processado de maneira diferente");
            wprintf(L" e não deve ser misturado com papel, papelão, plástico ou metal para evitar contaminação. \n");
            break;
        case 2:
            wprintf(L"\n Errou! Infelizmente a Resposta está errada! :(");
            wprintf(L"\n Perdeu 10 pontos");
            pontos = pontos - 10;
            break;
        case 3:
            wprintf(L"\n Errou! Infelizmente a Resposta está errada! :( \n ");
            wprintf(L"\n Perdeu 10 pontos\n ");
            pontos = pontos - 10;
            break;
        default:
            wprintf(L"\n Resposta inválida! Favor digitar um valor válido!\n ");
        }
    } while ((rr1 != 1) && (rr1 != 2) && (rr1 != 3));
    system("\n PAUSE \n");
    wprintf(L"\n TERCEIRA PERGUNTA!!");
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
            wprintf(L"\n Correta! Você ganhou 10 pontos!");
            pontos = pontos + 10;
            wprintf(L"\n Justificativa: As latas de alumínio recicladas podem ser recicladas um número infinito de");
            wprintf(L" vezes sem perder a qualidade. Isso economiza recursos naturais e energia. \n");
            break;
        case 2:
            wprintf(L"\n Errou! Infelizmente a Resposta está errada! :(");
            wprintf(L"\n Perdeu 10 pontos");
            pontos = pontos - 10;
            break;
        case 3:
            wprintf(L"\n Errou! Infelizmente a Resposta está errada! :( \n ");
            wprintf(L"\n Perdeu 10 pontos\n ");
            pontos = pontos - 10;
            break;
        default:
            wprintf(L"\n Resposta inválida! Favor digitar um valor válido!\n ");
        }
    } while ((rr1 != 1) && (rr1 != 2) && (rr1 != 3));
    system("\n PAUSE \n");
    wprintf(L"\n QUARTA PERGUNTA!!");
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
            wprintf(L"\n Perdeu 10 pontos\n ");
            pontos = pontos - 10;
            break;
        case 2:
            wprintf(L"\n Correta! Você ganhou 10 pontos!");
            pontos = pontos + 10;
            wprintf(L"\n Justificativa:  A compostagem é o processo de decomposição de resíduos orgânicos, como restos de alimentos ");
            wprintf(L"e materiais vegetais, para produzir adubo natural rico em nutrientes para o solo. \n");
            break;
        case 3:
            wprintf(L"\n Errou! Infelizmente a Resposta está errada! :(");
            wprintf(L"\n Perdeu 10 pontos");
            pontos = pontos - 10;
            break;
        default:
            wprintf(L"\n Resposta inválida! Favor digitar um valor válido!\n ");
        }
    } while ((rr1 != 1) && (rr1 != 2) && (rr1 != 3));
    system("\n PAUSE \n");
    wprintf(L"\n QUiNTA PERGUNTA!!");
    do
    {
        wprintf(L"\n Pergunta 5: Qual é a principal razão para reciclar papel e papelão?");
        wprintf(L"\n  1 - Reduzir o desperdício de tinta");
        wprintf(L"\n  2 - Economizar árvores");
        wprintf(L"\n  3 - Reduzir a poluição do ar");
        wprintf(L"\n Digite a sua resposta:");
        scanf("%d", &rr1);
        switch (rr1)
        {
        case 1:
            wprintf(L"\n Errou! Infelizmente a Resposta está errada! :( \n ");
            wprintf(L"\n Perdeu 10 pontos\n ");
            pontos = pontos - 10;
            break;
        case 2:
            wprintf(L"\n Correta! Você ganhou 10 pontos! \n");
            pontos = pontos + 10;
            wprintf(L"\n Justificativa: A reciclagem de papel e papelão ajuda a economizar árvores, uma vez que a produção de papel a partir de fibras recicladas requer menos recursos naturais");
            wprintf(L" do que a produção a partir de matéria-prima virgem. Isso contribui para a conservação das florestas.\n");
            break;
        case 3:
            wprintf(L"\n Errou! Infelizmente a Resposta está errada! :(");
            wprintf(L"\n Perdeu 10 pontos");
            pontos = pontos - 10;
            break;
        default:
            wprintf(L"\n Resposta inválida! Favor digitar um valor válido!\n ");
        }
    } while ((rr1 != 1) && (rr1 != 2) && (rr1 != 3));
    system("\n PAUSE \n");
    wprintf(L"\n Parabéns! Você completou o nosso desafio!");
    wprintf(L"\n Agora vamos descobrir a sua pontuação!");
    system("\n PAUSE \n");
    if (pontos <= 10)
    {
        wprintf(L"\n Poxa, que pena! \n Você ficou com %d pontos!", pontos);
        wprintf(L"\n Mas não desanime! Isso é apenas um sinal de que você deve buscar conhecer mais sobre como devemos lidar com nosso próprio lixo! \n ");
        wprintf(L"\n Tente novamente assim que se sentir confiante para obter uma pontuação melhor!! \n");
    }
    else if ((pontos >= 20) && (pontos <= 30))
    {
        wprintf(L"\n Você ficou com %d pontos! \n", pontos);
        wprintf(L"\n Seu desempenho foi satisfatório \n");
        wprintf(L"\n Você demonstrou ter um conhecimento médio sobre nosso lixo, considere-se desafiado a tentar novamente e superar sua pontuação anterior! \n");
    }
    else
    {
        wprintf(L"\n Excelente! Você ficou com %d pontos! \n ", pontos);
        wprintf(L"\n Você demonstrou um desempenho perfeito! Acertando todas nossas perguntas! \n");
        wprintf(L"\n Agora sua missão é passar esse conhecimento a outras pessoas e também buscar mais aprendizado, porque conhecimento nunca é demais!");
    }
    return 0;
    system;
}
