/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnemyShip.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 16:02:57 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/20 16:02:58 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMYSHIP_HPP
#define ENEMYSHIP_HPP

#include "AShips.hpp"
#include "Bullet.hpp"

class EnemyShip : public AShips{
public:
    EnemyShip();
    ~EnemyShip();
    EnemyShip(EnemyShip const & cpy);
    EnemyShip &operator=(EnemyShip const & rhs);

    void             setType(int);
    void             setCurLive(int live);
    void             setNumLive(int numlive);
    void             setSymb(char sym);
    void             setBang(ABang const & rhs);
    void             takeDamage(ABang const &rhs);
    Bullet           shot(int);
};
#endif