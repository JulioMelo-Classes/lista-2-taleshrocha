// \file find_if.h
#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

    /*! 
     * \brief This function return the first element in the array that makes the predicate return
     * true.
     * \param first points to the first element of the array.
     * \param last points to the last element of the array.
     * \param p A boolean function.
     */
     /*
     95%
     */
    template<class InputIt, class UnaryPredicate>
    InputIt find_if(InputIt first, InputIt last, UnaryPredicate p){
        while(first != last){
            if(p(*first)) return first;
            first++;
        }
        return last;
    }
}
#endif
