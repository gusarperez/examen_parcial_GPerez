#include <iostream>
#include "Peso.h"
#include "Dollar.h"
int main() {
Peso moneda1 (1,5);
    Peso moneda2(1,7);
    Dollar moneda_1(15,5);
    Dollar moneda_2(2,1);
    Peso totalsum;
    Dollar totalsum_a;
    totalsum =moneda1+ moneda2;
    totalsum_a=moneda_1+moneda_2;
    Peso totalresta= moneda1+moneda2;
    Dollar totalrest_a=moneda_1-moneda_2;
    //Peso
    bool  comparadormenor;
    moneda1<moneda2 ?comparadormenor=true:comparadormenor= false;
    bool  comparadormayor;
    moneda1>moneda2 ?comparadormayor=true:comparadormayor= false;
    bool  comparadoremenor_igual;
    moneda1<=moneda2 ?comparadoremenor_igual=true:comparadoremenor_igual= false;
    bool  comparadormayor_igual;
    moneda1>=moneda2 ?comparadormayor=true:comparadormayor= false;
    bool  comparador_igual;
    moneda1==moneda2 ?comparador_igual=true:comparador_igual= false;
    bool  comparador_diferente_de;
    moneda1!=moneda2 ?comparador_diferente_de=true:comparador_diferente_de= false;
    //Dollar
    bool  comparadormenor_dll;
    moneda_1<moneda_2 ?comparadormenor_dll=true:comparadormenor_dll= false;
    bool  comparadormayor_dll;
    moneda_1>moneda_2 ?comparadormayor_dll=true:comparadormayor_dll= false;
    bool  comparadoremenor_igual_dll;
    moneda_1<=moneda_2 ?comparadoremenor_igual_dll=true:comparadoremenor_igual_dll= false;
    bool  comparadormayor_igual_dll;
    moneda_1>=moneda_2 ?comparadormayor_dll=true:comparadormayor_dll= false;
    bool  comparador_igual_dll;
    moneda_1==moneda_2 ?comparador_igual_dll=true:comparador_igual_dll= false;
    bool  comparador_diferente_de_dll;
    moneda_1!=moneda_2 ?comparador_diferente_de_dll=true:comparador_diferente_de_dll= false;
}