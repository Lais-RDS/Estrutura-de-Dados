
/*Escreva um programa em C++ que permita a leitura das notas de uma
turma de 20 alunos. Calcular a m�dia da turma e contar quantos alunos
obtiveram nota acima desta m�dia calculada. Escrever a m�dia da turma
e o resultado da contagem.*/


#include <iostream>

using namespace std;

#define mediaGeral 20

float mediaValoresVetor(double vet[], int tam)
{
    float soma = 0;
        for (int i = 0; i < mediaGeral; i++)
        {
            soma += vet[i];
        }
                return soma / tam;
}


int main()
{
    double vet [mediaGeral], acima = 0;
    float media;

    for (int i = 0; i < mediaGeral; i++)
        {
            cout << "Digite a nota " << i + 1 << ":" << endl;
            cin >> vet[i];
        }

        media = mediaValoresVetor(vet, mediaGeral);
        cout << "M�dia: " << media << endl;

    for (int i = 0; i < mediaGeral; i++)
    {
        if (vet[i] > media)
            {
                acima++;
            }
    }
        cout << "=========================================================================================" << endl;
        cout << "Valores acima da media: " << acima << endl;
        cout << "Valores abaixo da media: " << mediaGeral - acima;

    return 0;
}

