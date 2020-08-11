class Solution {
	public:
	static int removeDuplicates(vector<int> &arr) {
        if(arr.size() == 0) {
            return 0;
        }
		int nonDuplicatePointer = 1;
		for (int i = 1; i < arr.size(); i++) {
			if (arr[nonDuplicatePointer - 1] != arr[i]) {
				arr[nonDuplicatePointer] = arr[i];
				nonDuplicatePointer++;
			}
		}
		return nonDuplicatePointer;
	}
};