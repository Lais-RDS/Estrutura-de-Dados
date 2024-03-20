#include <iostream>
#include <locale.h>
using namespace std;

/*7.Fa�a um programa em C++ que crie um vetor de 10 inteiros, coloque
pe�a valores ao usu�rio e depois imprima todos os seus conte�dos na
ordem normal e depois inversa. A impress�o dos conte�dos dever� ser
feita usando ponteiro.*/

int* inverteArray(int array[], int tamanho) {
    int* invertido = new int[tamanho];
    for (int i = 0; i < tamanho; ++i) {
        invertido[i] = array[tamanho - 1 - i];
    }
    return invertido;
}

int main(){
    setlocale (LC_ALL, "Portuguese");
    const int SIZE_ARRAY = 5;
    int arrayBase[SIZE_ARRAY] = {};

    for(int i = 0; i < SIZE_ARRAY; i++){
        cout<<"Digite o valor do array no indice "<<i<<": ";
        cin>> arrayBase[i];
    }

    int* arrayInvertido = inverteArray(arrayBase, SIZE_ARRAY);
    int* ptrArrayInvertido = &arrayInvertido[0];

    cout<<"O array inverso �: ";
    for(int i=0; i<5; i++){
        cout<<*ptrArrayInvertido;
        ptrArrayInvertido++;
    }
        cout<<endl;

}



