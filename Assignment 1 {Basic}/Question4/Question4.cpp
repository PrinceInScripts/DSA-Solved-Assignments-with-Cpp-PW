/*
Q4. What is the output of this program?
int main() {
    int a = 4;
    int b = 5;
    a++, b--;
    cout << ++a << " " << b--;
}
*/

/*
Ans. 
    int main() {
        int a = 4;   //line 1
        int b = 5;   // line 2
        a++, b--;    // line 3
        cout << ++a << " " << b--; //line 4
    }

     In that program have 2 variable a and b and them make a container in memory with the value of a is 4 and b = 5 in line 1 and line 2,
     and line 3 the value of a is increment by 1 and now the value of a is 5 and the value of b is decrement by 1 and now value of b is 4,
     in line 4 using of cout we print ouput , in them line 4 first prefix increment in a variable it means it's value is now 6 and these is show on screen,
     after that some gap are here and then postfix decrement in b it means first is print the value of b is 5 and then in decrement is done it means first is show on output and in memory decrement by 1 ;

     so according to the upper program output is : 
     #output 
     6 4
*/