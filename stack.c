//stack,push(),pop(),display(
    #define MAX 6
    int top=-1;
void push(int x){
    if (top==MAX-1){
        printf("stack is full!\n")
    }}
    else{
        top++;
        box[top]=x;
        printf("value %d has been added\n", x);
    }
}
int pop(){
    if (top==-1){
        printf("stack is empty!\n");
        
    }
    else{
        //--top;
        int x=box[top--];
        printf("value %d has been removed\n", x);
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70);
}