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
     * \param Equal A boolean function.
     * \return A pointer to the last element that makes the Equal function false.
     */
     /*
     ok
     */
    template<class InputIt, class Equal>
    InputIt unique( InputIt first, InputIt last, Equal eq ){
        last--;
        auto aux = last-1;
        bool allDif = true;
        while(last != first){
            while(aux != first-1){
                if(eq(*aux, *last)) allDif = false;
                //std::cout << *aux << " " << *last << std::endl;
                aux--;
            }
            if(allDif){
                //std::cout << "Resultado: " << *last << std::endl;
                return last;
            }
            allDif = true;
            last--;
            aux = last-1;
        }
        return last;
    }
}
#endif
