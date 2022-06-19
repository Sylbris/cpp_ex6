#pragma once
#include <iostream>
#include <stdexcept>
#include <vector>


namespace basket_ball {
    class Team {
        std::string _name;
        double _talent_level;
        int _wins = 0;
        int _loses = 0;
        int _out_score = 0;
        int _in_score = 0;
        int _win_streak = 0;
        int _lose_streak = 0;

        public:
        //Constructor with default settings.
        Team(std::string name): _name(name){
            _talent_level = 1;
        }
        double get_talent_lvl(){
            return _talent_level;
        }
    };
}