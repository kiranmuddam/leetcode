#include <iostream>
#include <vector>

using namespace std;

int main(int argv, char *argc[]) {
int N, K;
vector<int> inputArray;

cin >> N >> K;

for (int i = 0; i < N; i++) {
    int currentInt;
    cin >> currentInt;
    inputArray.push_back(currentInt);
}

int windowStart = 0, windowEnd = 0, windowSum = 0, startIndex = 0, endIndex = 0, maxWindowSum = 0;

for (windowEnd = 0; windowEnd < inputArray.size(); windowEnd++) {
    windowSum += inputArray[windowEnd];

    if ((windowEnd - windowStart + 1) == K) {
        if (windowSum > maxWindowSum ) {
            maxWindowSum = windowSum;
            startIndex = windowStart;
            endIndex = windowEnd;
        }
        windowSum -= inputArray[windowStart];
        windowStart++;
    }
}

cout << "[" ;
cout << inputArray[startIndex];
for (int i = startIndex + 1; i <= endIndex ; i++) {
	cout << ", " << inputArray[i];
}
cout << "]" << endl ;


}