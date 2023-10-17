#include "CodeMorse.h"
#include "GestionDELInterne.h"

void morseSOS()
{
  SEnMorse();
  OEnMorse();
  SEnMorse();
  eteindreDELInterne(1000);
}
void morseLong()
{
  allumerDELInterne(600);
  eteindreDELInterne(600);
}
void morseCourt()
{
  allumerDELInterne(200);
  eteindreDELInterne(200);
}
void morseEspace()
{
  eteindreDELInterne(600);
}
void SEnMorse()
{
  morseCourt();
  morseCourt();
  morseCourt();
  morseEspace();
}
void OEnMorse()
{
  morseLong();
  morseLong();
  morseLong();
  morseEspace();
}