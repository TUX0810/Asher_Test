#include <stdio.h>

// 二分查找函数
// 参数: arr - 已排序的数组, n - 数组长度, target - 目标值
// 返回: 找到返回索引, 未找到返回 -1
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 67, 78};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 23;
    
    int result = binarySearch(arr, n, target);
    
    if (result != -1) {
        printf("元素找到,索引为: %d\n", result);
    } else {
        printf("元素未找到\n");
    }
    
    return 0;
}
