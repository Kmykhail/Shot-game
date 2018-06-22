/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameObject.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 19:46:27 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/20 19:46:28 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "GameObject.hpp"

GameObject::GameObject() : _height(HEIGHT), _width(WIDTH) {
    _pl = new PlayerShip();
    _enm = new EnemyShip();
    _bull = new Bullet();

    init_game();
}

GameObject::~GameObject() {
    nodelay(stdscr, false);
    getch();
    endwin();
}

void GameObject::createWindow() {
    _win = newwin(_height, _width, 5, 5);
    box(_win, 0, 0);
    wrefresh(_win);
    //refresh();
    //getch();
}

int GameObject::init_game() {
    initscr();
    int ch;
    noecho();

    curs_set(0);
    timeout(0);
    cbreak();
    keypad(stdscr, true);
    gettimeofday(&_time_start, NULL);
    refresh();
    createWindow();
    return 0;
}

int GameObject::start_game() {
    return 0;
}
