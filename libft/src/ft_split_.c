/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:59:21 by jhesso            #+#    #+#             */
/*   Updated: 2022/11/18 10:55:02 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	get_amount_of_words(char const *s, char c)
{
	int	amount;
	int	i;

	amount = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			amount++;
			while (s[i] != c && s[i + 1] != '\0')
				i++;
		}
		i++;
	}
	return (amount);
}

static	int	get_word_len(char const *s, char c, int start)
{
	int	i;
	int	len;

	i = start;
	while (s[i] == c)
		i++;
	len = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char			**ret;
	unsigned int	i;
	unsigned int	row;
	unsigned int	word_count;
	unsigned int	word_length;

	if (s == NULL)
		return (NULL);
	word_count = get_amount_of_words(s, c);
	ret = malloc(sizeof(char *) * (word_count + 1));
	if (ret == NULL)
		return (NULL);
	i = 0;
	row = -1;
	while (++row < word_count)
	{
		word_length = get_word_len(s, c, i);
		while (s[i] == c)
			i++;
		if (s[i] != c)
			ret[row] = ft_substr(s, i, word_length);
		i = i + word_length;
	}
	ret[row] = NULL;
	return (ret);
}

// static char	**allocate_mem(char const *s, char c, int word_amount)
// {
// 	char	**ret;
// 	int		len;
// 	int		i;
// 	int		start;

// 	ret = malloc(sizeof(char **) * (word_amount + 1));
// 	if (ret == NULL)
// 		return (NULL);
// 	i = 0;
// 	start = 0;
// 	while (i < word_amount)
// 	{
// 		while (s[start] == c && s[start] != '\0')
// 			start++;
// 		len = get_str_len(s, c, start);
// 		start = start + len;
// 		ret[i] = malloc(sizeof(char) * len + 1);
// 		if (ret[i] == NULL)
// 			return (NULL);
// 		i++;
// 	}
// 	return (ret);
// }

// static char	**create_string(char const *s, char c, char **ret, int word_amount)
// {
// 	int	row;
// 	int	col;
// 	int	i;

// 	row = 0;
// 	i = 0;
// 	col = 0;
// 	while (s[i] == c)
// 		i++;
// 	while (row < word_amount)
// 	{
// 		if (s[i] == c || s[i] == '\0')
// 		{
// 			ret[row][col] = '\0';
// 			while (s[i] == c && s[i + 1] != '\0')
// 				i++;
// 			row++;
// 			col = 0;
// 		}
// 		if (s[i + 1] == '\0' && s[i] == c)
// 			break ;
// 		if (s[i] != '\0')
// 			ret[row][col++] = s[i++];
// 	}
// 	return (ret);
// }

// char	**ft_split(char const *s, char c)
// {
// 	int		word_amount;
// 	char	**ret;

// 	if (s == NULL)
// 		return (NULL);
// 	word_amount = get_amount_of_words(s, c);
// 	ret = allocate_mem(s, c, word_amount);
// 	ret = create_string(s, c, ret, word_amount);
// 	ret[word_amount] = NULL;
// 	return (ret);
// }
