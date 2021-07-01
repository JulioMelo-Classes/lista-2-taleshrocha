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
     * /param first Points to the first element in the array. 
     * /param last Points to the last element in the array. 
     * /param n_first Points to the first element of the new array .
     * /return The last element of the new array.
     */
     /*
     70% blz, a documentação está no formato errado, mas vou considerar pra essa aqui
     a forma que vc escolheu realmente ficou bem complicada...
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
            n_first = last - (dist/3); //não entendi pq tem que ser 1/3 da distancia, suponho que só sirva para o caso de teste específico, vou tirar 30% por isso
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
