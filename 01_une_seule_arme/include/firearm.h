//
// Created by zoade on 15.10.2026.
//

#ifndef GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_FIREARM_H
#define GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_FIREARM_H
#include "weapon.h"


class Firearm : public Weapon {
public:
  // Constructor
  Firearm(std::string name, int damage, float weight, int magazine_capacity, int ammo, std::string caliber);

  void Reload() override;
  void Fire() override;

  int ammo() const override;
  int magazine_capacity() const override;

 protected:
  int magazine_capacity_ = 0;
  int ammo_ = 0;
  std::string caliber_;

 bool CanFire() const;










};

#endif  // GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_FIREARM_H
