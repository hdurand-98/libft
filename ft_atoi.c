/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 13:18:03 by hdurand           #+#    #+#             */
/*   Updated: 2019/09/05 17:14:52 by hdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(const char *str)
{
	int i;

	i = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || str[i] == '\r'
	|| str[i] == '\f' || str[i] == 32)
		i++;
	return (i);
}

int	r_atoi(const char *strf)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (strf[i] > 47 && strf[i] < 58)
	{
		result = result * 10 + (strf[i] - 48);
		i++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int result;
	int sign;
	int index;

	result = 0;
	sign = 1;
	index = ft_isspace(str);
	while (str[index])
	{
		if (str[index] == '-' || str[index] == '+')
		{
			if (str[index] == '-')
				sign = sign * -1;
			index++;
		}
		if (str[index] > 47 && str[index] < 58)
		{
			result = r_atoi(&str[index]);
			return (result * sign);
		}
		else
			return (0);
	}
	return (0);
}
