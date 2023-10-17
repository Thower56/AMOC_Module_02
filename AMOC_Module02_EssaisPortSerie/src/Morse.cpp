#include "Morse.h"

Morse::Morse(int p_duree): m_duree(p_duree)
{
    ;
}

void Morse::afficherSOS()
{
    afficherPoint();
    afficherPoint();
    afficherPoint();
    afficherTrait();
    afficherTrait();
    afficherTrait();
    afficherPoint();
    afficherPoint();
    afficherPoint();
}
int Morse::getDureePoint() const
{
    return m_duree;
}