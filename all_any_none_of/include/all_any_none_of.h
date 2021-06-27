/*!
 * \file all_any_none_of.h
 * \brief This code implements the all_of, any_of and none_of functions there are present in
 * the std library.
 * \param first Is the first element of the array.
 * \param last Is the last element of the array.
 * \param p Is a predicate. Can return true or false.
*/

#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

    //! \return True only if all of the array elements return true from the predicate
    template<class InputIt, class UnaryPredicate>
    bool all_of(InputIt first, InputIt last, UnaryPredicate p){
        if(first == last) return false;
        while(first != last){
            if(!p(*first)) return false;
            first++;
        }
        return true;
    }

    //! \return True only if one or more of the array elements return true from the predicate
    template<class InputIt, class UnaryPredicate>
    bool any_of(InputIt first, InputIt last, UnaryPredicate p)
    {
        while(first != last){
            if(p(*first)) return true;
            first++;
        }
        return false;
    }

    //! \return True only if none of the array elements return true from the predicate
    template<class InputIt, class UnaryPredicate>
    bool none_of(InputIt first, InputIt last, UnaryPredicate p)
    {
        while(first != last){
            if(p(*first)) return false;
            first++;
        }
        return true;
    }

}
#endif
