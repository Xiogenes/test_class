#ifndef _PLAYER_H
#define _PLAYER_H

class Player {
    public:
        string name;
        int health;
        int level;
        int xp;

        void critical_health(int health) {

            if (health <= 50) {
                cout << "You are critically injured! Find cover!" << endl;
            }
            else {
                cout << "You are still above 50\% health! Keep pushing!" << endl;
            }
        }

};

#endif