#include "weapon.h"

#include <print>
#include <utility>




Weapon::Weapon(std::string name, int damage, float weight)
    : name_(std::move(name)), damage_(damage), weight_(weight) {}



// Weapon::Weapon(std::string name, int damage, float weight, int magazine_capacity)
//     : name_(std::move(name)),
//       damage_(damage),
//       weight_(weight),
//       magazine_capacity_(magazine_capacity),
//       ammo_(magazine_capacity) {}

const std::string& Weapon::name() { return name_; }
