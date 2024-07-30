/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 22:35:22 by mbrandao          #+#    #+#             */
/*   Updated: 2024/07/28 22:35:58 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <deque>
#include <stack>
#include <string>
#include <list>

template<typename T>
class   MutantStack : public std::stack<T> {
    
    public:
        MutantStack( void ) {

            return ;
        }
        MutantStack( MutantStack const & src ) {

            *this = src;
            return ;
        }
        virtual ~MutantStack( void ) {
            
            return ;
        }

        MutantStack  &operator=( MutantStack const &src ) {
            
            this->c = src.c;   
            return (*this);
        }

        typedef typename std::deque<T>::iterator iterator;

        iterator begin() {

            return (this->c.begin());
        }
        iterator end() {

            return (this->c.end());
        }
};

#endif