// Copyright (c) 2019 rapsealk

#ifndef __OTTOCHESS_CHAMPION_LUCIAN_HPP__
#define __OTTOCHESS_CHAMPION_LUCIAN_HPP__

#include <OttoChess/Include/Champion/Champion.hpp>

namespace OttoChess {

class Lucian : public Champion {
private:
    enum Origin m_origin;
    enum Class m_class;
public:
    //! Default constructor.
    Lucian() = default;
};

}   // namespace OttoChess

#endif  // __OTTOCHESS_CHAMPION_LUCIAN_HPP__