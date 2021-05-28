/*
LC 977. Squares of a Sorted Array
Main thing here is we have to make a O(n) solution
the input is sorted.

We can use two pointers to read the positive and negative parts of the array
one pointer 'right' in the positive direction, and another 'left' in the negative direction.
Now that we are reading two increasing arrays (the squares of the elements), 
we can merge these arrays together using a two-pointer technique.
*/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& array) {
        
        int left = 0, right = array.size() -1;
        
        vector<int>Square(array.size(),0);
        
        int sqrIndex = array.size()-1;
        
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
};
