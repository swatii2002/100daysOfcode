class Solution {
public:
    int convertTime(string current, string correct) {
        int current_time=0, correct_time=0, diff, count=0;
        
        current_time = (int(current[0])*10+int(current[1]))*60+int(current[3])*10+int(current[4]);
        correct_time = (int(correct[0])*10+int(correct[1]))*60+int(correct[3])*10+int(correct[4]);

        diff = correct_time-current_time;
        while(diff!=0)
        {
            if(diff>=60)
                diff -= 60;
            else if(diff>=15)
                diff -= 15;
            else if(diff>=5)
                diff -= 5;
            else
                diff -= 1;
            count++;
        }
        return count;
    }
};
