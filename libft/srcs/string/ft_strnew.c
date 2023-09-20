/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:20:34 by nshahid           #+#    #+#             */
/*   Updated: 2023/08/26 10:38:41 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strnew function allocates memory for a new string of a
** specified size.
**
** Parameters:
** n - The size of the new string, excluding the null-terminator.
**
** Return:
** A pointer to the newly allocated string, or NULL if memory
** allocation fails.
**
** Description:
** The ft_strnew function takes a size_t 'n' as its parameter and
** allocates memory to create a new string of size 'n' characters.
** It adds an additional character for the null-terminator to
** ensure proper termination. The allocated memory is initialized
** with '\0' characters.
**
** The function calculates the required memory size by multiplying
** 'n' by the size of a character and adding space for the null-
** terminator. It uses malloc to allocate memory. If allocation
** fails, the function returns NULL.
**
** If successful, the function returns a pointer to the newly
** allocated memory block. Deallocate the memory with free when
** no longer needed.
**
** Example:
** char *new_str = ft_strnew(10);
** if (new_str) { // of size 10+1.
**     strcpy(new_str, "Hello, world");
**     free(new_str); // Deallocate memory when done.
** }
*/

char	*ft_strnew(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}
