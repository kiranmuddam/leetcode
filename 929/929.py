class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        currentEmailSplit = []
        for i in range (len(emails)):
            currentEmailSplit = emails[i].split('@')
            currentEmailSplit[0] = currentEmailSplit[0].replace('.','')
            if '+' in currentEmailSplit[0]:
                plusSplit = currentEmailSplit[0].split('+')
                currentEmailSplit[0] = plusSplit[0]
            currentEmail = "@".join(currentEmailSplit)
            emails[i] = currentEmail
        return len(set(emails))
print(Solution.numUniqueEmails(["kiran.muddam@gmail.com"]))    
            
            
        
