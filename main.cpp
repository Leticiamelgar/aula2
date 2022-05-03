#include <iostream>

using namespace std;

int bubblesort (int vetor[],int n)
{
    int i=0;
    int j=0;
    int contmovimentos=0;
    int contcompara=0;

    for (j=0; j<n-1; j++)
    {

        for (i=0; i<n-1; i++)
        {
            if(vetor[i]>vetor[i+1])
            {
                int aux= vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=aux;
                contmovimentos++;

            }
            contcompara++;
        }

    }
     
    for (i=0;i<n;i++)
    {
        cout << vetor[i] << " ";
    }
    cout << "Número de movimentos:" << contmovimentos << endl;
    cout << "Número de comparacoes:" << contcompara << endl;
    return 0;
}

int selecao (int vet [], int n)
{
    int i=0;
    int j=0;
    int min=0;
    int aux; 
    int contmovimentos=0;
    int contcompara=0;

    for (j=0; j<n-1; j++)
    {
        min = j;
        for (i=j+1; i<n; i++)
        {
            if (vet[i]<vet[min])
            {
                min = i;
                aux=vet[min];
                vet[min]=vet[i];
                vet[i]=aux;
                contmovimentos++;
            }
            contcompara++;
        }
    }
     for (i=0;i<n;i++)
    {
        cout << vet[i] << " ";
    }
    cout << "Número de movimentos:" << contmovimentos << endl;
    cout << "Número de comparacoes:" << contcompara << endl;
    return 0;
    
}


int main (){
    int vet [5];
    int i=0;
    cout << "insira 5 números:" << endl;
    for (i=0; i<5; i++)
    {
        cin >> vet[i];
    }
    selecao(vet,5);
    return 0;
}