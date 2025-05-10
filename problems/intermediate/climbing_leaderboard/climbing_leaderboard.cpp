
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to calculate the rank of new scores
vector<int> climbingLeaderboard(vector<int>& ranked, vector<int>& player) {
    vector<int> result;
    
    // Remove duplicates from the ranked leaderboard
    vector<int> uniqueRanked;
    for (int i = 0; i < ranked.size(); ++i) {
        if (i == 0 || ranked[i] != ranked[i - 1]) {
            uniqueRanked.push_back(ranked[i]);
        }
    }

    int n = uniqueRanked.size();
    int idx = n - 1;

    // Process each player's score and determine their rank
    for (int score : player) {
        // Traverse the ranked array to find the correct rank
        while (idx >= 0 && uniqueRanked[idx] <= score) {
            idx--;
        }
        result.push_back(idx + 2); // Rank is idx + 2 (because rank starts from 1)
    }

    return result;
}

int main() {
    // Example input
    vector<int> ranked = {100, 90, 90, 85, 80};
    vector<int> player = {70, 80, 105};

    // Get the ranks for the player scores
    vector<int> ranks = climbingLeaderboard(ranked, player);

    // Output the ranks
    for (int rank : ranks) {
        cout << rank << endl;
    }

    return 0;
}
