//! \file find.h
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
     * \brief This function returns the pointer for the value of the array which is equal to the
     * value variable.
     * \param first Points to the arrys's first element.
     * \param last Points to the arrys's last element.
     * \param value Value to be compared in the function. 
     * \param Equal A function that return true when both of it's parameter are equal.
     */
     /*
     95%
     */
    template<class InputIt, class T, class Equal>
    InputIt find(InputIt first, InputIt last, const T& value, Equal eq){
        while(first != last){
            if(*first == value) return first;
            first++;
        }
        return last;
    }
}
#endif
