//leetcode 977
//algoexpert sorted square array
//interesting solution mainly for fb
vector<int> sortedSquares(vector<int>& array) {
        
        int left = 0, right = array.size() -1;
        //O(n) time| O(n) space
        vector<int>Square(array.size(),0);
        
        int sqrIndex = array.size()-1;
        //input is already sorted
        while(left <= right){ //two pointer solution
           //number negative or positive which have greater value, its square is also larger
            
            if( abs(array[left]) < abs(array[right]) ){
                Square[sqrIndex] = array[right] * array[right];
                right--;
                sqrIndex--;
            }else if (abs(array[left]) >= abs(array[right])){
                Square[sqrIndex] = array[left] * array[left];
                left++;
                sqrIndex--;
            }
            
        }//while ends
        
        return Square;
    }
