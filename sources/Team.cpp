#include "Team.hpp"
#include <string>
using namespace ariel;
using namespace std;

Point::Point(double x, double y)
{
    (*this).x = x;
    (*this).y = y;
}
Point::Point()
{
}
double Point::distance(Point other)
{
    return 0;
}
void Point::print()
{
}
bool Point::operator==(const Point &other) const{
    return x ==other.x && y ==other.y;
}

Character::Character(string name, Point location, int hp)
{
}
Character::Character()
{
}
Character::~Character()
{
}
bool Character::isAlive()
{
    return true;
}
double Character::distance(Character other)
{
    return location.distance(other.location);
}
void Character::hit(int damage)
{
}
string Character::getName()
{
    return "";
}
Point Character::getLocation()
{
    return location;
}
string Character::print()
{
    return " ";
}
int Character::getHp()
{
    return hp;
}

Ninja::Ninja(string name, Point location, int hp, int speed) : Character(name, location, hp)
{
}
Ninja::~Ninja()
{
}
void Ninja::move(Character *enemy)
{
}
void Ninja::slash(Character *enemy)
{
}

YoungNinja::YoungNinja(string name, Point location) : Ninja(name, location, 100, 14)
{
}
YoungNinja::~YoungNinja()
{
}

TrainedNinja::TrainedNinja(string name, Point location) : Ninja(name, location, 120, 12)
{
}
TrainedNinja::~TrainedNinja()
{
}

OldNinja::OldNinja(string name, Point location) : Ninja(name, location, 150, 8)
{
}
OldNinja::~OldNinja()
{
}

Cowboy::Cowboy(string name, Point location) : Character(name, location, 110)
{
}
Cowboy::~Cowboy()
{
}
bool Cowboy::hasboolets()
{
    return true;
}
void Cowboy::reload()
{
}
void Cowboy::shoot(Character *enemy)
{
}

Team::Team(Character *leader)
{
}
Team::~Team()
{
}
Character* Team::getLeader()
{
    return leader;
}
void Team::add(Character *member)
{
}
int Team::stillAlive()
{
    return 0;
}
void Team::attack(Team *other)
{
}
void Team::print()
{
}

Team2::Team2(Character *leader) : Team(leader)
{
}
Team2::~Team2()
{
}
void Team2::attack(Team *other)
{
}
void Team2::print()
{
}

SmartTeam::SmartTeam(Character *leader) : Team(leader)
{
}
SmartTeam::~SmartTeam()
{
}
void SmartTeam::attack(Team *other)
{
}
void SmartTeam::print()
{
}