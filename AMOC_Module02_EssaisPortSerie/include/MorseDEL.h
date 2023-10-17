#pragma once
#include "Morse.h"

class MorseDEL : public Morse
{
public:
MorseDEL(int p_duree, byte p_DELPin);
void afficherPoint() const;
void afficherTrait() const;
void texteAEmettre(String p_texte) const;
private:
    byte m_DELPin;
};