/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const_cast.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:43:15 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/09 16:51:08 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* permet de modifier les qualifieurs de types 
** valeurs mutables vs valeurs constantes. Utiliser un const cast dans son code
** n'est pas un bon signe. ca veut dire qu'il vaut mieux revoir son code */

int	main(void)
{
	int	a = 42;				//Reference value
	
	int const * b = &a;						// Implicit promotion -> OK
	int	*		c = b;						// Implicit demotion -> Hell no !
	int	*		d = const_cast<int *>(b);	// Explicit demotion -> OK I obey
}
