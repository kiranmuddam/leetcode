class Solution {
  public:
    static string licenseKeyFormatting(string S, int K) {
      int i = 0;
      short int groupLimitCounter = 0;
      string finalFormattedString = "";
      for (i = S.size() - 1; i >= 0; --i) {
      	if (S[i] == '-') {
      		continue;
      	}
      	//char currentChar = toupper(S[i]);
        groupLimitCounter++;
        finalFormattedString += toupper(S[i]);
        if (groupLimitCounter == K && i != 0) {
          finalFormattedString += '-';
          groupLimitCounter = 0;
        }
      }
      
      //cout<<groupLimitCounter<<endl;
      reverse(finalFormattedString.begin(), finalFormattedString.end());
      //cout<<finalFormattedString<<endl;
      int finalSize = finalFormattedString.size();
      if (finalFormattedString[0] == '-') {
      return finalFormattedString.substr(1, finalSize);
      } 
      return finalFormattedString;
      
    }
};