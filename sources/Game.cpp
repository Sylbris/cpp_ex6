
#include <iostream>
#include <stdexcept>
#include <vector>
#include "Game.hpp"
#include <random>

namespace basket_ball {
    void Game::play(){
        Generator g1(75, 6, 50, 100);
        _guest_score = g1();
        _guest_score += _guest.get_talent_lvl()*10;
        Generator g2(78, 6, 55, 100);
        _home_score = g2();
        _home_score += _home.get_talent_lvl()*10;
    }
}