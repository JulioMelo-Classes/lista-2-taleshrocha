//! /file sort.h
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
     * /param first Points to the first element of the array. 
     * /param last Points to the last element of the array. 
     * /param cmp A boolean function. 
     */
     /*
     ok
     */
    template<class ForwardIt, class Comparison>
    void sort(ForwardIt first, ForwardIt last, Comparison cmp){
        auto aux = first+1;
        while(first != last){
            while(aux != last){
                if(cmp(*aux, *first)) std::iter_swap(first, aux);
                aux++;
            }
            first++;
            aux = first+1;
        }
    }
}
#endif
