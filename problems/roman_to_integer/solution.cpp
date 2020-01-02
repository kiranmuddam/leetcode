
class Solution {
public:
     int romanToInt(string s) {
		unordered_map<char, int> charToInt = { { 'I', 1 }, { 'V', 5 }, { 'X', 10 }, { 'L', 50 }, { 'C', 100 }, { 'D', 500 }, { 'M', 1000 } };
		int result = 0;
		int index = s.length() - 1;
		int preInt = 0;
		while (index >= 0)
		{
			char ch = s[index];
			int curInt = charToInt[ch];
			if (curInt >= preInt)
				result += curInt;
			else
				result -= curInt;
		
			preInt = curInt;
			index--;
		}
			
		return result;
	}
};