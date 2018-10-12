#include "Personne.h"
#include <iostream>

int main(){

  //On teste le constructeur
    Personne p1("Kahlo", "Frida", 21, "450 564-2280");
    std::cout << p1;

   //On teste chacun des setter
   Personne p2;
   p2.setNom("Riviera");
   p2.setPrenom("Diego");
   p2.setAge(55);
   p2.setTelephone("450 765-3456");
   std::cout << p2;
  
  //On teste le chainage des methode 
   Personne p3;
   Personne *p3b = p3.setNom("Trotsky")
   	->setPrenom("Leon")
   	->setAge(51)
   	->setTelephone("450 765-3456");
   std::cout << *(p3b);

  //On teste l'operateur >>
  Personne p4;
  std::cin >> p4;
  std::cout << p4;
    return 0;

}
