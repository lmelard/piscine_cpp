/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:06:49 by lmelard           #+#    #+#             */
/*   Updated: 2022/12/20 19:24:57 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class	Sample
{
	public:
		int		publicFoo;

		Sample(void);
		~Sample(void);

		void	publicBar(void) const;
	
	private:
		int		_privateFoo;

		void	_privateBar(void) const;
};

#endif
