class Solution {
public:
     int numUniqueEmails(vector<string>& emails){
       set<string> uniqueEmails;
        for (int i = 0; i < emails.size(); i++){
          string currentEmail = emails[i];
          string emailPrefix = currentEmail.substr(0, currentEmail.find('@'));
          string emailSuffix = currentEmail.substr(currentEmail.find('@'), currentEmail.size() - 1);
          emailPrefix = emailPrefix.substr(0, emailPrefix.find('+'));
          string finalEmailPrefix = "";
          for (int j = 0; j < emailPrefix.size(); j++){
            if (emailPrefix[j] == '.' ){
              continue;
            } else {
              finalEmailPrefix = finalEmailPrefix + emailPrefix[j];
            }
          }
          currentEmail = finalEmailPrefix + emailSuffix;
          //cout<<currentEmail<<endl;
          uniqueEmails.insert(currentEmail);
        }
        return uniqueEmails.size();
        	
    }
};