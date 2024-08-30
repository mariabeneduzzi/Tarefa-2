#include<stdio.h>
#include<stdlib.h>

int main(){
    int opt1;
    int opt2;
    int qtd;
    int valor_compra;
    int valor_caixa;

    valor_caixa = 0;

    while(1){
        printf("Deseja iniciar compra?: \n\n");
        printf("1 - sim\n");
        printf("2 - fechar caixa\n\n");
        printf("Opção: ");

        scanf("%d", &opt1);

        if(opt1 == 1){ // Opção: sim
            valor_compra = 0;
            while(1){
                printf("\n\n");
                printf("1 - Produto 1\t R$ 10,00\n");
                printf("2 - Produto 2\t R$ 12,00\n");
                printf("3 - Produto 3\t R$ 13,00\n");
                printf("4 - Produto 4\t R$ 14,00\n");
                printf("5 - Produto 5\t R$ 15,00\n");
                printf("6 - Produto 6\t R$ 16,00\n");
                printf("7 - Produto 7\t R$ 17,00\n");
                printf("97 - Fechar compra\n");
                printf("98 - Cancelar compra\n");

                scanf("%d", &opt2);

                if (opt2 == 1){
                    printf("\n\nQuantidade do produto 1: ");
                    scanf("%d", &qtd);
                    valor_compra = valor_compra + qtd*10;
                    printf("\n\nValor parcial: R$ %d,00", valor_compra);
                }
                else{
                    if(opt2 == 98){
                        valor_compra = 0;
                        printf("********** COMPRA CANCELADA ***********\n\n\n");
                        break;
                    }
                    else{
                        if(opt2 == 97){
                            printf("\nValor a pagar: R$ %d,00", valor_compra);
                            valor_caixa = valor_caixa + valor_compra;
                            break;
                        }
                        else{
                            if(opt2==99){

                            }
                        }
                    }
                }
            }
        }
        else {
            if(opt1 == 2){ // Opção: fechar caixa
                printf("\n\n VALOR DO CAIXA: R$ %d,00\n\n", valor_caixa);
                valor_caixa = 0;
                printf("\n\n********* CAIXA ZERADO *********\n\n");
            }
            else{ // opção inválida
                printf("***** OPÇÃO INVÁLIDA *****\n\n\n");
            }

        }
    }
}
