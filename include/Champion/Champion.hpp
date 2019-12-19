// Copyright (c) 2019 rapsealk

/**
 * Reference: https://tftactics.gg/champions
 */

#ifndef __OTTOCHESS_CHAMPION_HPP__
#define __OTTOCHESS_CHAMPION_HPP__

#include <OttoChess/Include/Champion/Origin.hpp>
#include <OttoChess/Include/Champion/Class.hpp>

namespace OttoChess {

class Champion {
private:
    enum Origin m_origin;
    enum Class m_class;
    int m_hp;
    int m_mp;
    int m_range;
public:
    Champion();

    virtual void Attack();
    virtual void Skill();
};

}   // namespace OttoChess

#endif  // __OTTOCHESS_CHAMPION_HPP__