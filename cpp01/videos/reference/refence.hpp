/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   refence.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:35:23 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/09 16:24:29 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student
{
	public:
		Student(std::string const &login);
		~Student(void);
		std::string	&getLoginRef(void);
		std::string const	&getLoginRefConst() const;
		std::string	*getLoginPtr();
		std::string const	*getLoginPtrConst() const;
	private:
		std::string	_login;
};