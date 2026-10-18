//
// Created by zoade on 18.10.2026.
//

#include "../include/melee.h"
#include <print>

void Melee::Fire() {
  Swing();
}

void Melee::Swing() {
  int actual_damage =  damage_ * bladeLenght_;
  std::println("{} : frappe, {} degats.", name_, actual_damage);
}

