/**
 * Test file for the exercise on iterators
 *
 * @author Tal Zichlinsky
 * @since 2022-05
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "doctest.h"
#include <vector>

#include "Team.hpp"
#include "Game.hpp"
#include "Schedule.hpp"
#include "League.hpp"
using namespace basket_ball;

TEST_CASE("Basic Operations"){
    std::vector<Team*> myTeams;
    myTeams.push_back(new Team("Golden State Warriors", 1));
    myTeams.push_back(new Team("Boston Celtics", 0.4));
    myTeams.push_back(new Team("Brooklyn Nets", 0.5));
    myTeams.push_back(new Team("Denver Nuggets", 0.3));
    myTeams.push_back(new Team("Philadelphia 76ers", 0.4));
    myTeams.push_back(new Team("Minnesota Timberwolves", 0.5));
    myTeams.push_back(new Team("Chicago Bulls", 0.3));
    myTeams.push_back(new Team("Portland Trail Blazers", 0.2));
    myTeams.push_back(new Team("LA Clippers", 0.5));
    myTeams.push_back(new Team("Los Angeles Lakers", 1));
    myTeams.push_back(new Team("Milwaukee Bucks", 0.7));
    myTeams.push_back(new Team("Atlanta Hawks", 0.3));
    myTeams.push_back(new Team("Charlotte Hornets", 0.2));
    myTeams.push_back(new Team("Miami Heat", 0.6));
    myTeams.push_back(new Team("Phoenix Suns", 0.8));
    myTeams.push_back(new Team("Dallas Mavericks", 0.6));
    myTeams.push_back(new Team("Memphis Grizzlies", 0.5));
    myTeams.push_back(new Team("Utah Jazz", 0.3));
    myTeams.push_back(new Team("Washington Wizards", 0));
    myTeams.push_back(new Team("Oklahoma City Thunder", 0.1));

    // Create a leauge
    Leauge league(myTeams);

    //Schedule
    Schedule schedule(league);
    schedule.play_round_a();
    schedule.play_round_b();

    //Season is over
    //Display 5 most leading teams.
    schedule.display_leading_teams(5);
    schedule.display_longest_winstreak();
    schedule.display_longest_losestreak();
    schedule.display_positive_score_teams();
    schedule.display_strongest_home_teams(5);
    schedule.display_strongest_guest_teams(5);
}