#include <stdio.h>

int main() {
    int votes[3] = {0, 0, 0}; // Votes for a, b, c
    char *flavors[] = {"Chocolate", "Cookies and Cream", "Mint Chocolate Chip"};
    int total_votes = 0;
    char vote;
    
    while (1) {
        // Display voting options
        printf("What is the best ice cream flavor?\n");
        printf("a: %s\n", flavors[0]);
        printf("b: %s\n", flavors[1]);
        printf("c: %s\n", flavors[2]);
        
        // Get user vote
        printf("Enter your vote as letter a, b, or c: ");
        scanf(" %c", &vote); // space before %c to ignore any whitespace
        
        switch (vote) {
            case 'a':
                votes[0]++;
                break;
            case 'b':
                votes[1]++;
                break;
            case 'c':
                votes[2]++;
                break;
            default:
                printf("Invalid vote. Please enter a, b, or c.\n");
                continue; // Skip the rest of the loop
        }
        
        total_votes++;
        
        // Display results
        printf("\nYou are the %dth person to vote in my poll. Right now, the results are as follows.\n", total_votes);
        for (int i = 0; i < 3; i++) {
            float percentage = (total_votes > 0) ? (votes[i] / (float)total_votes) * 100 : 0;
            printf("%s: %d votes - %.2f%%\n", flavors[i], votes[i], percentage);
        }
        
        // Check if there's another voter
        char another;
        printf("\nIs there another voter? Type 'y' for yes: ");
        scanf(" %c", &another);
        if (another != 'y') {
            break;
        }
    }

    return 0;
}
