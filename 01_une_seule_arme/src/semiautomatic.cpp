//
// Created by zoade on 18.10.2026.
//

#include "../include/semiautomatic.h"
#include <print>


void SemiAutomatic::Fire() {
  SingleShotMode();

}

// I don't know what is the difference between the normal fire function and this
// , I still added it for later modification if necessary.
void SemiAutomatic::SingleShotMode() {
  if (!CanFire()) {
    std::println("{} : chargeur vide.", name_);
    return;
  }
  --ammo_;
  std::println("{} : un projectile, {} degats. ({}/{})", name_, damage_, ammo_,
               magazine_capacity_);
}
