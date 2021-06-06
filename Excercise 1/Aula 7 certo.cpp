#include <iostream>

using namespace std;

void exibir(int tamVetor, int pilha[]){
    //cout << "Estes sao os elementos da sua pilha. "<<endl;
    for (int i = 0; i < tamVetor; i++) {
        cout<<*(pilha + i)<<" ";
    }
}

int pilhaVazia(int pilha[], int topo) {
    if(topo == 0) {
        return 0;
    }
    else {
        return -1;
    }
}

void sair(){
    cout << "ENCERRANDO PROGRAMA..." << endl;
    cout << "\n";
}

int main () {
    int opcao, valInserido, tamVetor, topo;
    topo = 0;
    opcao = 0;
    cout<<"Digite a quantidade de posicoes da sua pilha: ";
    cin>>tamVetor;
    int *pilha = new int [tamVetor];

    for (int i = 0; i < tamVetor; i++) {
        cout<<"Insira o "<<i + 1<<"o. numero: ";
        cin>>valInserido;
        *(pilha + i) = valInserido;
        topo++;
    }
    cout <<"\n\n\n";
    system("cls");
    cout<<"Sua pilha com "<<tamVetor<<" posicoes foi criada com sucesso"<<endl;
    cout<<"\n";
    cout <<"\n\n\n";
    system("pause");
    system("cls");

    do {
        cout<<"1. INSIRA UM ELEMENTO NA PILHA"<<endl;
        cout<<"2. REMOVA UM ELEMENTONA PILHA"<<endl;
        cout<<"3. MOSTRAR ELEMENTOS DA PILHA"<<endl;
        cout<<"4. SAIR"<<endl;
        cin>>opcao;
        cout<< "\n\n\n";
        system("cls");



        switch(opcao){
            case 1:
                if(topo < tamVetor){
                    cout<<"Estes sao os elementos da sua pilha: "<<endl;
                    exibir(tamVetor, pilha);
                    cout <<"\n";
                    cout<<"\nDigite o elemento a ser inserido na lista: ";
                    cin>>valInserido;
                    pilha[topo] = valInserido;
                    topo = topo + 1;
                    cout<<"O elemento "<<valInserido<<" foi adicionado com sucesso.";

                }
                else {
                    cout<<"Nao ha mais espacos na pilha."<<endl;
                }
                cout<< "\n\n\n";
                system("pause");
                system("cls");
                break;

            case 2:
                if(pilhaVazia(pilha, topo) == 0){
                    cout<<"A pilha esta vazia. Insira algum elemento."<<endl;
                }
                else {
                    topo = topo - 1;
                    pilha[topo] = pilha[topo + 1];
                    cout<<"O ultimo elemento foi removido com sucesso."<<endl;
                    cout<<"\n";
                    cout<<"Estes sao os elementos da sua pilha agora: "<<endl;
                    exibir(tamVetor, pilha);
                }
                cout<< "\n\n\n";
                system("pause");
                system("cls");
                break;

            case 3:
                cout<<"Estes sao os elementos da sua pilha: "<<endl;
                exibir(tamVetor, pilha);
                cout <<"\n\n\n";
                system("pause");
                system("cls");
                break;

            case 4: sair();
                break;
                default: cout << "Opcao invalida!!" << endl;

        }

    }
while(opcao != 4);
return 0;
}
