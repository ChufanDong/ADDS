#include <iostream>
#include <vector>
#include <stack>
#include <string> 

using namespace std;

string SwitchToMid(string str){
    bool again = false;
    string oper, nums, result;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '+' ||str[i] == '-' ||str[i] == '*' ||str[i] == '/'){}
        else{
            oper.assign(str, 0, i);
            str.erase(0, i);
            break;
        }
    }

    for(int i = 0; i < str.length(); i++){
        if(i+1==str.length()){
            nums.assign(str);
            str = "";
            break;
        }
        else if(str[i] >= '0' && str[i] <= '9'){
        }
        else{
            nums.assign(str, 0, i);
            str.erase(0, i);
            again = true;
            break;
        }
    }
    
    int size_oper = oper.length()-1;
    int size_nums = 0;

    while( 1 ){
        if (size_nums != nums.length()){
            result += nums[size_nums];
            size_nums++;
        }
        if(size_oper >= 0){
            if (oper[size_oper] == '*' || oper[size_oper] == '/'){
                if(oper[size_oper+1] == '+' || oper[size_oper+1] == '-'){
                    result = result.insert(0,"(");
                    result += ')';
                    result += oper[size_oper];
                    size_oper--;
                }
                else{
                    result += oper[size_oper];
                    size_oper--;
                }
            }
            else{
                result += oper[size_oper];
                size_oper--;
            }
        }
        else{
            break;
        }
    }
    if(again == true){
        result = result + SwitchToMid(str);
    }
    return result;
}

string calculator(string str){
    string result;
	stack<int> mysk_num;
	stack<char> mysk_oper;
	
	int size = str.size(); 
	int num1, num2, num3;
	
	for(int i=size-1; i>=0; i--){
		if(str[i] >= '0' && str[i] <= '9') 
			mysk_num.push(str[i]-'0');
		else{
            if (!mysk_num.empty()){
                num1 = mysk_num.top();
			    mysk_num.pop();
            }
            else{
                cout<<"Error"<<endl;
                return 0;
            }
			if (!mysk_num.empty()){
                num2 = mysk_num.top();
			    mysk_num.pop();
            }
            else{
                return "Error";
            }
			
			if(str[i] == '+') num3 = num1 + num2;
			else if(str[i] == '-') num3 = num1 - num2;
			else if(str[i] == '*') num3 = num1 * num2;
			else if(str[i] == '/') num3 = num1 / num2;
			
			mysk_num.push(num3);
		}
	}
    cout<<SwitchToMid(str)<<" = ";
    result = to_string(mysk_num.top());
    return result;
}

int main(){
    string Input;
    getline(cin, Input);
    for(int i = 0; i < Input.length(); i++){
        if (Input[i] == ' ') Input.erase(i,1);
    }
    cout<<calculator(Input)<<endl;

    return 0;
}