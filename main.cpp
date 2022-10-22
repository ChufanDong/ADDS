#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

string SwitchToMid(vector<string> str){
    bool again = false;
    vector<string> oper, nums;
    string result;

    for(int i = 0; i < str.size(); i++){
        if(str[i] == "+" ||str[i] == "-" ||str[i] == "*" ||str[i] == "/"){}
        else{
            oper.assign(str.begin(),str.begin()+i);
            str.erase(str.begin(),str.begin()+i);
            break;
        }
    }

    for(int i = 0; i < str.size(); i++){
        if(i+1==str.size()){
            nums.assign(str.begin(),str.end());
            str.erase(str.begin(),str.end());
            break;
        }
        else if(stoi(str[i]) >= 0 && stoi(str[i]) <= 99){
        }
        else{
            nums.assign(str.begin(),str.begin()+i);
            str.erase(str.begin(),str.begin()+i);
            again = true;
            break;
        }
    }

    
    int size_oper = oper.size()-1;
    int size_nums = 0;

    while( 1 ){
        if (size_nums != nums.size()){
            result += nums[size_nums];
            size_nums++;
        }
        if(size_oper >= 0){
            if (oper[size_oper] == "*" || oper[size_oper] == "/"){
                if(size_oper == oper.size()-1){
                    result += oper[size_oper];
                    size_oper--;
                }
                else if(oper[size_oper+1] == "+" || oper[size_oper+1] == "-"){
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

string calculator(vector<string> str){
    int counter_nums = 0, counter_opers = 0;
    string result;
	stack<int> mysk_num;
	stack<char> mysk_oper;
	
	int size = str.size(); 
	int num1, num2, num3;
	
	for(int i=size-1; i>=0; i--){
        if(str[i]=="+"||str[i]=="-"||str[i]=="*"||str[i]=="/"){
            counter_opers++;
            if (!mysk_num.empty()){
                num1 = mysk_num.top();
			    mysk_num.pop();
            }
            else{
                return "Error";
            }
			if (!mysk_num.empty()){
                num2 = mysk_num.top();
			    mysk_num.pop();
            }
            else{
                return "Error";
            }
			
			if(str[i] == "+") num3 = num1 + num2;
			else if(str[i] == "-") num3 = num1 - num2;
			else if(str[i] == "*") num3 = num1 * num2;
			else if(str[i] == "/") num3 = num1 / num2;
			
			mysk_num.push(num3);
        }
		else{
            mysk_num.push(stoi(str[i]));
            counter_nums++;
        }
	}
    if (counter_nums != counter_opers+1){
        return "Error";
    }
    std::cout<<SwitchToMid(str)<<" = ";
    result = to_string(mysk_num.top());
    return result;
}

int main(){
    vector<string> Input;
    string getEnter;
    while (cin>>getEnter){
        Input.push_back(getEnter);
        if(cin.get() == '\n'){
            break;
        }
    }
    std::cout<<calculator(Input)<<endl;

    return 0;
}
