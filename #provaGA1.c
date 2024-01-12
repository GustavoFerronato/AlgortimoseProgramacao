#include <stdio.h>

int main()
{

    int codProd, qtdProd, codReg, i, refrigS = 0, refrigN = 0;
    float vUnd, desc, undFrete, freteFinal = 0, descFinal = 0, calcRefrig, freteFF;
    char refrig, idRegiao[20];

    for (i = 1; i <= 2; i++)
    {
        printf("\n--------------- Informacoes do frete %d ---------------",i);
        printf("\nQual o codigo do produto? ");
        scanf("%d", &codProd);
        printf("Qual o valor unitario do produto? ");
        scanf("%f", &vUnd);
        printf("Qual a quantidade de produtos a serem transpotados? ");
        scanf("%d", &qtdProd);
        printf("Qual o codigo da regiao de destino? ");
        scanf("%d", &codReg);
        printf("Produto necessita de refrigeracao?\n s para sim - n para nao: ");
        fflush(stdin);
        scanf("%c", &refrig);

        if (qtdProd >= 500)
        {
            desc = 0.12;
        }
        else
            desc = 0.06;

        switch (codReg)
        {
        case 1:
            undFrete = 0.6;
            idRegiao[20] = "Nordeste"; 

                break;
        case 2:
            undFrete = 0.5;
            idRegiao[20] = "Norte";

                break;
        case 3:
            undFrete = 0.4;
            idRegiao[20] = "Centro-Oeste";

                break;
        case 4:
            undFrete = 0.3;
            idRegiao[20] = "Sudeste";

                break;
        case 5:
            undFrete = 0.2;
            idRegiao[20] = "Sul";

                break;

        default:
            break;
        }

        printf("--------------- Resumo do frete %d ---------------",i);
        freteFinal = qtdProd * undFrete;
        printf("\nO frete vai para a Regiao %s, totalizando R$ %.2f",idRegiao[20], freteFinal);
        descFinal = freteFinal*desc;
        printf("\nPelo total de pecas trasportadas, voce recebera um desconto de R$ %.2f", descFinal);
        switch (refrig)
        {
        case 's':
            refrigS++;
            calcRefrig = (freteFinal - descFinal)*0.25;
            printf("\nSua carga tera um acrescimo de R$ %.2f referente a refrigeracao", calcRefrig);
            break;

            case 'n':
            printf("\nNao se aplica refrigeracao");
            refrigN++;

            break;

        
        default:
            break;
        }
        /*if (refrig == "s")
        {
            refrigS++;
            calcRefrig = (freteFinal - descFinal)*0.25;
            printf("\nSua carga tera um acrecismo de R$ %.2f referente a refrigeração", calcRefrig);
        }else 
        {
            printf("\nNao se aplica refrigeracao");
            refrigN++;
        }*/
        
        freteFF = freteFinal - descFinal + calcRefrig;
        printf("\nO valor final do frete sera de R$ %.2f", freteFF);

        

    
    }
    printf("\n\n -------------- Informacoes dos fretes -------------- ",i);
    printf("\n%d cargas necessitam de frete                ", refrigS);
    printf("\n%d cargas nao necessitam de frete             ", refrigN);
    
}