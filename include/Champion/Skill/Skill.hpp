// Copyright (c) 2019 rapsealk

#ifndef __OTTOCHESS_SKILL_HPP__
#define __OTTOCHESS_SKILL_HPP__

namespace OttoChess {

class Skill {
private:
    int m_cost;
public:
    Skill();

    virtual void Invoke();
};

}   // namespace OttoChess

#endif  // __OTTOCHESS_SKILL_HPP__