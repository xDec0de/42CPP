/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:34:14 by danimart          #+#    #+#             */
/*   Updated: 2023/12/28 18:50:08 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_H
# define SED_H

# define BRED "\x1B[1;31m"
# define RED "\x1B[0;31m"
# define GRAY "\x1B[0;30m"
# define RESET "\x1B[0m"

# define ARGC_ERR BRED"Usage"GRAY": ./"RED"sed "GRAY"<"RED"file name"GRAY"> <"RED"text to replace"GRAY"> <"RED"replacement"GRAY">"RESET

#endif
