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

bool remove_elemento_lista(ListaE &lista, Produto *prod, int codigo){
    prod=lista.inicio;
    Produto *aux;
    while(prod->proximo->Codigo!=codigo && prod->proximo!=NULL){
        if(prod->proximo->Codigo==codigo){
            aux = prod->proximo->proximo;
            delete prod->proximo;
            prod->proximo = aux;
        }
        prod=prod->proximo;
    }
    return true;
}

float consulta_elemento_lista(ListaE &lista, Produto *prod, int codigo){
    prod=lista.inicio;
    while(prod!=NULL){
        if(prod->Codigo==codigo)
            return prod->Preco;
        prod=prod->proximo;
    }
    return 0.0;
}
