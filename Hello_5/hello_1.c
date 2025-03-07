#include <stdio.h>

int main() {
    int i;
    int total_marks[] = {51, 51, 52, 52, 53, 53, 53, 54, 54, 54, 55, 56, 56, 56, 56, 58, 59, 58, 55, 65, 99, 98, 97, 96, 95, 55, 56, 56, 56, 56, 58, 59, 58, 55, 65, 58, 59, 58, 55, 65};
    int marks_count[100];

    for (i = 0; i <=100; i++) {
        marks_count[i] = 0;
    }
    for (i = 0; i < 40; i++) {
        marks_count[total_marks[i]]++;
        //printf("%d\n",marks_count);
    }
    for (i = 50; i <= 100; i++) {
        printf("Marks: %d Count: %d\n", i, marks_count[i]); 
    }
    return 0;
}
// এই প্রোগ্রামটি মোট ৪০টি ছাত্রের মার্কস থেকে একটি স্কুলের সমগ্র মার্কস তালিকা নিয়ে একটি হিসেব-নিকাশ করে।
// total_marks এই অ্যারেতে ৪০টি ছাত্রের মার্কস রয়েছে।
// marks_count এই অ্যারেতে ১০১ সাইজের একটি অ্যারে রয়েছে, যেটি সব ইন্ডেক্সের জন্য ০ ভ্যালু দিয়ে ইনিশিয়ালাইজ করা হয়েছে।
// প্রথম for লুপে marks_count অ্যারেটিকে ০ দিয়ে ইনিশিয়ালাইজ করা হয়েছে।
// দ্বিতীয় for লুপে ৪০টি ছাত্রের মার্কস থেকে প্রতি মার্কসের জন্য marks_count অ্যারেতে এক যোগ করা হয়েছে, অর্থাৎ একই মার্কসের ছাত্রের সংখ্যা বারবার হয়েছে।
// তৃতীয় for লুপে ৫০ থেকে ১০০ পর্যন্ত ইনডেক্সের জন্য মার্কস এবং সংখ্যা প্রিন্ট করা হয়েছে।
// এই প্রোগ্রামটি চালালে তালিকাটি দেখতে পাবেন এবং প্রতি মার্কসের জন্য ছাত্রের সংখ্যা দেখতে পাবেন।