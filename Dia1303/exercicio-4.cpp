#include <iostream>
/*
Fa�a um programa em C++ para ler 20 n�meros e armazenar em um vetor.
Ap�s a leitura total dos 20 n�meros, o algoritmo deve escrever esses 20
n�meros lidos na ordem inversa.
*/

using namespace std;

#define tamanho 20
int main()
{
    int vet[tamanho];
    int i;

    for(int i = 0; i <tamanho;i++)
    {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    for(int i = tamanho - 1; i >= 0; i--)
    {
        cout << vet[i] << " ";
    }

}
