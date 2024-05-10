/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:12:00 by mbrandao          #+#    #+#             */
/*   Updated: 2024/05/10 14:27:09 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

# include <iostream>


template< typename T > //The template needs to be called before each function
void swap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template< typename T >
const T	&max(T &a, T &b) {
	return (a >= b ? a : b);
}

template< typename T >
const T	&min(T &a, T &b) {
	return (a <= b ? a : b);
}

#endif