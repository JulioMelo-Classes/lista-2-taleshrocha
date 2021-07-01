//! \file reverse.h
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
     * \param first Points to the first element of the array.
     * \param last Points to the last element of the array.
     */
     /*
     ok
     */
    template<class BidirIt>
    void reverse(BidirIt first, BidirIt last){
        auto dist = distance(first, last);
        last--;
        if(!(dist%2)){
            for(int i = 0; i < dist/2; ++i){
                std::iter_swap(first++, last--);
            }
        }
        else{
            while(first != last and first != last-1 and first != 0)
                std::iter_swap(first++, last--);
        }
    }
}
#endif
