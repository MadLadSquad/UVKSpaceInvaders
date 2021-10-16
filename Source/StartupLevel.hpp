#pragma once
#include "Game.hpp"

namespace UVK
{
    class StartupLevel : public UVK::Level
    {
    public:
        StartupLevel() 
        {
    
        }

        virtual void endPlay() override;
        virtual void beginPlay() override;
        virtual void tick(float deltaTime) override;
        virtual ~StartupLevel() override {}
    };
}