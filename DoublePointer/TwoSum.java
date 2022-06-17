/https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/
public int[] twoSum(int[] numbers, int target) {
        int end = numbers.length-1;
        int begin = 0;
        while (true){
            if (numbers[end]+numbers[begin] == target){
                int[] r = new int[]{begin+1,end+1};
                return r;
            }else if (numbers[end]+numbers[begin] > target){
                end = end - 1;
            } else{
                begin = begin + 1;
            }
        }
        
    }