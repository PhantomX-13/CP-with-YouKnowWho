#include <iostream>
using namespace std;

int check_kth_bit ( int x, int k)
{
    return ( x >> k) & 1;
} 

void print_on_bit(int x)
{
    cout << "On Bits are ";
    for(int k=0; k<32; k++)
    {
        if(check_kth_bit(x,k))
        {
            cout  << k << ' ';
        }
    }
    cout << '\n';
}

void print_off_bit(int x)
{
    cout << "Off Bits are ";
    for(int k=0; k<32; k++)
    {
        if(! check_kth_bit(x,k))
        {
            cout  << k << ' ';
        }
    }
    cout << '\n';
}

int count_on_bit(int x)
{
    int ans = 0;
    for(int k=0; k<32; k++)
    {
        if(check_kth_bit(x,k))
        {
            ans++;
        }
    }
    return ans;
}
bool is_Even(int x){
    if(x & 1){
        cout << "Odd " ;
        return false;
    }
    else{
        cout << "Even ";
        return true;
    }
}
//How to turn on a bit in a number
int set_kth_bit(int x,int k){
    return x | ( 1 << k);
}
//How to toggle a bit in a number
int toggle_kth_bit(int x, int k)
{
    return x ^ (1 << k);
}
//How to check if a number is a power of 2
bool check_power_of_2(int x)
{
    return count_on_bit(x) == 1;
}
int main()
{
    long long p = 11010LL << 40; // value of 2^40 
    cout << p << endl;

    int y = 3;
    cout << "After left shift: " << (y << 2) << '\n'; // y << 2 means 2 bar left shift krte chay
    /* (3)dec = (11)bin 
    after 2 left shifting it should be (1100)bin which is actually (12)dec 
    tricks is ekbar left shift krle dui diye gun (multiple) hy */

    int a = 1 << 20; // 2^20
    cout << "2^20: " << a << '\n';

    //right shift
    cout << "After right shift: " << (10 >> 1) << '\n';
    /* (10)dec = (001010)bin -> after right shift (000101)bin = (5)dec 
    the trick of right shift is , 2 diye divide hye jai 
    So, x >> k = x / (2^k) 
    and ans floor a ashbe */

    /* last bit check = x & 1
    k th bit check = (x >> k) & 1 */

    cout << "K_th Bit: " << check_kth_bit(11,2) << '\n'; //11 er 2 no bit on or off? 1-> on , 0 -> off

    print_on_bit(11);
    print_off_bit(11);
    cout << "Total on bits: " << count_on_bit(11) << '\n'; 
    cout << is_Even(11)<< '\n';
    cout << "After changing specific bit decimal is: " << set_kth_bit(11,2) << '\n';

    cout << "Middle er ekta specific bit change korar por" << toggle_kth_bit(11,2) << '\n';

    cout << "Check power of 2: " << check_power_of_2(17) << '\n';
    return 0;
}
