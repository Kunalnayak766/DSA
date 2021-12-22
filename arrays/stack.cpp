#include <iostream>
#include <conio.h>

// stack implimentatons by arrays
using namespace std;

class stack
{
private:
    int arr[5];    //array for storinf stack data
    int head = -1; //variable to denote the head position

public:
    //checking if stack if empty
    void isEpety()
    {
        if (head == -1)
            cout << "The stack is Empty\n";
        else
            cout << "The stack is not Empty\n";
    }
    //pushing the values into the stack
    void push(int t)
    {
        head++;
        arr[head] = t;
    }
    //deleting the head
    int pop()
    {
        int temp = arr[head];
        arr[head] = 0;
        head--;
        return temp;
    }
    //counting numbers of items in the stack
    int count()
    {
        return head + 1;
    }
    void display()
    {
        for (int i = 0; i < head + 1; i++)
        {
            cout << arr[head - i] << endl;
        }
    }
};

int main()
{
    int opotion, x; //variables for useres operation and storing data
    stack S1;       //stack object contains array and methods
    do
    {
        cout << "Enter 1 to push a value\n";
        cout << "Enter 2 to pop a value\n";     //choicses given
        cout << "Enter 3 count No. of items\n"; // to the user
        cout << "Enter 4 to claer screen\n";
        cout << "Enter 5 to call isEmpty()\n";
        cout << "Enter 6 to display elements\n";
        cout << "Enter 10 to exit\n";

        cin >> opotion; //choice by user

        switch (opotion) //deffernt operation according to users choice
        {
        case 1:
            if (S1.count() == 5)
            {
                cout << "!!!!!!!!!!!!!!!!!! Stach Overflow !!!!!!!!!!!!!!!!\n";
            }
            else
            {
                cout << "Enter a value ";
                cin >> x;
                S1.push(x);
            }
            break;
        case 2:
            if (S1.count() == 0)
            {
                cout << "!!!!!!!!!!!!! Stack UnderFlow !!!!!!!!!!!!!!!!!\n";
            }
            else
            {
                x = S1.pop();
                cout << "You poped out the value " << x;
            }
            break;
        case 3:
            x = S1.count();
            cout << "No of values of elemts are " << x;
            break;
        case 4:
            system("cls");
            break;
        case 5:
            S1.isEpety();
            break;
        case 6:
            S1.display();
            break;
        default:
            cout << "!!!!!!Wrong Input!!!!\n";
            break;
        }
    } while (opotion != 10);

    return 0;
}