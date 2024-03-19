/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 21:57:12 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/19 23:49:43 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_L
# define HARL_L

# include <iostream>

# define DEFAULT "\e[0;97m"
# define GREEN "\e[0;92m"
# define YELLOW "\e[0;93m"
# define ORANGE "\e[0;91m"
# define RED "\e[0;31m"
# define BLUE "\e[0;94m"


class Harl {

private:

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

public:

	Harl(void);
	~Harl(void);

	void complain( std::string level );

};

typedef void (Harl:: * function_t) ( void );

#endif