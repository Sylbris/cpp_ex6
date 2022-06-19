#pragma once
#include <iostream>
#include <stdexcept>
#include <vector>
#include "Leauge.hpp"
#include "Game.hpp"

namespace basket_ball {
    class Schedule {
        Leauge& _leauge;

        std::vector<Game*> _games_season1;
        std::vector<Game*> _games_season2;

        std::vector<Team *> _group1;
        std::vector<Team *> _group2;
        public:
        //Constructor with default settings.
        Schedule(Leauge& leauge): _leauge(leauge){
            int num_days = leauge.num_of_teams() -1;
            int halfSize = num_days / 2;
            
            std::vector<int> teams;
            for(int i=0;i<20;i++){
                teams[(size_t)i] = i;
            }

            teams.erase(teams.begin());
            int teamsSize = teams.size();

            for (int day = 0; day < num_days; day++)
                {
                    int teamIdx = day % teamsSize;

                    Team& t_1 = *(leauge.get_team_by_index(teams[(size_t)teamIdx]));
                    Team& t_2 = *(leauge.get_team_by_index(0));

                    Game* game= new Game(t_1, t_2);
                    Game* game_season2= new Game(t_2, t_1);

                    _games_season1.push_back(game);
                    _games_season2.push_back(game_season2);

                    for (int idx = 1; idx < halfSize; idx++)
                    {               
                        int firstTeam = (day + idx) % teamsSize;
                        int secondTeam = (day  + teamsSize - idx) % teamsSize;

                        Team& t1 = *(leauge.get_team_by_index(teams[(size_t)firstTeam]));
                        Team& t2 = *(leauge.get_team_by_index(teams[(size_t)secondTeam]));

                        Game* game1 = new Game(t1, t2);
                        Game* game1_season2 = new Game(t2, t1);

                        _games_season1.push_back(game1);
                        _games_season2.push_back(game1_season2);
                       
                    }
                }
        }
        void create_game_array_season_1();
        void create_game_array_season_2();

        void play_season_1();
        void play_season_2();
    };
}