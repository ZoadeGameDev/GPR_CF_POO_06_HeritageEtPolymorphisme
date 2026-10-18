//
// Created by zoade on 18.10.2026.
//

#include "../include/fullauto.h"
#include <print>

// Constructor
FullAuto::FullAuto(std::string name, int damage, float weight, int magazine_capacity, int ammo, int caliber, int burstLenght)
  : Firearm(name, damage, weight, magazine_capacity, ammo, caliber), burstLenght_(burstLenght) {}




void FullAuto::Fire() {
  FireFullAuto();
}

void FullAuto::FireFullAuto() {
  if (!CanFire()) {
    std::println("{} : chargeur vide.", name_);
    return;
  }
  ammo_ -= burstLenght_;
  int actual_damage = damage_ * burstLenght_;
  std::println("{} : {} coups, {} degats. ({}/{})", name_, burstLenght_, actual_damage, ammo_,
               magazine_capacity_);
}
