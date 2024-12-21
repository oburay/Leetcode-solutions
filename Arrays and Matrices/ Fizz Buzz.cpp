class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer(n);
        for (int i =0; i< n; i++){
            answer[i] = (((i+1)%3 == 0) && ((i+1)%5 == 0)) ? "FizzBuzz" : ((i+1)%3 == 0) ? "Fizz" : ((i+1)%5 == 0) ? "Buzz" : to_string(i+1);
        }
        return answer ;
    }
    
};