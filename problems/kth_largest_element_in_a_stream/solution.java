import java.util.*;

class KthLargest {
    
    ArrayList<Integer> list = new ArrayList<>();
    int target = 0;

    public  KthLargest(int k, int[] nums) {
        ArrayList<Integer> l = new ArrayList<>();
        for (int i = 0; i < nums.length; i++) {
            l.add(nums[i]);
        }
        this.list = l;
        this.target = k;
    }
    
    public int add(int val) {
        this.list.add(val);
        if (this.list.size() < this.target - 1) {
            return -1;
        } else {
            Collections.sort(this.list);
            int index = this.list.size() - this.target;
            return this.list.get(index);
        }
        
    }
}

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest obj = new KthLargest(k, nums);
 * int param_1 = obj.add(val);
 */