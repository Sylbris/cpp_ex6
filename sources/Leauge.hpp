#pragma once
#include <iostream>
#include <stdexcept>
#include <vector>
#include "Team.hpp"

namespace basket_ball {
    class Leauge {
        std::vector<Team*> _teams;
        public:
            //Constructor with default settings.
            Leauge(std::vector<Team*> teams): _teams(teams){
            }

            Team* get_team_by_index(int i){
                return _teams[(size_t)i];
            }
            
            int num_of_teams(){
                return _teams.size();
            }
    };
}