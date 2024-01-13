class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        
        int cap=capacity;
        int steps=0;
        for(int i=0;i<plants.size();i++)
        {
            if(plants[i]<=cap)
            {
                steps++;
                cap-=plants[i];
            }
            else if(plants[i]>cap)
            {
                cap=capacity;
                cap-=plants[i];
                steps+=(i*2)+1;
            }
        }
        return steps;
    }
};