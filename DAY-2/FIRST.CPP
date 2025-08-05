class Solution {
public:
    int reverse(int x) {
        long long revnum = 0;
        long long flag = pow(2, 31);
        if(x>0){
        while(x>0){
        int rem = x%10;
        revnum = (revnum*10) + rem;
        x /= 10;
        }
        if(revnum>=flag)
        return (0);
        else
        return revnum;
    }
    else{
        x = -1*x;
        while(x>0){
        int rem = x%10;
        revnum = (revnum*10) + rem;
        x /= 10;
        }
        if(revnum>=flag)
        return (0);
        else
        return (-1*revnum);
    }
}
};