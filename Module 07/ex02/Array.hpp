/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:26:22 by mbrandao          #+#    #+#             */
/*   Updated: 2024/05/10 17:50:12 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>
# include <string>

template< typename T >
class Array {

	public:
		Array(): size(0) {
			std::cout << "Constructor called, empty array created." << std::endl;
			this->array = new T[this.size];
		};
		
		Array( unsigned int a ): size(a) {
			std::cout << "Constructor called, array created." << std::endl;
			this->array = new T[this.size];
		};
		
		Array(const Array &src): size(src.size()) {
			std::cout << "Copy Constructor called" << std::endl;
			this->array = NULL;
			*this = src;
		}

		~Array() {
			std::cout << "Destructor called" << std::endl;
			if (this->array != NULL)
				delete [] this->array;
		}

		Array &operator=(const Array &src)
		{
			if (this->array != NULL)
				delete [] this->array;
			if (src.size() != 0) {
				this->size = src.size();
				this->array = new T[this->size];
				for (unsigned int i = 0; i < this->size(); i++)
					this->array[i] = src.array[i];
			}
			return (*this);
		}

		T &operator[]( unsigned int index )
		{
			if (index >= this->size || this->array == NULL) {
				throw Array<T>::OutOfBoundsException();
			}
			return (this->array[index]);
		}
		
		class	OutOfBoundsException : public std::exception {
		public:
			virtual const char* what() const throw() {
					return ("Index out of bounds.");
				};
		};

		unsigned int size() const {
			return (this->size);
		}

	private:
		T	*array;
		unsigned int size;
	
};

#endif