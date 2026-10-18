#include "weapon.h"

#include <print>
#include <utility>




Weapon::Weapon(std::string name, int damage, float weight)
    : name_(std::move(name)), damage_(damage), weight_(weight) {}

const std::string& Weapon::name() { return name_; }
