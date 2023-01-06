/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 20:15:17 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/06 15:13:29 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>
# include <limits>
# include <cstdlib>

class	PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		
		int		setContact(int	index);
		Contact	getContact(int index) const; // en prive ?
		int		printContacts(void) const;
		void	printTab(void) const;
		size_t	countContacts(void) const;
		
	private:
		Contact	_contact[8];
};

#endif
