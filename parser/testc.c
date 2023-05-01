int compare_arrays(int arr1[], int arr2[]) {
    int size = sizeof(arr1)/sizeof(arr2[0]);
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            return 1; // arrays are not the same
        }
    }
    return 0; // arrays are the same
}

int main() {
    int test[2] = {0, 1};
    int test2[2] = {0, 1};
    printf("%zu\n", sizeof(double));
}