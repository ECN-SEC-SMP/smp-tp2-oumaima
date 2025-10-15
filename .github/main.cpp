#include <iostream>;
using namespace std;
#include "utilitaire.cpp"
#include "entierlong.h"
int main(){
    int a;
    t_EntierLong b;
    cout<<"entrer un entier :\n"<<endl;
    cin>>a;
    b=ConversionAEntierLong(a);
    return 0;
}