#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int nums[] = {1, 2, 2, 1, 1, 0};
    int n = sizeof(nums) / sizeof(nums[0]);
    // cout << n;
    int i = 0;
    for (int j = 1; i < n; j++)
    {
        // if (nums[i] != nums[j])
        if (nums[i] == nums[j])
        {
            nums[i] = nums[i] * 2;
            nums[j] = 0;
            i++;
        }
        else
        {
            // nums[i] = nums[i] * 2;
            // nums[j] = 0;
            i++;
        }
    }
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            nums[pos++] = nums[i];
        }
    }
    while (pos<n)
    {
        nums[pos++] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    } 
    return 0;
}
/*Great question!  
The reason for using **both** a `for` loop and a `while` loop is because they serve **different purposes**:

---

### 1. The `for` loop:
```cpp
for (int i = 0; i < n; i++) {
    if (nums[i] != 0) {
        nums[pos++] = nums[i];
    }
}
```
- **Purpose:** Moves all non-zero elements to the front of the array.
- After this loop, `pos` is the count of non-zero elements, and the first `pos` elements of `nums` are all non-zero.

---

### 2. The `while` loop:
```cpp
while (pos < n) {
    nums[pos++] = 0;
}
```
- **Purpose:** Fills the rest of the array (from `pos` to `n-1`) with zeros.

---

## Why not just one loop?
- In a **single loop**, you can't both move all non-zeros to the front **and** fill the rest with zeros, because you don't know where the non-zeros end until you've checked the whole array.
- If you try to set zeros in the same loop, you might overwrite non-zero values that haven't been checked yet.

---

## Example
Suppose `nums = [1, 0, 2, 0, 3]`:
- After the `for` loop: `nums = [1, 2, 3, ?, ?]`, `pos = 3`
- The `while` loop then sets `nums[3] = 0`, `nums[4] = 0`

---

## Conclusion
- **Both loops are necessary** for clarity and correctness.
- The first loop compacts non-zeros, the second fills the rest with zeros.
- This is a common and efficient pattern for "move zeroes to end" problems.

If you want a one-loop solution, you would need to use a different approach (like swapping), but for this compaction method, two loops are the cleanest and safest way.*/