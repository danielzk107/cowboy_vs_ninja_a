#include <list>
#include <string>
using namespace std;

namespace ariel
{

    class Point
    {
    private:
        double x, y;

    public:
        Point(double x, double y);
        Point();
        double distance(Point other);
        void print();
        bool operator==(const Point &other) const;
    };
    class Character
    {
    private:
        Point location;
        int hp;
        string name;

    public:
        Character();
        Character(string name, Point location, int hp);
        ~Character();
        int getHp();
        bool isAlive();
        double distance(Character other);
        void hit(int damage); // Function that reduces the hitpoints of the character
        string getName();
        Point getLocation();
        string print();
    };
    class Ninja : public Character
    {
    private:
        int speed;

    public:
        Ninja(string name, Point location, int hp, int speed);
        ~Ninja();
        void move(Character *enemy);
        void slash(Character *enemy);
    };
    class YoungNinja : public Ninja
    {
    public:
        YoungNinja(string name, Point location);
        ~YoungNinja();
    };
    class TrainedNinja : public Ninja
    {
    public:
        TrainedNinja(string name, Point location);
        ~TrainedNinja();
    };
    class OldNinja : public Ninja
    {
    public:
        OldNinja(string name, Point location);
        ~OldNinja();
    };
    class Cowboy : public Character
    {
    private:
        int num_of_bullets;

    public:
        Cowboy(string name, Point location);
        ~Cowboy();
        bool hasboolets();
        void reload();
        void shoot(Character *enemy);
    };
    class Team
    {
    private:
        Character *leader;
        std::list<Character> members; // Max 10 members
    public:
        Team(Character *leader);
        ~Team();
        Character *getLeader();
        void add(Character *member);
        int stillAlive();
        void attack(Team *other);
        void print();
    };
    class Team2: public Team{
        public:
            Team2(Character *leader);
            ~Team2();
        void attack(Team *other);
        void print();
    };
    class SmartTeam: public Team{
        public:
            SmartTeam(Character *leader);
            ~SmartTeam();
        void attack(Team *other);
        void print();
    };

};
