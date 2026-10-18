#include "weapon.h"

#include <print>
#include <utility>




Weapon::Weapon(std::string name, int damage, float weight)
    : name_(std::move(name)), damage_(damage), weight_(weight) {}


void Weapon::Reload() {
  std::println("Can't reload this weapon");
}

const std::string& Weapon::name() { return name_; }
int Weapon::ammo() const { return 0; }
int Weapon::magazine_capacity() const { return 0; }
