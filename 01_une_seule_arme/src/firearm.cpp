//
// Created by zoade on 15.10.2026.
//

#include "../include/firearm.h"

#include <print>

#include "firearm.h"

// Constructor
Firearm::Firearm(std::string name, int damage, float weight, int magazine_capacity, int ammo, int caliber)
  : Weapon(name, damage, weight), magazine_capacity_(magazine_capacity), ammo_(ammo), caliber_(caliber) {}

void Firearm::Fire(){
   if (!CanFire()) {
     std::println("{} : chargeur vide.", name_);
     return;
   }
   --ammo_;
   std::println("{} : un projectile, {} degats. ({}/{})", name_, damage_, ammo_,
                magazine_capacity_);
 }

void Firearm::Reload() {
  ammo_ = magazine_capacity_;
  std::println("{} : recharge. ({}/{})", name_, ammo_, magazine_capacity_);
}



bool Firearm::CanFire() const { return ammo_ > 0; }
int Firearm::ammo() const { return ammo_; }
int Firearm::magazine_capacity() const { return magazine_capacity_; }