#pragma once

#include <Geode/Geode.hpp>
#include <Geode/Bindings.hpp>

using namespace geode::prelude;

class Pet {
public:
    Pet(const std::string& name, int level = 1);
    ~Pet();

    std::string getName() const;
    int getLevel() const;
    void setLevel(int level);
    void levelUp();

private:
    std::string m_name;
    int m_level;
};
