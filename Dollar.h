//
// Created by gusar on 4/2/2018.
//

#ifndef POO_EX_P2_DOLLAR_H
#define POO_EX_P2_DOLLAR_H
#include <iostream>

class Dollar {
    friend Dollar operator + (const Dollar &D1, const Dollar &D2);
    friend Dollar operator - (const Dollar &D1, const Dollar &D2);
    friend bool operator < (const Dollar &D1, const Dollar &D2);
    friend bool operator > (const Dollar &D1, const Dollar &D2);
    friend bool operator <= (const Dollar &D1, const Dollar &D2);
    friend bool operator >= (const Dollar &D1, const Dollar &D2);
    friend bool operator == (const Dollar &D1, const Dollar &D2);
    friend bool operator != (const Dollar &D1, const Dollar &D2);

public:
    float peso, dollar;

public:
    Dollar::Dollar();
    Dollar(float peso, float dollar);
    std::string to_String();
};


#endif //POO_EX_P2_DOLLAR_H