#include "MorseSerie.h"

MorseSerie::MorseSerie(int p_duree) : Morse(p_duree)
{
    Serial.end();
    Serial.begin(9600);
}

void MorseSerie::afficherPoint() const
{
    Serial.print(".");
    delay(getDureePoint());
}
void MorseSerie::afficherTrait() const
{
    Serial.print("-");
    delay(getDureePoint());
    delay(getDureePoint());
    delay(getDureePoint());
}

void MorseSerie::texteAEmettre(String p_texte) const
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