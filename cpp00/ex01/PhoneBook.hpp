/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 20:15:17 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/05 13:27:53 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"
# include <iostream>

class	PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		
		int		setContact(int	index);
		Contact	getContact(int index) const;
		void	printContacts(void);
		void	printTab(void);
		
	private:
		Contact	_contact[8];
};

#endif
