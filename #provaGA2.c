#include <stdio.h>

int main()
{
    int cod, qtd_prod;
    float valor_un, total = 0, desc = 0, descf, frete, conts = 0, contn = 0, cont = 1;
    char cliente[50], entrega;

    do
    {

        printf("\n\nQual o codigo do produto? ");
        scanf("%i", &cod);
        printf("Qual o nome do cliente? ");
        fflush(stdin);
        fgets(cliente, 50, stdin);
        printf("Qual o valor unitario do produto? ");
        scanf("%f", &valor_un);
        printf("Qual a quantidade de itens comprados? ");
        scanf("%i", &qtd_prod);
        printf("Entrega para dentro do Rio grande do sul?");
        printf("\n S para SIM e N para Nao: ");
        fflush(stdin);
        scanf("%s", &entrega);
        total = valor_un * qtd_prod;
        printf("\n====================== resumo do pedido %.f ======================", cont);
        printf("\n\nO valor total do seu pedido foi de %.2f reais", total);
        if (total <= 200)
        {
            desc = 0;
            descf = total * desc;
            printf("\ndesconto total do pedido: %.2f reais", descf);
        }
        else if ((total > 200) && (total <= 500))

        {
            desc = 0.15;
            descf = total * desc;
            printf("\ndesconto total do pedido: %.2f reais", descf);
        }
        else if (total > 500)

        {
            desc = 0.20;
            descf = total * desc;
            printf("\ndesconto total do pedido: %.2f reais", descf);
        }
        else
            ;
        printf("\nValor total da compra com desconto: %.2f reais", total - descf);

        switch (entrega)
        {
        case 's':
            printf("\n\n\tFrete Gratis");
            conts = conts + 1;
            frete = 0;
            break;
        case 'n':
            printf("\n\n\tFrete tem um custo de 50.00 reais");
            contn = contn + 1;
            frete = 50;
            break;
        case 'S':
            printf("\n\n\tFrete Gratis");
            conts = conts + 1;
            frete = 0;
            break;
        case 'N':
            printf("\n\n\tFrete tem um custo de 50.00 reais");
            contn = contn + 1;
            frete = 50;
            break;

        default:
            break;
        }
        printf("\n\nTotal a pagar \t\t %.2f reais", total - descf + frete);
        printf("\n(Produto + frete + desconto)");

        printf("\n\n=================================================================");
        cont = (cont + 1);
    } while (cont != 11);
    printf("\n==================== Resumo dos Fretes ========================== ");
    printf("\n\n%.f fretes sao para dentro do Rio Grande do sul totalizando %.2f%%", conts, (conts / 10) * 100);
    printf("\n%.f fretes sao para fora do Rio Grande do sul totalizando %.2f%%\n\n", contn, (contn / 10) * 100);
}