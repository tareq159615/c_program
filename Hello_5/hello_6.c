#include<stdio.h>
int main (){ 
    int a[] = {1,2,3,4,5};
    int b = 5; 
    int max = find_max(a, b);
    printf("%d\n", max);
    return 0;
}

int find_max(int a[], int b){
    int max = a[0]; 
    for (int i = 0; i < b; i++)
    {
        if (a[i]> max){
             max = a [i];
        }
    }
    return max; 
}



// #include<stdio.h>

// // সর্বাধিক মান খোঁজার জন্য ফাংশন ডিক্লেয়ারেশন
// int find_max(int ara[], int n);

// // মৌলিক ফাংশন
// int main (){
//     // একটি ইন্টিজার অ্যারে ডিফাইন করা
//     int ara[] = {-100, 0, 53, 22, 83, 23, 89, -132, 201, 3, 85};
//     int n = 11; // অ্যারের উপাদানগুলির সংখ্যা
    
//     // find_max ফাংশন কল করে সর্বাধিক মান খোঁজা
//     int max = find_max(ara, n);
    
//     // সর্বাধিক মান প্রিন্ট করা
//     printf("%d\n", max);

//     return 0;
// }

// // সর্বাধিক মান খোঁজার ফাংশন
// int find_max(int ara[], int n){
//     int max = ara[0]; // প্রথম উপাদানটি হবে সর্বাধিক মান
//     for (int i = 0; i < n; i++)
//     {
//         if (ara[i] > max){
//             max = ara[i]; // একটি নতুন সর্বাধিক মান পাওয়া গিয়ে তাকে max এ রাখা
//         }
//     }
//     return max; // সর্বাধিক মান রিটার্ন করা
// }
