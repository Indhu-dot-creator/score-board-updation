#include <stdio.h>
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }
}

int main() {
    struct Player players[MAX_PLAYERS];
    int numPlayers = 0;
    char name[MAX_NAME_LENGTH];
    int scoreChange;

    // Input the number of players
    printf("Enter the number of players: ");
    scanf("%d", &numPlayers);

    // Input player details
    printf("Enter player details:\n");
    for (int i = 0; i < numPlayers; i++) {
        printf("Player %d name: ", i + 1);
        scanf("%s", players[i].name);
        players[i].score = 0; // Initialize score to 0
    }

    // Example of adding a new player
    printf("Enter a new player name to add: ");
    scanf("%s", name);
    addPlayer(players, &numPlayers, name);

    // Example of updating scores
    printf("Enter player name to update score: ");
    scanf("%s", name);
    printf("Enter score change: ");
    scanf("%d", &scoreChange);
    updateScore(players, numPlayers, name, scoreChange);

    // Sort the scoreboard by score
    sortScoreboard(players, numPlayers);

    // Display the updated scoreboard
    displayScoreboard(players, numPlayers);

    return 0;
}