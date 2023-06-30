/* PROGRAMA NÃO FINALIZADO!! 
O programa é o estudo referente a estruturas em C.
Foi feito o struct para administrar uma feira */

#include <stdio.h>
#include <string.h>

#define MAX_ITENS 1000

//o struct é passado por referência, pois é muito 'pesado'

typedef struct {
    char descricao[21];
    double preco_kg;
    double peso_total;
} Item;

typedef struct {
    char nome_fantasia[41];
    Item estoque[MAX_ITENS];
    int n_itens;
    double caixa;
} Feira;

double valor_total_item (Item item);
void adiciona_item (Feira *feira, Item item);
void imprime_feira(Feira *feira);
void vende_item(Feira *feira, int id, double kg); //id é o identificador da fruta
void modifica_preco(Feira *feira, int id, double novo_preco);
double valor_total_estoque(Feira *feira);

double valor_total_item (Item item)
{
    return item.preco_kg * item.peso_total;
}

void adiciona_item (Feira *feira, Item item)
{
    feira->estoque[feira->n_itens] = item; //(*feira).estoque[(*feira).n_itens] = item;
    feira->n_itens++;
}

void imprime_feira(Feira *feira)
{

    for (int i = 0; i < feira->n_itens; i++) 
        printf("%-25s %8.2lf %8.2lf\n",
            feira->estoque[i].descricao,
            feira->estoque[i].peso_total,
            feira->estoque[i].preco_kg);
    
    printf("%s\n", feira->nome_fantasia); //o -25 é para alinhamento
    printf("Caixa: R$ %.2f\n", feira->caixa);
}

void vende_item (Feira *feira, int id, double kg)
{
    feira->estoque[id].peso_total = kg; 
    feira->caixa += kg * feira->estoque[id].preco_kg;
}

void modifica_preco(Feira *feira, int id, double novo_preco)
{
    feira->estoque[id].preco_kg = novo_preco;
}

double valor_total_estoque(Feira *feira) 
{
    double valor = 0;
    for (int i = 0; i < feira->n_itens; i++) {
        valor += valor_total_item(feira->estoque[i]);
    }
    return valor;
}

int main()
{
    Feira feira;
    strcpy(feira.nome_fantasia,"Feira do IFSC");
    feira.n_itens = 0;
    feira.caixa = 100.0;

    Item pera = {"Pera nacional", 7.50, 100.0};
    Item banana = {"Banana caturra", 3.00, 200.0};
    Item uva = {"Uva Italia", 12.50, 50.0};

    printf("%.2lf\n", valor_total_item(pera));

    adiciona_item(&feira, pera);
    adiciona_item(&feira, banana);
    adiciona_item(&feira, uva);

    imprime_feira(&feira);

    printf("\nVendemos 2kg de pera\n\n");
    vende_item(&feira, 0, 2.0);

    imprime_feira(&feira);

    printf("\nValor total do estoque: %.2lf\n",
            valor_total_estoque(&feira));

    printf("\n\nPromoção de Uva!\n\n");
    modifica_preco(&feira, 2, 10.99);

    imprime_feira(&feira);

    return 0;
}
