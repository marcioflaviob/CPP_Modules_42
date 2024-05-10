/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:36:51 by mbrandao          #+#    #+#             */
/*   Updated: 2024/05/10 16:08:27 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

# include <iostream>

template< typename T >
void	iter(T *array, size_t length, void (*f)(T &))
{
	if (array == NULL || f == NULL)
		return ;
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

#endif