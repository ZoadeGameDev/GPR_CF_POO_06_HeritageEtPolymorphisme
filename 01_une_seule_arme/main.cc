#include <iostream>
#include <print>

#include "weapon.h"
#include "firearm.h"
#include "semiautomatic.h"
#include "fullauto.h"
#include "melee.h"

// Le stand de tir. Il ne connait qu'une arme, et il l'appelle directement.
// A vous de lui en donner cinq, de cinq types differents, sans qu'il ait a
// savoir laquelle il tient.
int main() {
  // Weapon is NOT directly used
  // Pistolet --> Firearm
  Firearm pistolet("Pistolet", 24, 1.1f, 12, 12, "9mm");
  // Rifle --> SemiAutomatic, moitie charge au debut
  SemiAutomatic rifle("Rifle", 40, 10.0f, 20, 10, ".22 LR");
  // Assault Rifle --> FullAuto
  FullAuto assault_rifle("Assault Rifle", 14, 20, 42, 42, "5.56×45mm", 5);
  // Knife --> Melee
  Melee knife("Knife", 10, 1.0f, 2);



  std::println("--- STAND DE TIR ---");
  std::string choix_arme;
  while (choix_arme != "1" && choix_arme != "2" && choix_arme != "3" && choix_arme != "4") {
    std::println("Tu dois choisir ton arme, 1 : {}, 2 : {}, 3 : {} ou 4 : {}", pistolet.name(), rifle.name(), assault_rifle.name(), knife.name());
    std::cin >> choix_arme;
  }


  while (true) {
    std::println("");
    std::println("  1  {}  {}/{}", pistolet.name(), pistolet.ammo(),
                 pistolet.magazine_capacity());
    std::println("  2  {}  {}/{}", rifle.name(), rifle.ammo(),
             rifle.magazine_capacity());
    std::println("  3  {}  {}/{}", assault_rifle.name(), assault_rifle.ammo(),
         assault_rifle.magazine_capacity());
    std::println("  4  {}  - infini -", knife.name());
    std::println("  r  recharger    q  quitter");
    std::print("> ");

    char choix = 0;
    if (!(std::cin >> choix)) break;

    if (choix == 'q') break;
    if (choix == 'r') {
      pistolet.Reload();
      rifle.Reload();
      assault_rifle.Reload();
    } else if (choix == '1') {
      pistolet.Fire();
    } else if (choix == '2') {
      rifle.Fire();
    } else if (choix == '3') {
      assault_rifle.Fire();
    } else if (choix == '4') {
      knife.Fire();
    } else {
      std::println("Touche inconnue.");
    }
  }
  return 0;
}
