void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int removeElement(int* nums, int numsSize, int val) {
    int j = numsSize - 1;

    for (int i = 0; i <= j; i++){
        if (nums[i] == val){
            while (j > i && nums[j] == val) {
                j--;
            }
            if (j > i) {
                swap(&nums[i], &nums[j]);
                j--;
            } else {
                return i;
            }
        }
    }

    for(int i = 0; i <= j; i++){
        printf("%d ", nums[i]);
    }

    return j + 1;
}