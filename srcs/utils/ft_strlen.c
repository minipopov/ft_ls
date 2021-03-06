/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <akarasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 20:59:18 by root              #+#    #+#             */
/*   Updated: 2018/05/24 18:24:44 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *s)
{
	char *e;

	e = s;
	while (*e)
		e++;
	return (e - s);
}
