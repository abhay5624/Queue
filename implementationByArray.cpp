#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
        int *arr;
        int front;
        int rear;
        int size;
        Queue(int size)
        {
            this->arr = new int[size];
            this->size = size;
            this->front = 0;
            this->rear = 0;
        }
        void push(int data){
            if(this->rear==this->size){
                cout << "Overloaded" << endl;
                return;
            }
            this->arr[this->rear] = data;
            this->rear++;
        }
        void pop(){
            if(empty()){
                cout << "Queue is already empty" << endl;
                return;
            }
            this->arr[this->front] = -1;
            this->front++;
            if(this->front==this->rear){
                this->front = 0;
                this->rear = 0;
            }
        }
        int front(){
            return this->arr[this->front];
        }
        bool empty(){
            if(this->front==this->rear)
            {
                return true;
            }else{
                return false;
            }
        }
        
};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    return 0;
}
