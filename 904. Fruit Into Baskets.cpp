class Solution {
public:
    int totalFruit(vector<int>& tree) {
        int last_fruit = -1;
        int second_last_fruit = -1;
        int last_fruit_count = 0;
        int current_max = 0;
        int maxx = 0; 
        
        for(int fruit : tree)
        {
            if(fruit== last_fruit || fruit== second_last_fruit)
            {
                current_max +=1;
            }
            else
            {
                current_max = last_fruit_count + 1;
            }
            
            if(fruit == last_fruit)
            {
                last_fruit_count += 1;
            }
            else
            {
                last_fruit_count =1;
            }
            if(fruit != last_fruit)
            {
                second_last_fruit = last_fruit;
                last_fruit = fruit;
            }
            maxx = max(current_max,maxx);
        }
        return maxx;
        
    }
};