/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 11:51:08 by cbarbier          #+#    #+#             */
/*   Updated: 2017/02/02 11:53:02 by cbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_memswap(void **a, void **b)
{
	void	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}