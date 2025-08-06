class Solution {
public:
    int reverse(int x) { // For positive numbers.
        long long revnum = 0;
        long long flag = pow(2, 31);
        if(x>0){
        while(x>0){
        int rem = x%10;
        revnum = (revnum*10) + rem;
        x /= 10;
        }
        if(revnum<flag)
        return revnum;
        else
        return (0);
    }
    else{ // For negative numbers
        if(x==-2147483648) //Edge Case
        return (0);
        else{
        x = -1*x;
        while(x>0){
        int rem = x%10;
        revnum = (revnum*10) + rem;
        x /= 10;
        }
        if(revnum<flag)
        return (-1*revnum);
        else
        return (0);
    }
    }
}
};

// This is the first solution to the problem I tried:
// Two cases are made to handle both positive and negative numbers differently.
// In negative too we handeled the edge case of (-1*-2,147,483,648) in line number 18.
