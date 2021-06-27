//! \file rotate.h
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
     * TODO: documentação no estilo doxygen
     */
    template<class ForwardIt>
    ForwardIt rotate(ForwardIt first, ForwardIt n_first, ForwardIt last){
        ForwardIt aux = n_first;
        if(n_first == first) return first;
        while(n_first != last){
            std::iter_swap(n_first++, first++);
        }
        auto dist = distance(first, last) + 1;
        if(!(dist%2)){
            n_first = first+(dist/2);
            while(n_first != last){
                std::iter_swap(n_first++, first++);
            }
            n_first = last - (dist/3);
            while(n_first != last){
                std::iter_swap(n_first++, first++);
            }
        }
        else{
            n_first = first+1;
            while(n_first != last){
                std::iter_swap(n_first++, first++);
            }
        }

        return aux;
    }
}
#endif
