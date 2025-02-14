class ProductOfNumbers {
private:
    vector<int> prefix; // Stores cumulative product
public:
    ProductOfNumbers() {
        prefix = {1}; // Initialize with 1 for easier division
    }
    
    void add(int num) {
        if (num == 0) {
            prefix = {1}; // Reset prefix on zero
        } else {
            prefix.push_back(prefix.back() * num);
        }
    }
    
    int getProduct(int k) {
        int n = prefix.size();
        if (k >= n) return 0; // If k elements include a zero, return 0
        return prefix[n - 1] / prefix[n - 1 - k];
    }
};
