#include <stdio.h>
#include <stdlib.h>

// 比较函数
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0}; // 设置数组包含十个降序的变量
    int sz = sizeof(arr) / sizeof(arr[0]); // 求出数组个数

    // 使用 qsort 对数组进行排序
    qsort(arr, sz, sizeof(int), compare);

    // 输出排序后的数组
    int i;
    for (i = 0; i < sz; i++) {
        printf("%d ", arr[i]);
    }
    printf("\\n");
    return 0;
}
