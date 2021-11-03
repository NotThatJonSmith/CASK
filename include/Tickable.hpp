#pragma once

namespace CASK {

class Tickable {

public:

    virtual inline void Tick() = 0;
    virtual inline void BeforeFirstTick() { };
    virtual inline void Reset() { };

};

} // namespace CASK
