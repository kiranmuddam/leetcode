class Solution {
    public boolean isOneBitCharacter(int[] bits) {
        int i = 0;
        boolean status = false;
        if(bits.length == 1 && bits[0] == 0) {
            return true;
        }
        if (bits[bits.length - 1] == 1) {
            return false;
        } else {
            while(i < bits.length) {
                if (bits[i] == 0) {
                    status = true;
                    i++;
                    continue;
                } else {
                    status = false;
                    i+= 2;
                    continue;
                }
            }
        }
        if (status) {
            return true;
        } else {
            return false;
        }
    }
}