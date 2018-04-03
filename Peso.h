//
// Created by gusar on 4/2/2018.
//

#ifndef POO_EX_P2_PESO_H
#define POO_EX_P2_PESO_H
#include <iostream>

class Peso {
    friend Peso operator + (const Peso &P1, const Peso &P2);
    friend Peso operator - (const Peso &P1, const Peso &P2);
    friend bool operator < (const Peso &P1, const Peso &P2);
    friend bool operator > (const Peso &P1, const Peso &P2);
    friend bool operator <= (const Peso &P1, const Peso &P2);
    friend bool operator >= (const Peso &P1, const Peso &P2);
    friend bool operator == (const Peso &P1, const Peso &P2);
    friend bool operator != (const Peso &P1, const Peso &P2);
private:
    float peso, dollar;

public:
    Peso::Peso();
    Peso(float peso, float dollar);
    std::string to_String();
};


#endif //POO_EX_P2_PESO_H