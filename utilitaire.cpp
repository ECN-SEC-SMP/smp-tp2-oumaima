
#include <iostream>
#include "entierlong.h"
using namespace std;

t_EntierLong ConversionAEntierLong(int n){
    //resultat de la conversion:
    t_EntierLong result;
    //si signe est negatif c true sinon c false
    if(n<0){
        result.negatif=true;
        n=-n;//on travaille sur la valeur absolue
    }
    else{
        result.negatif=false;
    }
    //initialisation de tous les chiffres à 0
    for(int i=0;i<=MAXCHIFFRES;i++){
        result.chiffres[i]=0;
    }

    // Extraire les chiffres
    int j=0;
    while (n > 0 && j < MAXCHIFFRES) {
        result.chiffres[j] = n % 10;  // on prend le dernier chiffre
        n = n / 10;                     // on enlève ce chiffre
        j++;
    }

};
t_EntierLong TestEgalite(t_EntierLong A, t_EntierLong B){
    
}
