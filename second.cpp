#include <stdio.h>
#include<stdlib.h>
// 定义函数用于计算最大子数组的和
int maxSubArraySum(int arr[], int n) {
    int maxEndingHere = arr[0];
    int maxSoFar = arr[0];

    for (int i = 1; i < n; i++) {
        maxEndingHere = (maxEndingHere + arr[i] > arr[i]) ? maxEndingHere + arr[i] : arr[i];
        maxSoFar = (maxEndingHere > maxSoFar) ? maxEndingHere : maxSoFar;
    }

    return maxSoFar;
}

int main() {
    int sum;
    int* arr;
    scanf_s("%d", &sum);
    arr = (int*)malloc(sum * sizeof(int));

    int eg;
    for (int i = 0; i < sum; i++){
        scanf_s("%d", &eg);
        arr[i] = eg;
    }
    int maxSum = maxSubArraySum(arr, sum);
    printf("最大子数组的和为: %d\n", maxSum);
    free(arr);
    return 0;
}
