//
// Created by zoade on 15.10.2026.
//

#ifndef GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_FIREARM_H
#define GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_FIREARM_H
#include "weapon.h"

class Firearm : public Weapon {
public:

  void Reload();
  void Fire() override;


 protected:
  int magazine_capacity_ = 0;
  int ammo_ = 0;
  int caliber_;

  bool CanFire() const;
  int ammo() const;
  int magazine_capacity() const;










};

#endif  // GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_FIREARM_H
