#include<iostream>
#include<sstream>
using namespace std;

int order(char op);
string infix_to_pofix(string infix);
int pofix_comput(string pofix);

int main(){
    string s;
    while(getline(cin, s)){
        string pofix = infix_to_pofix(s);	//infix -> pofix; 
        cout << pofix_comput(pofix) << endl; //cnt pofix
    }
}

int order(char op){
    switch(op){
        case'(' :
            return -1;
            break;
        case '+' :
        case '-' :
            return 0;
            break;
        default :// * / %
            return 1;
    }
}

string infix_to_pofix(string infix){
    istringstream isstream(infix);
    ostringstream pofix;
    string word;
    char op_stack[1000];
    int top_op = 0;
    while(isstream >> word){               
        if(isdigit(word[0])){	//檢查是不是十進制
            pofix << word << " ";
        }
        else{
            switch(word[0]){
                case '(' : //左括弧直接進入堆疊 
                    op_stack[top_op++] = word[0];
                    break;
                    
                case ')' : //右括弧 ，輸出至左括弧停止
                	//一個左括弧搭配一個又括弧，top_op-1必大於-1 
                    while(op_stack[top_op-1] != '('){
                        pofix << op_stack[--top_op] << " ";
                    } 
                    top_op--;//左括弧不輸出
                    break;
                    
                case '+' : case'-' : case '*' : case '/' : case '%'://加減乘除餘 
                    if(top_op-1 >= 0)
                        while(order(op_stack[top_op-1]) >= order(word[0])&&top_op-1>=0){
                        	//持續輸出堆疊中比自己優先的運算子 
                            pofix << op_stack[--top_op] << " ";
                        }
                        //放入堆疊
                    op_stack[top_op++] = word[0];
                    break;
                    
                    default : 
                        break;
            }
        }
                    
    }
        //讀完全部  全部輸出直到堆疊為空
    while(top_op-1>=0){
        pofix << opStack[--top_op] << " ";           
    }

    return pofix.str();    
}

int pofix_comput(string pofix)
{
    int stack[1000];
    int top = 0;
    istringstream read(pofix);
    string word;
    while(read >> word)
    {
        if(isdigit(word[0]))
        {
            stack[top++] = atoi(word.c_str());
        }
        else
        {
            switch(word[0])
            {
                case '+' : 
                    stack[top-2] = stack[top-2] + stack[top-1];
                    top -= 1;
                    break;
                case '-' :
                    stack[top-2] = stack[top-2] - stack[top-1];
                    top -= 1; 
                    break;
                case '*' :
                    stack[top-2] = stack[top-2] * stack[top-1];
                    top -= 1;
                    break;
                case '/' : 
                    stack[top-2] = stack[top-2] / stack[top-1];
                    top -= 1;
                    break;
                case '%' : 
                    stack[top-2] = stack[top-2] % stack[top-1];
                    top -= 1;
                    break;
            }
        }
    }
    return stack[0];
}
