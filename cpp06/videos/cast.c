/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:04:36 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/09 13:30:07 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	dump_32bits_integer(int const n);
void	dump_64bits_double( double const z );

/* ************************************************************************** */

int	main(void)
{
	int	a = 42; 				// reference value

	double	b = a;				// implicit conversion cast, double notation scientifiaue comme les float signe exposant mantis
	double	c = (double)a;		// explicit conversion cast
	
	double	d = a;				// implicit promotion ok 
	int		e = d;				// implicit demotion hazardous
	int		f = (int)d;			//

	dump_32bits_integer(a);
	
	dump_64bits_double(b);
	dump_64bits_double(c);
	
	dump_64bits_double(d);
	dump_32bits_integer(e);
	dump_32bits_integer(f);
}


//conversitir un type plus precis (double) vers un type moins precis (int) -> perte de precision si plusieurs calculs
// d'affiler on peut exploser la marge d'erreur entrela valeur qu'on aurait du avoir et la valeur obtenue a la fin

// atention a la perte de precision