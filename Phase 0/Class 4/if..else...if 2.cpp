int x = 1;
if (x >= 0) { // condition is true
    cout << "x is at least 0\n"; // prints
} else if (x >= 1) { // does not check this condition, because the previous condition is true
    cout << "x is at least 1\n"; // skipped
} else { // does not check this condition, because one of the previous conditions is true
    cout << "x is less than 0\n"; // skipped
}