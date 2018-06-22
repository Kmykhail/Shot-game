/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlayerShip.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 15:09:32 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/20 15:09:33 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlayerShip.hpp"


PlayerShip::PlayerShip() {
    _game_over = false;
    this->setCurLive(30);
    this->setNumLive(3);
    this->setSymb('W');
    this->setCoorY(10);//ЗНАЧЕНИЕ С ВОЗДУХА
    this->setCoorX(50);//ЗНАЧЕНИЕ С ВОЗДУХА
}

PlayerShip::~PlayerShip() {}

PlayerShip::PlayerShip(PlayerShip const &cpy) { *this = cpy; }

PlayerShip& PlayerShip::operator=(PlayerShip const &rhs) {
    _x = rhs.getCoorX();
    _y = rhs.getCoorY();
    _curLive = getCurLive();
    _numLive = getNumLive();
    _endX = rhs._endX;
    _endY = rhs._endY;
    _symb = rhs.getSymbolObj();
    return *this;
}

ABang* PlayerShip::shot() {
    ABang* bang = new Bullet;
    return bang;
}

void PlayerShip::setCurLive(int live) { _curLive = live; }
void PlayerShip::setNumLive(int numlive) { _numLive = numlive; }
void PlayerShip::setSymb(char sym) { _symb = sym; }
void PlayerShip::setBang(ABang const &rhs) {
    _myBang->setSymb(rhs.getSymbolObj());
    _myBang->setHit(rhs.getHit());
    _myBang->setType(rhs.getType());
    _myBang->setX(rhs.getX());
    _myBang->setY(rhs.getY());
}

bool PlayerShip::getStatusGame() const { return this->_game_over; }

void PlayerShip::takeDamage(ABang const &rhs) {
    _curLive -= rhs.getHit();
    _numLive -= (_curLive <= 0) ? 1 : 0;
    if (_numLive <= 0)
        _game_over = true;
}