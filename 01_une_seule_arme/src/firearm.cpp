//
// Created by zoade on 15.10.2026.
//

#include "../include/firearm.h"

#include <print>

#include "firearm.h"

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