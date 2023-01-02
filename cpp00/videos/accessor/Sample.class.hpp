/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:48:35 by lmelard           #+#    #+#             */
/*   Updated: 2022/12/21 14:50:33 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
	public:
		Sample(void);
		~Sample(void);

		int		getFoo(void)const;
		void	setFoo(int v);

	private:
		int		_foo;
};

#endif