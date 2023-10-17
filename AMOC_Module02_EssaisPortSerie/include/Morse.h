#pragma once
#include <Arduino.h>

class Morse
{
public:
    Morse();
    Morse(int p_duree);
    virtual void afficherPoint() const = 0;
    virtual void afficherTrait() const = 0;
    virtual void texteAEmettre(String p_texte) const = 0;
    void afficherSOS();
    int getDureePoint() const;
private:
    int m_duree;
};

