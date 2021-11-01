#pragma once

#include <iostream>
#include <memory>

class States;

class Unit {
    protected:
        int hp;
        int damage;
        std::string name;
        bool creet;
        std::unique_ptr<States> state;
    public:
        Unit(const std::string& inName, int inHp, int inDamage, std::unique_ptr<States> inState);

        virtual ~Unit() = default;

        const std::string& getName() const;

        void setHp(const int inHp);

        const int getHp() const;

};