#include <stdio.h>
#include <stdbool.h>

bool containsDuplicate(int* nums, int numsSize) {
    // Assuming the input array is nums
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] == nums[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[] = {762, 637, -371, -518, -647, -610, 693, 661, 350, 152, -281, -694, -418, -885, -898, -713, 433, -217, -684, -378, 894, 812, -365, -150, 441, 116, -562, 592, 952, 898, -760, -984, -334, 601, 25, -289, -369, 824, 100, 27, 562, -898, 826, -759, -699, 733, 835, -614, -415, -267, 290, -165, 792, -913, -384, -150, -342, -514, 141, 769, 219, -688, 506, 430, -237, 182, 673, 341, -791, -524, -595, 666, 215, 126, 139, 51, -381, 223, -422, -174, 226, 102, -633, -154, 530, 516, 990, -906, 272, 230, 421, 705, 499, 652, 434, -677, 503, 44, 766, 250, -183, 800, 956, 277, -979, -741, -298, 347, -906, -301, -743, 246, 121, 219, -271, 466, -779, 967, -201, -569, 438, -2};
    int size  = sizeof(arr) / sizeof(int);
    
    if (containsDuplicate(arr, size)) {
        printf("true");
    } else {
        printf("false");
    }

    return 0;
}
