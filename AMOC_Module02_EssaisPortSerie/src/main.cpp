#include <Arduino.h>
#include "passageParametres.h"
#include "Flasher.h"
#include "DEL.h"
#include "MorseDEL.h"
#include "MorseSerie.h"
#include "MorseBuzzer.h"

Flasher flasher(12, 2000);
DEL delTest(10);
Morse* morse;
void setup()
{
  Serial.end();
  Serial.begin(9600);

  // int valeur1 = 42;
  // int valeur2 = 13;

  // Serial.println(42);
  // Serial.println("Bonjour a tous !");
  // Serial.println(String(42, HEX));
  // Serial.println("0x" + String(42, HEX));
  // Serial.println("int valeur1 (int * : 0x" + String((uint16_t)(&valeur1), HEX) + ") = " + String(valeur1));
  // Serial.println("int valeur1 (int * : 0x" + String((uint16_t)(&valeur2), HEX) + ") = " + String(valeur2));
// 42
// Bonjour a tous !
// 2a
// 0x2a
// int valeur1 (int * : 0x8fa) = 42
// int valeur1 (int * : 0x8f8) = 13
// a et 8 sont 1 de difference donc 2 octal (2 bit)
  // Serial.println("Appel de passageDeParametres1(valeur1, valeur1, &valeur2);");
  // passageDeParametres1(valeur1, valeur1, &valeur2);

  // int* p_Ref = nullptr;
  // int* p_Ptr = nullptr;
  // Serial.println();
  // Serial.println("Appel de passageDeParametres2(valeur3, valeur4);");
  // Serial.println();
  // Serial.println("Avant: ");
  // Serial.println("int p_Ref (int * : 0x" + String((uint16_t)(&p_Ref), HEX) + ")");
  // Serial.println("int p_Ptr (int * : 0x" + String((uint16_t)(&p_Ptr), HEX) + ")");
  // passageDeParametres2(p_Ref, &p_Ptr);
  // Serial.println();
  // Serial.println("Apres: ");
  // Serial.println("int p_Ref (int * : 0x" + String((uint16_t)(&p_Ref), HEX) + ")");
  // Serial.println("int p_Ptr (int * : 0x" + String((uint16_t)(&p_Ptr), HEX) + ")");

  // Serial.println();
  // Flasher flasherDuSetup(12, 500);
  // flasher = flasherDuSetup;
  // Flasher* ptrFlasher;
  // ptrFlasher = &flasher;

  // Serial.println();
  // passageDeParametresCopie(flasher); //Ctor par copie
  // passageDeParametresPointeur(ptrFlasher);
  // passageDeParametresReference(flasher);

  //morse = new MorseSerie(1000);
  //morse = new MorseDEL(200, 8);
  morse = new MorseBuzzer(200, 8);
}




void loop()
{
  //flasher.faireClignoter(100);
  // delTest.allumer();
  // delay(200);
  // delTest.eteindre();
  // delay(200);
  //morse->afficherSOS();
  morse->texteAEmettre("... --- ...");
  Serial.println("ping");
  Serial.println("");
  delay(2000);
}

