class Solution {
public:
    // Function to count the frequency of all elements from
    // 1 to N in the array.
    void frequencyCount(vector<int>& arr, int N, int P)
    {
        int i = 0;
        while (i < N) {
            // Calculate the index for the current element
            int idx = arr[i] - 1;

            // Check if the index is out of bounds
            if (idx >= N || idx < 0) {

                i++;
                continue;
            }

            // Check if the element at the calculated index
            // is negative (indicating a frequency)
            if (arr[idx] <= 0) {

                // Update frequency
                arr[idx]--;

                // Move to the next element
                i++;
            }
            else {
                // Store the original value at idx
                int st = arr[idx];

                // set the frequency
                arr[idx] = -1;

                // If the calculated index (idx) is greater
                // than the current index (i), it means we
                // haven't visited this element yet.
                if (idx > i) {

                    // Replace the current element with the
                    // stored value

                    arr[i] = st;
                }
                // Move to the next element
                else {
                    i++;
                }
            }
        }

        // Traverse the array again to clean up and set
        // positive elements to 0, and negative elements to
        // their absolute values.
        for (int i = 0; i < N; i++) {
            if (arr[i] < 0) {

                // Set negative elements  to their absolute
                // values (frequencies)
                arr[i] = -arr[i];
            }
            else {

                // Set positive elements to 0 (elements not
                // present in the array)
                arr[i] = 0;
            }
        }
    }
};