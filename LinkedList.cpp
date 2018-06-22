/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 16:31:22 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/20 16:31:23 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LinkedList.hpp"

LinkedList::LinkedList() {
    _sum = 0;
    _Bt = nullptr;
}

LinkedList::~LinkedList() {}

LinkedList::LinkedList(LinkedList const &cpy) { *this = cpy; }

LinkedList& LinkedList::operator=(LinkedList const &rhs) {
    (void)rhs;
    return *this;
}

int LinkedList::addBangToList(ABang* some) {
    if (!_sum && some){
        _Bt = new t_bang;
        _Bt->lst = some;
        _Bt->next = nullptr;
        _sum++;
    }
    else if(_sum && some != nullptr){
        t_bang  *tmp;
        tmp = _Bt;
        while (tmp->next)
            tmp = tmp->next;
        tmp->next = new t_bang;
        tmp->next->lst = some;
        tmp->next->next = nullptr;
        _Bt = tmp;
        _sum++;
    }
    return _sum;
}

void LinkedList::setCoorBullet(int x, int y) {
    t_bang* tmp = _Bt;
    while (tmp->next)
        tmp = tmp->next;
    if (x < tmp->lst->getEndX())
        tmp->lst->setX(x);
    if (y < tmp->lst->getEndY())
        tmp->lst->setY(y);
}