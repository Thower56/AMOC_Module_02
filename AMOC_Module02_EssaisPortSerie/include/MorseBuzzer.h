#pragma once
#include "Morse.h"

class MorseBuzzer : public Morse
{
public:
MorseBuzzer(int p_duree, int p_BuzzerPin);
void afficherPoint() const;
void afficherTrait() const;
void texteAEmettre(String p_texte) const;
private:
    int m_BuzzerPin;
};