/*
LC 1, Two Sum
sorted solution is O(nlogn)
using map, solution is O(n)
for O(1), need to implement O(n^2)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& array, int targetSum) {
        
    map<int,int> mapArray;
        
    for(int i = 0;i < array.size(); i++){
        int remainingValue = targetSum - array[i];
        if(mapArray[remainingValue]){
            return {i, mapArray[remainingValue]-1};
        }
        mapArray[array[i]] = i+1;
    }
    return {};
        
    //2nd approach O(nlogn) | O(n) space
	/*vector<pair<int,int>>P;
        
    for(int i=0; i< array.size(); i++){
        P.push_back(make_pair(array[i],i));
    }
    
    sort(P.begin(), P.end());    //sort the array
    
	int left = 0, right = array.size()-1;
	
	    while(left < right){
		
		    int currentSum = P[left].first + P[right].first; //two pointer
		
		    if(currentSum == targetSum){
			    return {P[left].second, P[right].second};
		    }else if (currentSum > targetSum){ //sum is greater than target so decrease sum
			    right--; 
		    }else if( currentSum < targetSum){
			    left++;
		    }
		
	    }
    return {};// if nothing matches return empty
        */ // mysolution ends
    }
};

//space O(1) | O(n^2) solution approach 1 brute force
