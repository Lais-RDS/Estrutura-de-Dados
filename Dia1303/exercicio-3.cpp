#include <iostream>

using namespace std;

#define tamanho 10

/*
Ler um vetor A de 10 n�meros. Ap�s, ler mais um n�mero e guardar em
uma vari�vel X. Armazenar em um vetor M o resultado de cada
elemento de A multiplicado pelo valor X. Logo ap�s, imprimir o vetor M.
*/

int main()
{
    int vet[tamanho];
    int vetM[tamanho];
    int x;

    for(int i = 0; i < tamanho;i++)
    {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    cout << "Digite uma variavel: ";
    cin >> x;

    for(int i = 0; i < tamanho;i++)
    {
        vetM[i] = vet[i] * x;
    }

    for(int i = 0; i < tamanho;i++)
    {
        cout << vetM[i] << " " << endl;
    }
}
