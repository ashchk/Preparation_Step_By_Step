//mainly a heap, need in case we need to find largest or smallest value in every operation

        priority_queue<int>pq;

        priority_queue<int, vector<int>, std::greater<int> >reversePQ;// reverse order pq

        //priority_queue<int, vector<int>, std::less<int> >reversePQ;
        
        for(int i = 0; i < nums.size(); i++){
            pq.push(nums[i]);
            reversePQ.push(nums[i]);
        }
        // input :[1,1,1,2,2,3]
        while(!pq.empty()){
            cout<<pq.top()<<" ";
            pq.pop();
        }
        cout<<endl;
        // 3 2 2 1 1 1  output for normal pq
        
        while(!reversePQ.empty()){
            cout<<reversePQ.top()<<" ";
            reversePQ.pop();
        }
        //1 1 1 2 2 3  output for reverse
