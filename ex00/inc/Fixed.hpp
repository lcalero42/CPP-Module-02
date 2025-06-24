/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 11:23:58 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/19 17:38:47 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <iomanip>

class Fixed
{
	public:
	
	//Default constructor/destructor
	Fixed();
	~Fixed();	

	//copy constructor function
	Fixed( const Fixed &other );
	//copy assignment operator function
	Fixed &operator=( const Fixed &other );

	//main logic functions
	int 	getRawBits( void ) const;
	void	setRawBits( int const raw );

	private:

	int					fixedValue;
	static const int	nbBits = 8;
	
};

#endif