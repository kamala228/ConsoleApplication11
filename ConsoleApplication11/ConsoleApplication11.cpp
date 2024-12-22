//#include <iostream>
//using namespace std;
//int main() {
//    const int size = 5;
//    int arr1[size] = { 1, 2, 3, 4, 5 };
//    int arr2[size];
//    int* p1 = arr1;
//    int* p2 = arr2;
//    for (int i = 0; i < size; ++i) {
//        *(p2++) = *(p1++);
//    }
//    for (int i = 0; i < size; ++i) {
//        cout << arr2[i] << " ";
//    }
//    return 0;
//}


//#include <iostream>
//using namespace std;
//int main() {
//    const int size = 5;
//    int arr[size] = { 1, 2, 3, 4, 5 };
//    int* p = arr + size - 1;
//    while (p >= arr) {
//        cout << *(p--) << " ";
//    }
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//    const int size = 5;
//    int arr1[size] = { 1, 2, 3, 4, 5 };
//    int arr2[size];
//    int* p1 = arr1 + size - 1;
//    int* p2 = arr2; 
//    for (int i = 0; i < size; ++i) {
//        *(p2++) = *(p1--);
//    }
//    for (int i = 0; i < size; ++i) {
//        cout << arr2[i] << " ";
//    }
//    return 0;
//}
