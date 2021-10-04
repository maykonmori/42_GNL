/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjose-ye <mjose-ye@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 20:12:21 by mjose-ye          #+#    #+#             */
/*   Updated: 2021/09/29 20:55:12 by mjose-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H_BONUS
# define GET_NEXT_LINE_H_BONUS

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <stdlib.h>
# include <unistd.h>

# ifndef OPEN_MAX
#  define OPEN_MAX 256
# endif

/**
 * @brief 	Function returns the length of STR.
 *
 * @param str string to be counted.
 * @return length of the STR.
 */
size_t	ft_strlen(const char *str);

/**
 * @brief Function locates the first N in the STR.
 *
 * @param str to be search
 * @param n to be find
 * @return the address of the first N.
 */
char	*ft_strchr(const char *str, int n);

/**
 * @brief Copy the STR to a new pointer.
 *
 * @param s1 the string to be copied.
 * @return a new address with the same string of str.
 */
char	*ft_strdup(const char *s1);

/**
 * @brief Copy the S1 concatenate with S2.
 *
 * @param s1 string to start the new string.
 * @param s2 string to end the new string.
 * @return new address with the s1 + s2.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Copy the from the (S + START) to (LEN).
 *
 * @param s the address of the start of the string
 * @param start start the copy from here.
 * @param len number of the bytes to be copied.
 * @return a new address to with the copy.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*get_next_line(int fd);

#endif
