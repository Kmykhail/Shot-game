/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AShips.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 20:59:15 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/19 20:59:16 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AShips.hpp"

AShips::AShips() { _myBang = nullptr; }

AShips::~AShips() {}

AShips::AShips(AShips const &cpy) { *this = cpy; }

AShips& AShips::operator=(AShips const &rhs) {
    _x = rhs.getCoorX();
    _y = rhs.getCoorY();
    _curLive = rhs.getCurLive();
    _numLive = rhs.getNumLive();
    _symb = rhs.getSymbolObj();
    return *this;
}

void AShips::setEndY_EndX(int endY, int endX) {
    _endY = endY;
    _endX = endX;
}

void AShips::setCoorX(int x) {
    if (x < _endX)
        _x = x;
}

void AShips::setCoorY(int y) {
    if (y < _endY)
        _y = y;
}

int AShips::getCurLive() const { return this->_curLive; }
char AShips::getSymbolObj() const { return this->_symb; }
int AShips::getNumLive() const { return this->_numLive; }
int AShips::getCoorX() const { return this->_x; }
int AShips::getCoorY() const { return  this->_y; }

void AShips::moveY(int y) {
    if (_y + y < _endY)
        _y += y;
}

void AShips::moveX(int x) {
    if (_x + x < _endX)
        _x += x;
}
