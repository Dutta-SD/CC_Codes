#include <bits/stdc++.h>
using namespace std;

int main() {
  int numParticipants, k, k_score = 0, numQualified = 0;
  cin >> numParticipants >> k;

  for (int idx = 0; idx < numParticipants; idx++) {
    int currParticipantScore;
    cin >> currParticipantScore;

    if (currParticipantScore >= k_score && currParticipantScore > 0)
      numQualified++;
    else
      break;

    if (idx == k - 1)
      k_score = currParticipantScore;
  }

  cout << numQualified << endl;
  return 0;
}