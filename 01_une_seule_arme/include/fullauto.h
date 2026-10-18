//
// Created by zoade on 18.10.2026.
//

#ifndef GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_FULLAUTO_H
#define GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_FULLAUTO_H
#include "firearm.h"

class FullAuto : public Firearm{
public:
  // Constructor
  FullAuto(std::string name, int damage, float weight, int magazine_capacity, int ammo, std::string caliber, int burstLenght);

  void Fire() override;
private:
  void FireFullAuto();
  int burstLenght_;



};

#endif  // GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_FULLAUTO_H
