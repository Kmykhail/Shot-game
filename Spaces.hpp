/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Spaces.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 10:57:37 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/24 10:57:39 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPACES_HPP
#define SPACES_HPP
#include "IFlyObj.hpp"

class Spaces : public IFlyObj{
private:
    int    _x;
    int    _y;
    char   _sym;
public:
    Spaces();
    ~Spaces();
    Spaces(Spaces const & cpy);
    Spaces &operator=(Spaces const & rhs);

    char    getSymbolObj() const;
    void    moveY(int y);
    void    moveX(int x);


    int     getX() const;
    int     getY() const;
};

#endif