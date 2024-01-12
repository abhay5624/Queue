#include<bits/stdc++.h>
using namespace std;
class CircularQueue{
    public:
        int *arr;
        int front;
        int rear;
        int size;
        CircularQueue(int size)
        {
            this->size = size;
            this->arr = new int[size];
            this->front = -1;
            this->rear = -1;
        }
        void push(int d){
            if(this->front==0 && this->rear==this->size-1 ||this->rear==(this->front-1)%(this->size-1)){
                cout << "Queue is full" << endl;
                return;
            }
            else if(this->front==-1){
                this->front = this->rear = 0;
              }else if(this->rear==(size-1)&& this->front!=0){
                this->rear = 0;
              }else{
                this->rear++;
             }
            this->arr[this->rear] = d;

        }
        void pop(){
            if(this->front==this->rear==-1){
                cout << "Queue is empty" << endl;
                return;
            }else if(this->front==this->rear){
                this->arr[this->front] = -1;
                this->front = this->rear = -1;
            }else if(this->front==this->size-1){
                this->arr[this->front] = -1;
                this->front = 0;
            }else{
                this->arr[this->front] = -1;
                this->front++;
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
