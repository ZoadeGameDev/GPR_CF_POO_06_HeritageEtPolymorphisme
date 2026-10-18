#include <iostream>
#include <print>

#include "weapon.h"

// Le stand de tir. Il ne connait qu'une arme, et il l'appelle directement.
// A vous de lui en donner cinq, de cinq types differents, sans qu'il ait a
// savoir laquelle il tient.
int main() {
  Weapon pistolet("Pistolet", 24, 1.1f, 12);
  Weapon w;


  std::println("--- STAND DE TIR ---");
  while (true) {
    std::println("");
    std::println("  1  {}  {}/{}", pistolet.name(), pistolet.ammo(),
                 pistolet.magazine_capacity());
    std::println("  r  recharger    q  quitter");
    std::print("> ");

    char choix = 0;
    if (!(std::cin >> choix)) break;

    if (choix == 'q') break;
    if (choix == 'r') {
      pistolet.Reload();
    } else if (choix == '1') {
      pistolet.Fire();
    } else {
      std::println("Touche inconnue.");
    }
  }
  return 0;
}
