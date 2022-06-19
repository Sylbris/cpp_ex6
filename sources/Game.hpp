#pragma once
#include <iostream>
#include <stdexcept>
#include <vector>
#include <Team.hpp>
#include <Generator.hpp>

namespace basket_ball {
    class Game {
        std::string _name;
        Team& _home;
        Team& _guest;
        int _home_score;
        int _guest_score;

        public:
        //Constructor with default settings.
        Game(Team& home, Team& guest): _home(home), _guest(guest){
            
        }
        void play();
    };
}