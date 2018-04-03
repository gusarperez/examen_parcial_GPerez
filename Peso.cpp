//*.05->P

#include "Peso.h"
Peso::Peso(){
    peso=1;
    dollar=1;
}
Peso::Peso(float peso, float dollar){
    this->dollar=dollar;
    this->peso=peso;
}
Peso operator + (const Peso &p1, const Peso &p2){
 Peso a;
    a.peso = p1.peso + p2.peso;
    Peso b;
    b.peso = p1.peso + p2.dollar*.05;
    Peso c;
    c.dollar= p1.dollar*.05 + p2.peso;
    return a,b,c;
}
Peso operator - (const Peso &p1, const Peso &p2){
    Peso d;
    d.peso = p1.peso - p2.peso;
    Peso e;
    e.peso = p1.peso - p2.dollar*.05;
    Peso f;
    f.dollar= p1.dollar*.05 - p2.peso;
    return d,e,f;
    }
    bool operator<(const Peso &p1, const Peso &p2) {
        float a = p1.peso;
        float b = p2.dollar;
        return a < b;
    }
    bool operator>(const Peso &p1, const Peso &p2) {
        float a = p1.peso;
        float b = p2.dollar;
        return a > b;
    }
    bool operator<=(const Peso &p1, const Peso &p2) {
        float a = p1.peso;
        float b = p2.dollar;
        return a <= b;
    }
    bool operator>=(const Peso &p1, const Peso &p2) {
        float a = p1.peso;
        float b = p2.dollar;
        return a >= b;
    }
    bool operator==(const Peso &p1, const Peso &p2) {
        float  a=p1.peso;
        float  b=p2.peso;
        return a=b;
    }
    bool operator!=(const Peso &p1, const Peso &p2) {
        float a = p1.peso;
        float b = p2.dollar;
        return a!=b;
    }
Peso operator ++ (const Peso &p1, const Peso &p2){
    Peso moneda_1;
    moneda_1.peso= p1.peso + p2.peso;
    moneda_1++;
    Peso moneda_2;
    moneda_2.peso=p1.dollar + p2.dollar;
    moneda_2 ++;
    return  moneda_1, moneda_2;
}
Peso operator-- (const Peso &p1, const Peso &p2){
    Peso moneda_3;
    moneda_3.peso=p1.peso - p2.peso;
    moneda_3 --;
    Peso moneda_4;
    moneda_4.peso=p1.dollar - p2.dollar;
    moneda_4 --;
    return moneda_3, moneda_4;
}
std::string Peso:: to_String() {
    return "$"+ std::to_string(peso)+"MXN:";
}