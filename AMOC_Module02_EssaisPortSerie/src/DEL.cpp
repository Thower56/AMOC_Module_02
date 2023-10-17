#include "DEL.h"

DEL::DEL(const int& p_pinDEL):m_pinDEL(p_pinDEL)
{
    Serial.end();
    Serial.begin(9600);
    Serial.println("Ctor avec parametre");
    pinMode(this->m_pinDEL, OUTPUT);
    digitalWrite(this->m_pinDEL, LOW);
}

void DEL::allumer() const
{
    Serial.println("Allumer");
    digitalWrite(this->m_pinDEL, HIGH);
}
void DEL::eteindre() const
{
    Serial.println("Eteindre");
    digitalWrite(this->m_pinDEL, LOW);
}