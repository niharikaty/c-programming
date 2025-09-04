#include <stdio.h>

int main() {
    int vote;
    int candidate1 = 0, candidate2 = 0, candidate3 = 0;
    char choice;

    printf("Voting System");
    printf("-------------");
    printf("Press 1 to vote for Candidate 1");
    printf("Press 2 to vote for Candidate 2");
    printf("Press 3 to vote for Candidate 3");
    printf("Press 'n' to stop voting and show results\n\n");

    while (1) {
        printf("Enter your vote (1/2/3 or 'n' to stop): ");
        scanf(" %c", &choice); 

        if (choice == 'n' || choice == 'N') {
            break;
        }
        vote = choice - '0';
        switch (vote) {
            case 1:
                candidate1++;
                break;
            case 2:
                candidate2++;
                break;
            case 3:
                candidate3++;
                break;
            default:
                printf("Invalid vote. Please enter 1, 2, or 3.\n");
        }
    }

    printf("\nVoting Results:");
    printf("Candidate 1: %d votes", candidate1);
    printf("Candidate 2: %d votes", candidate2);
    printf("Candidate 3: %d votes", candidate3);

    return 0;
}
