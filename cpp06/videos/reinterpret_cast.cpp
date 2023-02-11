/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reinterpret_cast.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:24:17 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/11 15:44:03 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	float	a = 420.042f;

	void * b = &a;
	int	*	c = reinterpret_cast<int *>(b);
	int & d = reinterpret_cast<int &>(b);

	return (0);
}

/* cas commun : les retypage. x une donne d'un reseau flux d'octets dans un buffer.
reinterpret cast en char *  on peut utiliser notre suite d'octet sous forme d'un char*
permet de retyper une donnee dont in avait perdu l'information de type*/
/* faire bien gaffe a ne pas l'utiliser pour tout */