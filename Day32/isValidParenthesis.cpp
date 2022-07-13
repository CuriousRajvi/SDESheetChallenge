bool isValidParenthesis(string exp)
{
    string temp="";
    int n=exp.length();
    for(int i=0;i<n;i++){
        if(exp[i]=='{' || exp[i]=='[' || exp[i]=='(')
            temp.push_back(exp[i]);
        else{
            if((temp.back()=='{' && exp[i]=='}')|| (temp.back()=='[' && exp[i]==']' ) || (temp.back()=='(' && exp[i]==')'))
                temp.pop_back();
            
             else
                 return 0;
            }
        }
    
    if(temp.length()==0)
        return 1;
    else
        return 0;
}
