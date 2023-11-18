#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    string S;
    cin >> S;

    // Sort the string
    sort(S.begin(), S.end());

    // Output the sorted string
    cout << S << endl;

    return 0;
}
