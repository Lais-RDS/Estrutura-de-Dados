#include <iostream>

using namespace std;

#define tamanho 10

/*Escreva um programa em C++ que permita a leitura dos nomes de 10
pessoas e armaze os nomes lidos em um vetor. Ap�s isto, o algoritmo
deve permitir a leitura de mais 1 nome qualquer de pessoa e depois
escrever a mensagem ACHEI, se o nome estiver entre os 10 nomes lidos
anteriormente (guardados no vetor), ou N�O ACHEI caso contr�rio.
*/

int main()
{
    string vet[tamanho];
    string nome;
    int soma = 0;

    for(int i = 0; i < tamanho; i++)
    {
        cout << "Digite nomes: " << endl;
        cin >> vet[i];
    }


    for(int i = 0; i < tamanho; i++)
    {
        cout << vet[i] << " ";
    }

    cout << endl;

    cout << "Qual nome est� a procura?: ";
    cin >> nome;


    for(int i = 0; i < tamanho; i++)
    {
        if(nome == vet[i])
        {
            soma = soma + 1;
        }
    }

    if(soma == 1 || soma > 1)
    {
        cout << "Achei";
    }
    else
    {
        cout << "N�o achei";
    }


}
