#define _produtolib_

//estrutura do produto
struct Produto{
    int Codigo;
    string Nome;
    float Preco;
    Produto *proximo;
};

//estrutura da lista
struct ListaE{
    Produto * inicio;
};

//inicializa lista
bool inicializa_lista (ListaE &lista){
    lista.inicio = NULL;
    return true;
}

bool cadastra_elemento_lista(ListaE &lista, Produto *&prod){
    prod=new Produto;
    cout<<"Digite o código do produto: ";
    cin>>prod->Codigo;
    cout<<"Digite o nome do produto: ";
    cin>>prod->Nome;
    cout<<"Digite o preço do produto: ";
    cin>>prod->Preco;
    prod->proximo=NULL;

    return true;
}

//Protótipo da inserção
bool insere_elemento_lista(ListaE &lista, Produto *prod){

    prod->proximo=lista.inicio;
    lista.inicio=prod;
    return true;
}

int busca_elemento_lista(ListaE &lista, Produto *prod, int busca){
    while(prod!=NULL){
        if(prod->Codigo==busca)
            return prod->Preco;
        prod=prod->proximo;
    }
    return 0.0;
}

float consulta_elemento_lista(ListaE &lista, Produto *prod, int busca){
    while(prod!=NULL){
        if(prod->Codigo==busca)
            return prod->Preco;
        prod=prod->proximo;
    }
    return 0.0;
}
