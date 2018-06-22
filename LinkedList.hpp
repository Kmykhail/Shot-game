/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 16:31:06 by kmykhail          #+#    #+#             */
/*   Updated: 2018/06/20 16:31:07 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include "AShips.hpp"
#include "Bullet.hpp"

class LinkedList {

    typedef struct  s_bang{
        ABang       *lst;
        s_bang      *next;
    }               t_bang;
private:
    int     _sum;
    t_bang  *_Bt;
public:
    LinkedList();
    LinkedList(LinkedList const & cpy);
    ~LinkedList();

    int     addBangToList(ABang* some);
    void    setCoorBullet(int x, int y);
    LinkedList &operator=(LinkedList const & rhs);
};
#endif