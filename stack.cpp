/* C++ program to implement basic stack 
   operations */
#include <iostream>
using namespace std; 

template <class T>   
class Stack{
private: 
    int top; 
    int MAX;
  
public: 
    T *a; // Maximum size of Stack 
    Stack(int size) {
        MAX=size;
        a= new T[MAX];
        top = -1;
        } 
    bool push(T x); 
    T pop(); 
    T peek(); 
}; 
template <typename T> 
bool Stack<T>::push(T x) 
{ 
    if (top >= (MAX - 1)) { 
        cout << "Stack Overflow"; 
        return false; 
    } 
    else { 
        a[++top] = x; 
        cout << x << " pushed into stack\n"; 
        return true; 
    } 
} 
template <typename T> 
T Stack<T>::pop() 
{ 
    if (top < 0) { 
        cout << "Stack Underflow"; 
        return 0; 
    } 
    else { 
        T x = a[top--]; 
        return x; 
    } 
} 
template <typename T> 
T Stack<T>::peek() 
{ 
    if (top < 0) { 
        cout << "Stack is Empty"; 
        return 0; 
    } 
    else { 
        T x = a[top]; 
        return x; 
    } 
} 

  
// Driver program to test above functions 
int main() 
{ 
    
    class Stack<string>s(3); //here the stack is taking strings
     s.push("abc"); 
    // s.push(20); 
    // s.push(35); 
    cout << s.pop() << " Popped from stack s\n"; 
    class Stack<int>s1(3);
    s1.push(10); 
    s1.push(20); 
    s1.push(35); 
    cout << s1.pop() << " Popped from stack s1\n"; 

    return 0; 
} 