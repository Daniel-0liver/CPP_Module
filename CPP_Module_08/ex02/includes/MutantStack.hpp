/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 00:46:22 by dateixei          #+#    #+#             */
/*   Updated: 2024/09/09 01:54:49 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <string>
#include <list>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public :
        MutantStack() : std::stack<T, Container>() {}
        MutantStack(Container c) : std::stack<T, Container>(c) {}
        ~MutantStack() {}

        MutantStack& operator = (const MutantStack& copy) {
			this->c = copy.c;
			return *this;
		}

        typedef typename Container::iterator iterator;
        typedef typename Container::const_iterator const_iterator;
        typedef typename Container::reverse_iterator reverse_iterator;
        typedef typename Container::const_reverse_iterator const_reverse_iterator;

        iterator				begin() {return this->c.begin();}
        iterator				end() {return this->c.end();}
		const_iterator			begin() const {return this->c.begin();}
        const_iterator			end() const {return this->c.end();}
		reverse_iterator		rbegin() {return this->c.rbegin();}
        reverse_iterator		rend() {return this->c.rend();}
		const_reverse_iterator	rbegin() const {return this->c.rbegin();}
        const_reverse_iterator	rend() const {return this->c.rend();}
};