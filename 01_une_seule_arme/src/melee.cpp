//
// Created by zoade on 18.10.2026.
//

#include "../include/melee.h"
#include <print>

// Constructor
Melee::Melee(std::string name, int damage, float weight, int bladeLenght)
: Weapon(name, damage, weight), bladeLenght_(bladeLenght) {}

void Melee::Fire() {
  Swing();
}

void Melee::Swing() {
  int actual_damage =  damage_ * bladeLenght_;
  std::println("{} : frappe, {} degats.", name_, actual_damage);
}

