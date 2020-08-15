#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class wateringPlants {
    public:
    static int findTotalRefills(vector<long long int> plantWeights, int capacity1, int capacity2) {
        long long int currCapacity1 = 0;
        long long int currcapacity2 = 0;
        int totalRefills = 0;
        if (plantWeights.size() == 1) {
            cout << 1 << endl;
            return 1;
        }

        for (int i = 0; i < plantWeights.size() / 2; i++) {
            if (plantWeights[i] > currCapacity1) {
                currCapacity1 = capacity1;
                totalRefills++;
            }
                
            currCapacity1 = currCapacity1 - plantWeights[i];
        

            long long int currWeight = plantWeights[plantWeights.size() - 1 - i];

            if (currWeight > currcapacity2) {
                currcapacity2 = capacity2;
                totalRefills++;
            }
                
            currcapacity2 = currcapacity2 - currWeight;
            
            //cout << "curr1 : " << currCapacity1 << endl;
            //cout << "curr2 : " << currcapacity2 << endl;
        }

        if (plantWeights.size() % 2 == 1) {

            if (currCapacity1 + currcapacity2 < plantWeights[(plantWeights.size() / 2) + 1]) {
                totalRefills++;
            }
        }

        cout << totalRefills << endl;
        
        return totalRefills;
    }
};

int main(int argv, char *argc[]) {
vector<long long int> inputArray = {2};
wateringPlants::findTotalRefills(inputArray, 2, 2);

inputArray = {2, 4, 5, 1, 2};
wateringPlants::findTotalRefills(inputArray, 5, 7);

inputArray = {1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 6, 5, 4, 3, 2, 1};
wateringPlants::findTotalRefills(inputArray, 9, 9);

}