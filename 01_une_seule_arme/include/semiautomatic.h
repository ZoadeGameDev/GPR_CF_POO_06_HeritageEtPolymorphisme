//
// Created by zoade on 18.10.2026.
//

#ifndef GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_SEMIAUTOMATIC_H
#define GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_SEMIAUTOMATIC_H
#include "firearm.h"

class SemiAutomatic : public Firearm {
public:
  // Constructor
  // The constructor is the exact same from SemiAutomatic to Firearm
  // it's a way to copy it! We don't need to precise it in the .cpp!
  using Firearm::Firearm;

  void Fire() override;
private:
  void SingleShotMode();





};

#endif  // GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_SEMIAUTOMATIC_H
