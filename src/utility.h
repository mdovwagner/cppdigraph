/*
 * utility.h
 */

#ifndef CDG_UTILITY_H
#define CDG_UTILITY_H


namespace cdg {


template<typename T>
struct NameCompare {
  bool operator()(T* lhs, T* rhs) {
    return lhs->getCdgId() < rhs->getCdgId();
  }
};


} // namespace cdg


#endif
