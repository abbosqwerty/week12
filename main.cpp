#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

// Problem1
// int findMax(int *arr, int size) {
//     int max = *arr;
//     for (int i = 1; i < size; i++) {
//         if (*(arr+i)>max) {
//             max = *(arr+i);
//         }
//     }
//     return max;
// }
// int main() {
//     int heights[]= {150,165,172,160,180};
//     cout<<"Maximum Height: "<<findMax(heights,5)<<endl;
// }

//Problem 2
// int main() {
//     int a,b;
//     cin>>a>>b;
//     int *ptrA=&a;
//     int *ptrB=&b;
//     cout<<"Value of a: "<<a<<" and its address: "<<ptrA<<endl;
//     cout<<"Value of b: "<<b<<" and its address: "<<ptrB<<endl;
// }

// Problem 3
// int main() {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     int max=0;
//     for (int i = 0; i < n; i++) cin >> v[i];
//     for (int i = 0; i < n; i++) {
//         if (max < v[i]) max = v[i];
//     }
//     int *ptrM=&max;
//     cout <<"Max = " << *ptrM << ", Adress = " << ptrM << endl;
//
// }


//Problem 4
// #define val 33.3
// #define number 50
// int a;
// int& fun() {
//     return a;
// }
// int foo() {
//     return a;
// }
// int main() {
//     int n1=9, n2=11, *ptr_1=nullptr, *ptr_2=nullptr, k=0;
//     double t;
//     ptr_1=&n1;
//     ptr_2=&n2;
//     t=val;
//     k=val;
//     fun()=number;
//
//     cout <<number<<" "<<n2+1<<" "<<t-1<<" "<<n1-1<<endl;
//
// }

// Problem 5
// int main() {
//     int n;
//     cin>>n;
//     vector<int> a(n);
//     srand(time(NULL));
//     int *ptrA=&a[0];
//     for (int i = 0; i < n; i++) {
//         *(ptrA+i)=rand()%20;
//     }
//
//     for (int i = 0; i < n; i++) {
//         cout <<"Adress: " << ptrA+i <<" Value: " << *(ptrA+i) << endl;
//     }
//
//
// }

// //Problem 6
// int main() {
//     int massage=42;
//     int *ptr=&massage;
//     int **pptr=&ptr;
//     cout <<"Secret message: "<<pptr<<endl;
//     return 0;
// }

// //Problem 7
// float calculateAverage(int *arr, int size) {
//     int *ptr =arr;
//     float sum=0;
//     float avarage = 0;
//     for (int i = 0; i < size; i++) {
//         sum += *(arr+i);
//     }
//     avarage = sum/size;
//     return  avarage;
//
// }
// int main() {
//     int score[]={88,76,90,85,92};
//     cout<<calculateAverage(score, 5)<<endl;
// }

//Problem 8
// int main() {
//     int treasures[]={10,20,30,40,50};
//     int *ptr=treasures;
//     int last=0;
//     for(int i=0;i<5;i++) {
//         last=*(ptr+i);
//     }
//     cout<<last;
// }

//Problem 9
// int main() {
//     int score=75;
//     int *ptr=&score;
//     cout<<"Original score: "<<*ptr<<endl;
//     *ptr=*ptr+10;
//     cout<<"New score: "<<*ptr<<endl;
// }

//Problem 10
// void reverseArray(int *start, int *end) {
//     while (start<end) {
//         int temp = *start;
//         *start = *end;
//         *end = temp;
//         start++;
//         end--;
//
//     }
// }
// int main() {
//     int m;
//     cin >> m;
//     int arr[m];
//     for (int i = 0; i < m; i++) cin >> arr[i];
//     reverseArray(arr, arr + m-1);
//     for (int i = 0; i < m; i++) cout << arr[i] << " ";
// }
// //Problem 11
// int main() {
//    int n[]={78,95,85,62,88};
//
//   int *largest=n;
//   int *seond_largest=n;
//   int *third_largest=n;
//  for(int i=0;i<5;i++) {
//      if (*(n+i)>*(largest)) {
//          third_largest=seond_largest;
//          seond_largest=largest;
//          largest=n+i;
//      }
//      else if (*(n+i)>*(seond_largest)&&*(n+i)!=*largest) {
//          third_largest=seond_largest;
//          seond_largest=n+i;;
//      }
//      else if (*(n+i)>*(third_largest)&&*(n+i)!=*seond_largest) third_largest=n+i;
//
//  }
//
//     cout<<*third_largest;
//     cout<<endl;
//     cout<<*seond_largest;
//     cout<<endl;
//     cout<<*largest;
//     cout<<endl;
//
// return 0;
// }

int* countDigits(const int& number) {
    int* counts = new int[10]{0};
    int num = number;
    while (num > 0) {
        int digit = num % 10;
        counts[digit]++;
        num /= 10;
    }

    return counts;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int* counts = countDigits(num);

    for (int i = 0; i < 10; i++) {
        cout << "counts[" << i << "] = " << counts[i] << endl;
    }
    return 0;
}
