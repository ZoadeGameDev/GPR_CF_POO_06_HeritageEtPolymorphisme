//
// Created by zoade on 18.10.2026.
//

#include "../include/fullauto.h"
#include <print>

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
