// Copyright (c) 2019 rapsealk

/**
 * Reference: https://www.redblobgames.com/grids/hexagons/
 */

#ifndef __OTTOCHESS_HEXAGON_HEX_HPP__
#define __OTTOCHESS_HEXAGON_HEX_HPP__

#include <cassert>

struct Hex {    // Cube storage, cube constructor
    const int q, r, s;
    Hex(int q_, int r_, int s_) : q(q_), r(r_), s(s_) {
        assert(q + r + s == 0);
    }
    void Draw();
};

struct AxialHex {   // Axial storage, cube constructor
    const int q_, r_;
    AxialHex(int q, int r, int s) : q_(q), r_(r) {
        assert(q + r + s == 0);
    }

    inline int q() { return q_; }
    inline int r() { return r_; }
    inline int s() { return - (q_ + r_); }
};

#endif  // __OTTOCHESS_HEXAGON_HEX_HPP__