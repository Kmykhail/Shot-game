/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Spaces.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 10:57:43 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/24 10:57:46 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Spaces.hpp"

Spaces::Spaces() : _sym('.'){
}

Spaces::~Spaces() {}

Spaces::Spaces(Spaces const &cpy) { *this = cpy; }

Spaces& Spaces::operator=(Spaces const &rhs) {
    this->_x = rhs.getX();
    this->_y = rhs.getY();
    return *this;
}

char Spaces::getSymbolObj() const { return this->_sym; }
void Spaces::moveY(int y) { _y =y; }
void Spaces::moveX(int x) { _x = x; }

int Spaces::getY() const { return this->_y; }
int Spaces::getX() const { return  this->_x; }
