//
// Created by zoade on 18.10.2026.
//

#include "../include/fullauto.h"
#include <print>

// Constructor
FullAuto::FullAuto(std::string name, int damage, float weight, int magazine_capacity, int ammo, std::string caliber, int burstLenght)
  : Firearm(name, damage, weight, magazine_capacity, ammo, caliber), burstLenght_(burstLenght) {}




void FullAuto::Fire() {
  FireFullAuto();
}

void FullAuto::FireFullAuto() {
  // Fire bullet by bullet until burstLenght
  int total_fire = 0;
  if (!CanFire()) {
    std::println("{} : chargeur vide.", name_);
  } else {
    for (int i = 0; i < burstLenght_; i++) {
      if (!CanFire()) {
        continue;
      }
      total_fire++;
      ammo_--;
    }
    int actual_damage = damage_ * total_fire;
    std::println("{} : {} coups, {} degats. ({}/{})", name_, total_fire, actual_damage, ammo_,
                 magazine_capacity_);

  }
}
