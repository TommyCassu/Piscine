/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nitadros <nitadros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:59:40 by nitadros          #+#    #+#             */
/*   Updated: 2024/09/21 23:19:35 by nitadros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_H
# define INCLUDE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_dict
{
	const char	*dict;
}	t_dict;

t_dict	*get_dict_instance(void);
int		ft_str_is_numeric(char *str);
char	*search_and_print_line(const char *filename, char *search_str);
char	*read_line_from_file(int fd, char *buffer, int *line_number);
int		ft_strlen(char *str);
char	*select_string(char *argv);
char	*select_string_bckp(char *argv);
char	*ft_strstr(char *str, char *to_find);
int		cut_result(const char *filename, char *search_str);
void	print_result(char *str, int i, int len);
void	centaine(int i, char *b, char *str);
void	dizaine(int i, char *b, char *str);
void	unit(int i, char *b, char *str);
void	llions(char *res, int *k, char *str, int i);
int		errormessage(int ac, char **av, const char *dict, int x);
int		errormessage2(char **av, const char *dict);
int		errormessage1(char **av, const char *dict);
char	*stripe(char *av);
char	*init(char *b, int i, char *str);
char	*init2(char *b, int i, char *str);
void	act(char **av, int len, int i);

#endif