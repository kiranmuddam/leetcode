#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argv, char *argc[]) {

vector<string> strArrayA;
vector<string> strArrayB;
vector<int> strictSmallCount;
string strA, strB;

getline(cin, strA);
getline(cin, strB);

int prevIndex = 0;
for (int i = 0; i < strA.size(); i++) {
	if (strA[i] == ' ') {
	strArrayA.push_back(strA.substr(prevIndex, i - prevIndex));
	prevIndex = i + 1;
	}
}
strArrayA.push_back(strA.substr(prevIndex, strA.size() - prevIndex));
prevIndex = 0;

for (int i = 0; i < strB.size(); i++) {
	if (strB[i] == ' ') {
	strArrayB.push_back(strB.substr(prevIndex, i - prevIndex));
	prevIndex = i + 1;
	}
}
strArrayB.push_back(strB.substr(prevIndex, strB.size() - prevIndex));

for (int i = 0; i < strArrayB.size(); i++) {
	int smallCount = 0;
	for (int j = 0; j < strArrayA.size(); j++) {
		string currStrA = strArrayA[j];
		string currStrB = strArrayB[i];

		sort(currStrA.begin(), currStrA.end());
		sort(currStrB.begin(), currStrB.end());
		
		int currStrAFreq = 0;
		int currStrBFreq = 0;
		
		for (int k = 1; k < currStrA.size(); k++) {
			if (currStrA[k] != currStrA[0]) {
				break;
			}
			currStrAFreq = k ;
		} 
		currStrAFreq += 1;
		
		for (int k = 1; k < currStrB.size(); k++) {
			if (currStrB[k] != currStrB[0]) {
				break;
			}
			currStrBFreq = k;
		} 
		currStrBFreq += 1;
		
		if (currStrAFreq < currStrBFreq) {
			smallCount++;
		}
	}
	
	strictSmallCount.push_back(smallCount);
}
cout << "[" ;
cout << strictSmallCount[0];
for (int i = 1; i < strictSmallCount.size(); i++) {
	cout << ", " << strictSmallCount[i];
}
cout << "]" << endl ;
}
