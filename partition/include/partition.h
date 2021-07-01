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
     * \param p Is a predicate.
     * \return A pointer to the element after the last element that made the predicate true.
     */
     /*
     ok
     */
    template<class ForwardIt, class UnaryPredicate>
    ForwardIt partition(ForwardIt first, ForwardIt last, UnaryPredicate p){
        first = std::find_if_not(first, last, p);
        ForwardIt next = first + 1;
        if(first == last) return last;
        while(next != last){
            if(p(*next)){std::iter_swap(next, first); first++;} //não é lá a melhor forma de indentação, como são dois comandos o melhor é usar uns \n
            next++;
        }
        return first;
    }
}
#endif
