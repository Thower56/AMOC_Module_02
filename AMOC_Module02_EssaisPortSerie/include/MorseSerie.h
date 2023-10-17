#pragma once
#include "Morse.h"

class MorseSerie : public Morse
{
public:
MorseSerie(int p_duree);
void afficherPoint() const;
void afficherTrait() const;
void texteAEmettre(String p_texte) const;
};