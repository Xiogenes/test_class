#include "main.h"
#include "player.h"

int main(int argv, char **argc, char **envp) {

    Player micah;

    micah.name = "Xiogenes";
    micah.health = 77;
    micah.level = 97;
    micah.xp = 1321;

    micah.critical_health(micah.health);

    return 0;
}

// void critical_health(int health) {

//     if(health <= 50) {
//         cout << "You are critically injured! Find cover!";
//     } else {
//         cout << "You are still above 50\% health! Keep pushing!";
//     }
// }