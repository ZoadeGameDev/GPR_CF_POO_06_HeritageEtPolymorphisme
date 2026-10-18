//
// Created by zoade on 18.10.2026.
//

#ifndef GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_MELEE_H
#define GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_MELEE_H
#include "weapon.h"

class Melee : public Weapon {
public:
  void Fire() override;

private:
  void Swing();
  int bladeLenght_;
};

#endif  // GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_MELEE_H
