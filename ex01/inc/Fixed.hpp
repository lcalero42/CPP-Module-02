/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 16:28:01 by lcalero           #+#    #+#             */
/*   Updated: 2025/10/31 17:35:13 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

class Fixed
{
	private:

	int _rawBits;
    static const int _fractionalBits = 8; // Same variable for each object
	
	public:

	// Default constructor/destructor
	Fixed();
	~Fixed();
	Fixed(const int param);
	Fixed(const float param);

	//copy constructor function
	Fixed( const Fixed &other );
	//copy assignment operator function
	Fixed &operator=( const Fixed &other );
	
	friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
	//Main logic functions
	int 	getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
	
};

#endif