/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameObject.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 19:46:23 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/20 19:46:24 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "LinkedList.hpp"
#include "AShips.hpp"
#include "PlayerShip.hpp"
#include "EnemyShip.hpp"
#include "Bullet.hpp"
#include "ncurses.h"
#include <unistd.h>
#include <sys/time.h>

#define HEIGHT 20
#define WIDTH  100

class  GameObject{

private:
    ABang*      _bull;
    AShips*      _pl;
    AShips*      _enm;
    WINDOW*         _win;
    const int       _height;
    const int       _width;
    struct timeval  _time_start;

public:
    GameObject();
    ~GameObject();

    int     init_game();
    void    createWindow();
    int     start_game();
    void    mamoreEnemy();
};