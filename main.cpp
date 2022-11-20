#include <iostream>

using namespace std;

void richiestaArray();
void sommaArray(int array[10]);
void scambioSimmetrico(int array[10]);

void richiestaArray(){
    int array[10];
    //carica array
    for (int i = 0; i<10; i++){
        cout<<"inserisci il numero per lo slot "<<i<<endl;
        cin>>array[i];
    }

    //stampa array
    for (int i = 0; i<10; i++){
        cout<<array[i]<<" ";
    }

    sommaArray(array);
    scambioSimmetrico(array);
}

void sommaArray(int array[10]){

    //somma valori dentro l'array
    int somma = 0;
    for(int i = 0; i<10; i++){
        somma=somma+array[i];
    }
    cout<<"la somma e' "<<somma<<endl;
}

void scambioSimmetrico(int array[10]){

    //scambio simmetrico array
    int arrayinvertito[10];
    for(int i = 0; i<10; i++){
        arrayinvertito[i] = array[9-i];
    }

    //stampa scambio simmetrico
    cout<<"Scambio array (simmetrico): ";
    for (int i = 0; i<10; i++){
        cout<<arrayinvertito[i]<<" ";
    }
}

int main() {
    richiestaArray();
}
