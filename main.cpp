#include <iostream>
using namespace std;
#include <locale.h>
#include <stdio.h>
#include <string.h>
#include "produtolib.h"


int main() {
    setlocale(LC_ALL,"Portuguese");
    ListaE lista;
    Produto *prod;
    int operacao;
    inicializa_lista(lista);

    do {
      //system("cls");
    //prod=lista.inicio;
    //while(prod->proximo!=NULL){
        cout<<prod->Codigo<<endl;
        cout<<prod->Nome<<endl;
        cout<<prod->Preco<<endl;
        cout<<endl;
        //prod=prod->proximo;
    //}
      cout<< "\n ________________________________________";
      cout<< "\n|\t\t\t\t\t|";
      cout << "\n|\tSelecione uma opera豫o:\t\t|";
      cout<< "\n|\t1 - Inserir item\t\t|";
      cout<< "\n|\t2 - Remover item\t\t|";
      cout<< "\n|\t3 - Pesquisar\t\t\t|";
      cout<< "\n|\t4 - Encerrar\t\t\t|";
      cout<< "\n|_______________________________________|\n";
      cin >> operacao;

      //ESCOLHE A OPERA플O A SER REALIZADA
    switch(operacao) {
      //OPERA플O DE INSER플O-----------------------------------------------------------------------
      case 1:
        for(int i=0;i<2;i++){
            cadastra_elemento_lista(lista,prod);
            insere_elemento_lista(lista,prod);
        }
        break;
        //OPERA플O DE REMO플O----------------------------------------------------------------------
        /*case 2:

        break;
        //OPERA플O DE PESQUISA---------------------------------------------------------------------
        case 3:

        break;
        //OPERA플O DE ENCERRAR--------------------------------------------------------------------
        case 4:
        break;*/
    }
    }
    while(operacao != 4);
}
