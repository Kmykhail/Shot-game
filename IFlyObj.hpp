/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IFlyObj.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 19:41:29 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/19 19:41:30 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IFLYOBJ_HPP
#define IFLYOBJ_HPP
#include <iostream>
#include <string>

class  IFlyObj{

public:
    virtual ~IFlyObj() {}
    virtual char getSymbolObj() const = 0;
    virtual void    moveY(int y) = 0;
    virtual void    moveX(int x) = 0;
};

#endif