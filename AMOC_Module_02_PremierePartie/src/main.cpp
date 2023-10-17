#include <Arduino.h>
#include "CodeMorse.h"
#include "Configuration.h"

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);  
}

void loop()
{
  //Exercice 1
  // allumerDELInterne(DUREE_DEL_ALLUMEE);
  // eteindreDELInterne(DUREE_DEL_ALLUMEE);

  //Exercice 2
  // allumerDELInterne(dureeDELAllumee);
  // eteindreDELInterne(dureeDELEteinte); 

  // allumerDELInterne(500);
  // eteindreDELInterne(1000);

  //Exercice 3
  // allumerDELInterne(15);
  // eteindreDELInterne(15);

  //Exercice 4
  // allumerDELInterne(15);
  // eteindreDELInterne(15);

  //Exercice 5
  //morseSOS();

  //Exercice 6
  // #define HIGH 0x1
  // #define LOW  0x0
  // #define LED_BUILTIN 13
}

