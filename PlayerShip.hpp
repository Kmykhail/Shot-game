/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlayerShip.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 15:06:08 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/20 15:06:09 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYERSHIP_HPP
#define PLAYERSHIP_HPP

#include "AShips.hpp"
#include "Bullet.hpp"

class PlayerShip : public AShips{
private:
    bool _game_over;
public:
    PlayerShip();
    ~PlayerShip();
    PlayerShip(PlayerShip const & cpy);
    PlayerShip &operator=(PlayerShip const & rhs);


    void             setCurLive(int);
    void             setType(int);
    void             setNumLive(int numlive);
    void             setSymb(char sym);
    void             setBang(ABang const & rhs);
    void             takeDamage(ABang const &rhs);
    void             takeColison();
    void             setSum_b(int);
    Bullet           shot();

    bool             getStatusGame() const;

};

#endif