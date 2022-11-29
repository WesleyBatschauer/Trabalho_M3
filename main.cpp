#include <iostream>
using namespace std;
#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include "produtolib.h"


int main() {
    setlocale(LC_ALL,"Portuguese");
    ListaE lista;
    Produto *prod;
    int operacao, codigo;
    inicializa_lista(lista);

    do {
        system("cls");
        prod=lista.inicio;
        while(prod!=NULL){
            cout<<prod->Codigo<<endl;
            cout<<prod->Nome<<endl;
            cout<<prod->Preco<<endl;
            cout<<endl;
            prod=prod->proximo;
        }
      cout<< "\n ________________________________________";
      cout<< "\n|\t\t\t\t\t|";
      cout << "\n|\tSelecione uma operação:\t\t|";
      cout<< "\n|\t1 - Inserir item\t\t|";
      cout<< "\n|\t2 - Remover item\t\t|";
      cout<< "\n|\t3 - Pesquisar\t\t\t|";
      cout<< "\n|\t4 - Encerrar\t\t\t|";
      cout<< "\n|_______________________________________|\n";
      cin >> operacao;

      //ESCOLHE A OPERAÇÃO A SER REALIZADA
    switch(operacao) {
      //OPERAÇÃO DE INSERÇÃO-----------------------------------------------------------------------
      case 1:
        for(int i=0;i<2;i++){
            cadastra_elemento_lista(lista,prod);
            insere_elemento_lista(lista,prod);
        }
        break;
        //OPERAÇÃO DE REMOÇÃO----------------------------------------------------------------------
        case 2:
            cout<<"Digite o código do produto a ser removido: ";
            cin>>codigo;
            remove_elemento_lista(lista,prod,codigo);
        break;
        //OPERAÇÃO DE PESQUISA---------------------------------------------------------------------
        case 3:
            cout<<"Digite o código do produto a ser pesquisado: ";
            cin>>codigo;
            cout<<consulta_elemento_lista(lista,prod,codigo)<<endl;
            system("pause");
        break;
        //OPERAÇÃO DE ENCERRAR--------------------------------------------------------------------
        /*case 4:
        break;*/
    }
    }
    while(operacao != 4);
}
