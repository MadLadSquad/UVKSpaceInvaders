#include "StartupLevel.hpp"

void UVK::StartupLevel::beginPlay()
{
    beginAutohandle();

}

void UVK::StartupLevel::tick(float deltaTime)
{
    tickAutohandle(deltaTime);

}

void UVK::StartupLevel::endPlay()
{
    endAutohandle();

}
