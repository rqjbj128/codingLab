#include<stdio.h>
void swap(int *x, int len);
void main() {
	int arr[5], i,len;
	for (int i = 0;i < 5;i++) {
		printf("정수 하나 입력하시오.");
		scanf("%d", &arr[i]);
		len = i;
	}
	swap(arr, len);
}
void swap(int *x,int len) {
	int arr[5],i,q[5];
	for (int i = 5;i > 0;i--) {
		q[i] = arr[5 - i];
	}
	for (int i = 0;i < 5;i++) {
		printf("%d",*q);
	}
}