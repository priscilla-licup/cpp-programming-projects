#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int a,b;
    char op;
    float answer;

    cin >> a >> op >> b;
    
    switch (op)
    {
        case '+':
            answer = a+b;
            cout << setprecision(2) << fixed << "Entered Expression: " << a << " + " << b << " = " << answer;
            break;

        case '-':
            answer = a-b;
            cout << setprecision(2) << fixed << "Entered Expression: " << a << " - " << b << " = " << answer;
            break;

        case '*':
            answer = a*b;
            cout << setprecision(2) << fixed << "Entered Expression: " << a << " * " << b << " = " << answer;
            break;

        case '/':
            if (b==0){
            cout << "Entered Expression: Divide by Zero Error!";
            }
            else{
            answer = a/b;
            cout << setprecision(2) << fixed << "Entered Expression: " << a << " / " << b << " = " << answer;
            }
            break;
            
        case '%':
            if (b==0){
            cout << "Entered Expression: Divide by Zero Error!";
            }
            else{
            answer = a%b;
            cout << "Entered Expression: " << a << " % " << b << " = " << answer;
            }
            break;

        default:
            cout << "Error! operator is not correct";
            break;
    }

    
     return 0;
}