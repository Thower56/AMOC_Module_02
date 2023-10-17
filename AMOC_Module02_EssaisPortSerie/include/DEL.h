#pragma once
#include <Arduino.h>

class DEL
{
public:
    DEL(const int& p_pinDEL);
    void allumer() const;
    void eteindre() const;
private:
    int m_pinDEL;
};