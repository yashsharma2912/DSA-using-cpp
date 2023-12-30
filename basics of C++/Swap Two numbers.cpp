class Solution {
    public:
    pair<int, int> swapNumbers(int a, int b) {
        swap(a,b);
        pair<int,int>result;
        result.first = a;
        result.second = b;
        return result;
    }
}