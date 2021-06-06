#include<iostream>

using namespace std;

int main() {
    int i, tamNum, valores;
    int *vetor = new int[tamNum];

    cout<<"Digite a quantidade de numeros que quer inserir: ";
    cin>>tamNum;
    system("cls");

    for (int i = 0; i < tamNum; i++) {
        cout<<"Insira o "<<i + 1<<"o. numero: ";
        cin>>valores;
        *(vetor + i) = valores;
    }

    int j, atual;
    for (int i = 0; i < tamNum; i++){
        atual = vetor[i];
        j = i - 1;
        while((j >= 0) && (vetor[j] > atual)) {
            vetor[j + 1] = vetor[j];
            j = j - 1;

        }
        vetor[j + 1] = atual;

    }
    system("cls");
    cout<<"Os numeros que voce inseriu, de forma ordenada, foram estes:"<<endl;
    for(int i = 0; i < tamNum; i++) {
        cout<<vetor[i];
    }



    return 0;
}
