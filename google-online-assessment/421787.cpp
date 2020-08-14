#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

string findMaxBookedRoom(vector<string> rooms) {
    
    string maxBookedRoom;
    map<string, int> roomBookingFrequency;
    map<string, int> roomBookingStatus;

    for (int i = 0; i < rooms.size(); i++) {
        string actualRoom = rooms[i].substr(1, rooms[i].size());
        if (rooms[i][0] == '+') {
            if (roomBookingFrequency.find(actualRoom) == roomBookingFrequency.end() ) {
                roomBookingFrequency[actualRoom]++;
                roomBookingStatus[actualRoom] = 1;
            } else {
                if (roomBookingStatus[actualRoom] == 0) {
                    roomBookingStatus[actualRoom] = 1;
                    roomBookingFrequency[actualRoom]++;
                }
            }
        } else {
            string actualRoom = rooms[i].substr(1, rooms[i].size());

            roomBookingStatus[actualRoom] = 0;
        }
    }

    map<string, int>::iterator it;

    pair<string, int> maxPair;
    maxPair.second = -1;

    //sort(roomBookingFrequency.begin(), roomBookingFrequency.end());

    for (it = roomBookingFrequency.begin(); it != roomBookingFrequency.end(); it++) {
        cout << it->first << ' ' << it->second << endl;

        if (it -> second > maxPair.second) {
            maxPair.second =  it->second;
            maxPair.first = it->first;
        } else if (it -> second == maxPair.second) {
            if (it -> first[1] < maxPair.first[1]) {
                maxPair.first = it -> first;
            }
        }
    }
    maxBookedRoom = maxPair.first;

    cout << "Most Booked Room: " << maxPair.first << endl;
    cout << "Times Booked: " << maxPair.second << endl;

    return maxBookedRoom;
}

int main(int argv, char *argc[]) {
    vector<string> stringArr = {"+1A", "+3E", "-1A", "+4F", "+1A", "-3E"};
    findMaxBookedRoom(stringArr);

    stringArr = {"+1E", "-1E", "+1E", "-1E", "+1E", "-1E", "+1E", "-1E","+2A", "-2A", "+2A", "-2A", "+2A", "-2A", "+2A", "-2A","+2B", "-2B", "+2B", "-2B", "+2B", "-2B", "+2B", "-2B"};
    findMaxBookedRoom(stringArr);
}