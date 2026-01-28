//What will be the output of the following code?
 
#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    for( int i=1; i <= 5; i++){
        sum += i;
        if (i==2 )
        continue;
        sum += i;
        if(i == 4)
        break;
        sum += i; 
    }
    cout<< sum << endl;

}

/* 1. **Initialization**: `sum` is set to `0`.

2. **First Iteration (i = 1)**:
- `sum += i;` // `sum = 0 + 1 = 1`
- `continue` and `break` conditions are not met.
- `sum += i;` // `sum = 1 + 1 = 2`
- `sum += i;` // `sum = 2 + 1 = 3`

3. **Second Iteration (i = 2)**:
- `sum += i;` // `sum = 3 + 2 = 5`
- `continue` condition is met (`i == 2`), so we skip the remaining statements and continue to the next iteration.

4. **Third Iteration (i = 3)**:
- `sum += i;` // `sum = 5 + 3 = 8`
- `continue` and `break` conditions are not met.
- `sum += i;` // `sum = 8 + 3 = 11`
- `sum += i;` // `sum = 11 + 3 = 14`

5. **Fourth Iteration (i = 4)**:
- `sum += i;` // `sum = 14 + 4 = 18`
- `continue` condition is not met.
- `sum += i;` // `sum = 18 + 4 = 22`
- `break` condition is met (`i == 4`), so we exit the loop before executing any further statements.

6. **The loop exits before the fifth iteration because of the `break` statement.**

7. **Output**: The final value of `sum` is `22`.

The loop does not execute for `i = 5` because we exit the loop during the fourth iteration due to the `break` statement. The `continue` statement in the second iteration causes the loop to skip the second and third `sum += i;` statements in that particular iteration.*/