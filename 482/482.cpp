#include<bits/stdc++.h>

using namespace std;

class Solution {
  public:
    static string licenseKeyFormatting(string S, int K) {
      int i = 0;
      short int groupLimitCounter = 0;
      string finalFormattedString = "";
      for (i = S.length() - 1; i >= 0; --i) {
      	if (S[i] == '-') {
      		continue;
      	}
      	char currentChar = toupper(S[i]);
        groupLimitCounter++;
        finalFormattedString += currentChar;
        if (groupLimitCounter == K && i != 0) {
          finalFormattedString += '-';
          groupLimitCounter = 0;
        }
      }
      
      //cout<<groupLimitCounter<<endl;
      reverse(finalFormattedString.begin(), finalFormattedString.end());
      //cout<<finalFormattedString<<endl;
      int finalSize = finalFormattedString.size();
      if (finalFormattedString[finalSize - 1] == '-') {
      return finalFormattedString.substr(0, finalSize - 1);
      } 
      return finalFormattedString;
      
    }
};

int main (int argc, char *argv[]) {
	Solution::licenseKeyFormatting("5F3Z-2e-9-w", 4); 
	Solution::licenseKeyFormatting("2-5g-3-J", 2);
	Solution::licenseKeyFormatting("r", 1);
	Solution::licenseKeyFormatting("--a-a-a--a--", 2);
}
