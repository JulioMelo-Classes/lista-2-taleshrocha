//! \file copy.h
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
     * \brief Copy elements from a array to the other and returns a pointer to the end of the copied
     * array
     * \param first A pointer pointing to the beginning of the array.
     * \param last A pointer pointing to the end of the array.
     * \param d_first The beginning of the array which the elements are going to be copied.
     */
    template<class InputIt>
    InputIt copy(InputIt first, InputIt last, InputIt d_first){

        while(first != last){
            *d_first = *first;
            d_first++;
            first++;
        }
        return d_first;
    }
}
#endif
