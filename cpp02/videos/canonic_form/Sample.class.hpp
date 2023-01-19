/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:19:03 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/19 17:54:43 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

# include <iostream>

class	Sample {
	public:
		Sample(void);
		Sample(int const n);
		Sample(Sample const & src);
		~Sample(void);

		Sample & operator=(Sample const & rhs);
		int	getFoo(void) const;
		
	private:
		int	_foo;
};

std::ostream &	operator<<(std::ostream & o, Sample const & i);

#endif
