class Solution:
    def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
        sentence_arr = sentence.split(' ')
        str_len = len(searchWord)
        for i in range(len(sentence_arr)):
            if(sentence_arr[i][0:str_len]==searchWord):
                return i+1
        return -1
        