//
// Created by gusar on 4/2/2018.
//
//P*18.5
#include "Dollar.h"
Dollar::Dollar(){
    peso;
    dollar=1;
}
Dollar::Dollar(float peso, float dollar){
    this->dollar=dollar;
    this->peso=peso;
}

Dollar operator + (const Dollar &D1, const Dollar &D2){
    Dollar a;
    a.dollar= D1.dollar + D2.dollar;
    Dollar b;
    b.dollar= D1.peso*18.5 + D2.dollar;
    Dollar c;
    c.dollar= D1.dollar + D2.peso*18.5;
    return a,b,c;
}
Dollar operator - (const Dollar &D1, const Dollar &D2) {
        Dollar d;
        d.dollar = D1.dollar - D2.dollar;
        Dollar e;
        e.dollar = D1.peso*18.5 - D2.dollar;
        Dollar f;
        f.dollar = D1.dollar - D2.peso*18.5;
        return d,e,f;
    }
    bool operator<(const Dollar &D1, const Dollar &D2) {
        float a = D1.peso;
        float b = D2.dollar;
        return a <= b;
    }
    bool operator>(const Dollar &D1, const Dollar &D2) {
        float a = D1.peso;
        float b = D2.dollar;
        return a > b;
    }
    bool operator<=(const Dollar &D1, const Dollar &D2) {
        float a = D1.peso;
        float b = D2.dollar;
        return a <= b;
    }
    bool operator>=(const Dollar &D1, const Dollar &D2) {
        float a = D1.peso;
        float b = D2.dollar;
        return a >= b;
    }
    bool operator!=(const Dollar &D1, const Dollar &D2) {
        float a = D1.peso;
        float b = D2.dollar;
        return a!=b;
    }
   Dollar operator ++ (const Dollar &D1, const Dollar &D2){
       Dollar moneda1;
        moneda1.dollar= D1.dollar + D2.dollar;
       moneda1++;
       Dollar moneda2;
       moneda2.dollar=D1.peso + D2.peso;
       moneda2 ++;
       return  moneda1, moneda2;
    }
    Dollar operator-- (const Dollar &D1, const Dollar &D2){
        Dollar moneda3;
        moneda3.dollar=D1.dollar - D2.dollar;
        moneda3 --;
        Dollar moneda4;
        moneda4.dollar=D1.peso - D2.peso;
        moneda4 --;
        return moneda3, moneda4;
    }
std::string Dollar::to_String(){
    return "$"+ std::to_string(dollar)+"USA:";
}