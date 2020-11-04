class Solution {
public:
    bool circularArrayLoop(vector<int>& nums) 
  {
    int n = nums.size();    
    
    // get next index from i
    auto next = [&](int i) { return ((i + nums[i])%n + n)%n; };
    
    // if x and y have same sign  
    auto sameSign = [](int x, int y) { return (x>0 && y>0) || (x<0 && y<0); };
      
    // if moving in same direction at indices i and j 
    auto sameDir = [&](int i, int j) { return sameSign(nums[i], nums[j]); };
    
    // try each index as starting position
    for (int i = 0; i < n; ++i) 
    {
      // use slow, fast pointers to detect loop
      int slow = i, fast = i;
      
      // while slow and fast are moving in one direction
      while (sameDir(i, next(fast)) && sameDir(i, next(next(fast)))) {
        slow = next(slow);
        fast = next(next(fast));
        if (slow == fast) { // loop found
          if (slow == next(slow)) break; // length 1 loop doesn't count
          return true;
        }
      }
      
      // no loop found, label all visited nodes to 0 
      // (i.e., removed from index looping)        
      
      // loop cur while moving in same direction (starting from i)
      int dir = nums[i];
      for (int cur = i, nxt; sameSign(nums[cur], dir); cur = nxt) 
      {
        nxt = next(cur); // save next position before modifying nums[cur]
        nums[cur] = 0; // set to 0 as visited   
      }      
    }
    
    return false;
  }
};