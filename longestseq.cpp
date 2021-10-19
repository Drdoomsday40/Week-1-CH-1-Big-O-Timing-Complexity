//
//  main.cpp
//  HW01_1
//
//  Created by Pui LingYeung on 3/9/2020.
//  Copyright © 2020 Pui Ling Yeung. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    cout << "Enter a series of numbers ending with 0: ";
    int current = -1, prev = 0, current_index = 0, current_count = 0, current_value = 0, max_index = 0, max_count = 0, max_value = 0, index = 0;
    cin >> current;
    if (current != 0) {
        index = current_index = current_count = max_index = max_count = 1;
        prev = current_value = max_value = current;
    }
    while (current != 0) {
        index++;
        cin >> current;
        if (current == prev) {
            if (current_count == 1) {
                current_value = current;
                current_index = index - 1;
            }
            current_count += 1;
        } else {
            if (current_count > max_count) {
                max_count = current_count;
                max_index = current_index;
                max_value = current_value;
            }
            current_count = 1;
            current_value = 0;
        }
        prev = current;
    }
    cout << "The longest same number sequence starts at index " << max_index << " with " << max_count << " values of " << max_value << endl;
    return 0;
}

/*
 Enter a series of numbers ending with 0: 2 4 4 8 8 8 8 2 4 4 0
 The longest same number sequence starts at index 4 with 4 values of 8
 */
