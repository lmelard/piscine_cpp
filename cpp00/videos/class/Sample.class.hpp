/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:56:53 by lmelard           #+#    #+#             */
/*   Updated: 2022/12/20 18:40:12 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {
	
	public:
		char	a1;
		int		a2;
		float	a3;
		Sample(char p1, int p2, float p3);
		~Sample(void);
};

#endif