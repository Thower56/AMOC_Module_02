#include <Arduino.h>
#include "passageParametres.h"
#include "Flasher.h"

void passageDeParametres1(int p_v1, int& p_r1, int* p_p1)
{
    Serial.println("int p_v1 (int * : 0x" + String((uint16_t)(&p_v1), HEX) + ") = " + String(p_v1));
    Serial.println("int &p_r1 (int * : 0x" + String((uint16_t)(&p_r1), HEX) + ") = " + String(p_r1));
    Serial.println("int p_p1 (int ** : 0x" + String((uint16_t)(&p_p1), HEX) + ") adresse : 0x = " + String((uint16_t)p_p1, HEX) + " = " + String(*p_p1));
}

void passageDeParametres2(int*& p_r1, int** p_p1)
{
    Serial.println();
    Serial.println("Pendant");
    Serial.println("int p_Ref (int * : 0x" + String((uint16_t)(&p_r1), HEX) + ")");
    Serial.println("int p_Ptr (int * : 0x" + String((uint16_t)(&p_p1), HEX) + ")");

    p_r1 = new int;
    *p_p1 = new int;
  
}

void passageDeParametresCopie(Flasher p_flasher)
{
    Serial.println("Flasher p_flasher (Flasher : 0x" + String((uint16_t)(&p_flasher), HEX) + ")");
}

void passageDeParametresReference(Flasher& p_flasher)
{
    Serial.println("Flasher& p_flasher (Flasher & : 0x" + String((uint16_t)(&p_flasher), HEX) + ")");
}

void passageDeParametresPointeur(Flasher* p_flasher)
{
    Serial.println("Flasher* p_flasher (Flasher * : 0x" + String((uint16_t)(&p_flasher), HEX) + ")");
}   