#include "MorseDEL.h"

MorseDEL::MorseDEL(int p_duree, byte p_DELPin) : Morse(p_duree)
{
    m_DELPin = p_DELPin;
    pinMode(p_DELPin, OUTPUT);
    digitalWrite(p_DELPin, LOW);
}

void MorseDEL::afficherPoint() const
{
    digitalWrite(m_DELPin, HIGH);
    delay(getDureePoint());
    digitalWrite(m_DELPin, LOW);
    delay(getDureePoint());
}
void MorseDEL::afficherTrait() const
{
    digitalWrite(m_DELPin, HIGH);
    delay(getDureePoint());
    delay(getDureePoint());
    delay(getDureePoint());
    digitalWrite(m_DELPin, LOW);
    delay(getDureePoint());
}

void MorseDEL::texteAEmettre(String p_texte) const
{
    for(char text : p_texte)
    {
        if(text == '.')
        {
            afficherPoint();
        }
        else if(text =='-')
        {
            afficherTrait();
        }
        else if (text == ' ')
        {
            digitalWrite(m_DELPin, LOW);
            delay(getDureePoint());
        }
    }
}