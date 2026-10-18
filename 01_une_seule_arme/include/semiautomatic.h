//
// Created by zoade on 18.10.2026.
//

#ifndef GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_SEMIAUTOMATIC_H
#define GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_SEMIAUTOMATIC_H
#include "firearm.h"

class SemiAutomatic : public Firearm {
public:
  void Fire() override;
protected:
  void SingleShotMode();





};

#endif  // GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_SEMIAUTOMATIC_H
