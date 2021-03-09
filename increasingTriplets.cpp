/*
first_num = second_num = some very big number
for n in nums:
    if n is smallest number:
        first_num = n
    else if n is second smallest number:
        second_num = n
    else n is bigger than both first_num and second_num:
        # We have found our triplet, return True

# After loop has terminated
# If we have reached this point, there is no increasing triplet, return False
*/
//leetcode 334
bool increasingTriplet(vector<int>& nums) {
        int first_num = INT_MAX, second_num = INT_MAX;
        
        for(int i=0; i < nums.size() ;i++){
            
            if(nums[i] <= first_num) // check if the number is smaller than the first smallest number
                first_num = nums[i];
            else if(nums[i] <= second_num) // check if the number is greater than first number and smaller than the second smallest number
                second_num = nums[i];
            else if(nums[i] > first_num && nums[i] > second_num) //number is greater than first and second number
                return true;
                
        }//for loop ends
        return false;
        //leetcode solution O(n)| O(1)
 }
