
#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the rank of new scores
vector<int> climbingLeaderboard(vector<int>& ranked, vector<int>& player) {
    vector<int> result;
    
    // Step 1: Remove duplicates from the ranked leaderboard
    vector<int> uniqueRanked;
    uniqueRanked.push_back(ranked[0]);
    for (int i = 1; i < ranked.size(); ++i) {
        if (ranked[i] != ranked[i - 1]) {
            uniqueRanked.push_back(ranked[i]);
        }
    }

    // Step 2: Start from the bottom of the leaderboard and check each player's score
    int idx = uniqueRanked.size() - 1;
    
    // Step 3: Process each player's score and determine their rank
    for (int score : player) {
        // Move the pointer up the leaderboard until we find the correct rank
        while (idx >= 0 && uniqueRanked[idx] <= score) {
            idx--;
        }
        
        // Rank is idx + 2 because the rank is 1-based (and idx is 0-based)
        result.push_back(idx + 2);
    }

    return result;
}

int main() {
    // Read the leaderboard size and the scores
    int n, m;
    cin >> n; // number of ranked scores
    vector<int> ranked(n);
    for (int i = 0; i < n; ++i) {
        cin >> ranked[i];
    }

    // Read the number of player scores
    cin >> m;
    vector<int> player(m);
    for (int i = 0; i < m; ++i) {
        cin >> player[i];
    }

    // Get the ranks for the player scores
    vector<int> ranks = climbingLeaderboard(ranked, player);

    // Output the ranks
    for (int rank : ranks) {
        cout << rank << endl;
    }

    return 0;
}
