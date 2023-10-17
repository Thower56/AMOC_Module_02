#include "MorseBuzzer.h"

MorseBuzzer::MorseBuzzer(int p_duree, byte p_BuzzerPin) : Morse(p_duree)
{
    m_BuzzerPin = p_BuzzerPin;
    pinMode(p_BuzzerPin, OUTPUT);
    noTone(m_BuzzerPin);
}

void MorseBuzzer::afficherPoint() const
{
    tone(m_BuzzerPin, 1000);
    delay(getDureePoint());
    noTone(m_BuzzerPin);
    delay(getDureePoint());
}
void MorseBuzzer::afficherTrait() const
{
    tone(m_BuzzerPin, 1000);
    delay(getDureePoint());
    delay(getDureePoint());
    delay(getDureePoint());
    noTone(m_BuzzerPin);
    delay(getDureePoint());
}

void MorseBuzzer::texteAEmettre(String p_texte) const
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
        else
        {
            ;
        }
    }
}