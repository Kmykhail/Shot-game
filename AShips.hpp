/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AShips.hpp                                          :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 19:54:54 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/19 19:54:55 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASHIPS_HPP
#define ASHIPS_HPP
#include "IFlyObj.hpp"
#include "ABang.hpp"

class ABang;

class AShips : public IFlyObj{
protected:
    int     _x;
    int     _y;
    int     _curLive;
    int     _numLive;
    int     _endX;
    int     _endY;
    char    _symb;
    ABang*  _myBang;
public:
    AShips();
    AShips(AShips const & cpy);
    ~AShips();

    void             setEndY_EndX(int endY, int endX);

    void             setCoorX(int x);
    void             setCoorY(int y);
    virtual void     setCurLive(int live) = 0;
    virtual void     setNumLive(int numLive) = 0;
    virtual void     setSymb(char sym) = 0;
    virtual void     setBang(ABang const &) = 0;
    //


    virtual ABang*   shot() = 0;//реализовать выстрел(довить в лист пуль)

    //
    int              getCurLive() const;
    int              getNumLive() const;
    int              getCoorX() const;
    int              getCoorY() const;
    virtual void     takeDamage(ABang const &) = 0;

    char             getSymbolObj() const;
    void             moveY(int y);
    void             moveX(int x);

    AShips  &operator=(AShips const &rhs);
};
#endif