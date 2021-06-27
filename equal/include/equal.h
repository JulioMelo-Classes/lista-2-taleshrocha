//! \file equal.h
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
     * \brief This function returns true if the elements of both arrays are equal. 
     * \param first1 Points to the beginning of the first array.
     * \param last1 Points to the end of the first array. 
     * \param first2 Points to the beginning of the second array.
     * \param last2 Points to the end of the second array. 
     * \param eq A function that only return true when both of it's arguments are equal.
     */
    template<class InputIt1, class InputIt2, class Equal>
    bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, Equal eq){
        while(first1 != last1){
            if(!eq(*first1, *first2)) return false;
            first1++;
            first2++;
        }
        return true;
    }

    template<class InputIt1, class InputIt2, class Equal>
    bool equal(InputIt1 first1, InputIt1 last1,
               InputIt2 first2, InputIt2 last2,
               Equal eq ){
        while(first1 != last1){
            if(!eq(*first1, *first2)) return false;
            first1++;
            if(first2 != last2) first2++;
        }
        return true;
    }
}
#endif
