/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:44:39 by lmelard           #+#    #+#             */
/*   Updated: 2022/12/21 15:47:02 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP


class Sample {
	public:
		Sample(void);
		~Sample(void);
		
		static int	getNbInst(void);
	
	private:

		static int	_nbInst;
};


#endif