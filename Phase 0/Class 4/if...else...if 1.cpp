int x = 0;
if (x > 0) { // condition is false
    cout << "x is positive\n"; // skipped
} else if (x < 0) { // now checks this condition, which is false too
    cout << "x is negative\n"; // skipped
} else { // as all conditions are false, this block is executed
    cout << "x is 0\n"; // prints
}