// Copyright (C) 2015 Eric Hebert (ayebear)
// This code is licensed under GPLv3, see LICENSE.txt for details.

#ifndef REGENSYSTEM_H
#define REGENSYSTEM_H

#include <SFML/Graphics.hpp>
#include <es/system.h>

namespace es
{
    class World;
    class Entity;
}

class RegenSystem: public es::System
{
    public:
        RegenSystem(es::World& world);
        void update(float dt);

    private:
        void handleSplit(es::Entity& ent);
        float radiusToArea(float radius) const;
        float areaToRadius(float area) const;

        es::World& world;
};

#endif
