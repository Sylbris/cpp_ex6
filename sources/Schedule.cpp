
#include <iostream>
#include <stdexcept>
#include <vector>
#include "Schedule.hpp"

namespace basket_ball {
   void Schedule::create_game_array_season_1(){
       
   }
   void Schedule::create_game_array_season_2(){

   }
   void Schedule::play_season_1(){
      for(Game* g:_games_season1){
         g->play();
      }
   }
   void Schedule::play_season_2(){
      for(Game* g:_games_season2){
         g->play();
      }
   }
}