#pragma once

#include <iostream>
#include <memory>

class iStates;

class Unit : public iPhysicalDamage {
    protected:
        int hp;
        int pDamage;
        std::string name;
        bool creet;
        std::unique_ptr<iStates> state;
    public:
        Unit(const std::string& inName, int inHp, int inDamage, std::unique_ptr<iStates> inState);

        virtual ~Unit() = default;

        const std::string& getName() const;

        void setHp(const int inHp);

        const int getHp() const;

};