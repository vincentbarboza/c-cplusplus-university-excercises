#include <iostream>

using namespace std;

void exibir(int tamVetor, int lista[]){
    cout << "Estes sao os elementos da sua lista "<<endl;
    for (int i = 0; i < tamVetor; i++) {
    cout<<*(lista + i)<<" ";
    }
}

int buscar(int valBuscado, int tamVetor, int lista[]) {

    int i = 0;
    while(i <= tamVetor) {
        if(lista[i++] == valBuscado) {
            return i;
        }

   }

   return -1;
}

void sair(){
    cout << "ENCERRANDO PROGRAMA..." << endl;
    cout << "\n";
}





int main() {
    int i, opcao, valBuscado, valorInserido, valRemovido, tamVetor, valPreenchido, valEncontrado;
    valPreenchido = 0;
    opcao = 0;
    cout<<"Digite a quantidade de posicoes da sua lista: ";
    cin>>tamVetor;
    int *lista = new int [tamVetor];

    for (int i = 0; i < tamVetor; i++) {
        cout<<"Insira o "<<i + 1<<"o. numero: ";
        cin>>valorInserido;
        *(lista + i) = valorInserido;
        valPreenchido = valPreenchido + 1;
    }
    cout <<"\n\n\n";
    system("pause");
    system("cls");
    cout<<"Sua lista com "<<tamVetor<<" posicoes foi criada com sucesso"<<endl;
    cout<<"\n";
    exibir(tamVetor, lista);
    cout<<endl;
    cout <<"\n\n\n";
    system("pause");
    system("cls");





    do{

        cout << "1. BUSCAR ELEMENTO DA LISTA " << endl;
        cout << "2. ADICIONAR ELEMENTO NA LISTA" << endl;
        cout << "3. REMOVER ELEMENTO DA LISTA" << endl;
        cout << "4. MOSTRAR ELEMENTOS DA LISTA" << endl;
        cout << "5. SAIR" << endl;
        cin >> opcao;
        system("cls");

        switch(opcao){
            case 1:
                cout << "Insira o elemento a ser buscado: ";
                cin>>valBuscado;
                valEncontrado = buscar(valBuscado, tamVetor, lista);
                if(buscar(valBuscado, tamVetor, lista) == -1) {
                    cout<<"Elemento nao encontrado";

                }
                else {
                    cout<<"O elemento "<<valBuscado<<" esta na "<<valEncontrado<<"o. posicao do vetor";
                }
                cout <<"\n\n\n";
                system("pause");
                system("cls");
                break;


            case 2:
                exibir(tamVetor, lista);
                cout <<"\n";
                cout<<"\nDigite o elemento a ser inserido na lista: ";
                cin>>valorInserido;
                if(valPreenchido < tamVetor) {
                    if(buscar(valorInserido, tamVetor, lista) == -1) {
                        lista[valPreenchido ] = valorInserido;
                        valPreenchido = valPreenchido + 1;
                        exibir(tamVetor, lista);

                    }

                    else {
                        cout<<"Elemento ja existe!"<<endl;
                    }
                }
                else {
                    cout<<"Nao ha mais espaco livre na lista";
                }
                cout << "\n\n\n";
                system("pause");
                system("cls");
                break;


            case 3:
                exibir(tamVetor, lista);
                cout<<"\nDigite o elemento a ser removido na lista: ";
                cin>>valRemovido;
                cout <<"\n";
                int indice, valorRecuperado;
                if(valPreenchido != 0) {
                indice = buscar(valRemovido, tamVetor, lista);
                    if(indice != -1) {
                        for(int i = indice - 1; i < valPreenchido; i++) {
                            lista[i] = lista[i + 1];

                        }
                    valPreenchido = valPreenchido - 1;
                    exibir(tamVetor, lista);
                    }
                    else {
                        cout<<"O elemento "<<valRemovido<<" nao existe nesta lista"<<endl;
                        cout<<"Tente de novo!"<<endl;
                    }

                }
                else {
                    cout<<"Underflow"<<endl;
                }
                cout<< "\n\n\n";
                system("pause");
                system("cls");
                break;


            case 4:
                exibir(tamVetor, lista);
                cout <<"\n\n\n";
                system("pause");
                system("cls");
                break;


            case 5: sair();
                break;
                default: cout << "Opção inválida!!" << endl;
        }
    }
    while(opcao != 5);
    return 0;
}


