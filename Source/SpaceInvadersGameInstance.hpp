#pragma once
#include "Game.hpp"

namespace UVK
{
    class SpaceInvadersGameInstance : public UVK::GameInstance
    {
    public:
        SpaceInvadersGameInstance() 
        {
    
        }

        virtual void endPlay() override;
        virtual void beginPlay() override;
        virtual void onEventInitEditorModules() override;
        virtual ~SpaceInvadersGameInstance() override {}
    };
}