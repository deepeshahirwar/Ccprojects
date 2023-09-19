// passward and email validation
 #include<iostream> 
 #include<bits/stdc++.h>
using namespace std;  

bool checkEmail(string emailInput) {
  string emaiPattern = "/^[^]+@[^]+.abcdefghijklmnopqrstuvwxyz{2,3}$/";
  if (!emailInput.find(emaiPattern)) {
    return false; //adding invalid class if email value do not mathced with email pattern
  }
 return true; //removing invalid class if email value matched with emaiPattern
}   

//Confirm Email Validtion 
bool confirmEmail(string emailInput, string cemailInput) {
 
  if (emailInput != cemailInput || cemailInput =="" ) {
    return false; // invalid   email 
  }
 return true; //valid
}  
//Confirm Password Validtion
bool confirmPass(string passInput, string cPassInput) {
  if (passInput != cPassInput || cPassInput == "") {
    return false;
  }
  return true;
} 

int main(){ 
    cout<<"************* Create Your New Account ************\n\n"; 
    cout<<"#************ Enter Your E-mail Address *****************#\n\n";   
    string emailInput; 
     cin>>emailInput;   
    
    bool checkE = checkEmail(emailInput);  
    if(checkE) {  
    cout<<"@************** Create Your passward ***************@\n"; 
     
    jump:
    string passInput;  
    cin>>passInput;  

   bool checkP=true;
   if(passInput.size() < 8 ||passInput.size() > 20){ 
      cout<<"--------------- / Please enter atleast 8 character password / -------------------\n\n"; 
      goto jump;
    }  
    else{
      checkP=true; 
    }  
   
    if(checkP){
      cout<<"------------ / ************* Your Account Successfully Created ************** / ---------------- \n\n"; 
      cout<<"****** ---------- login your account ------- *********\n"; 

      bool flg=true, flg_mail=true; 
        mail:
     
      string Con_email; 
       string Con_pass;

     if (flg_mail==true || flg_mail==false) {
      cout<<"/ ------- Enter your email ------------ /\n\n"; 
     
      cin>>Con_email; 
     }

     if (flg==true || flg==false) {
      cout<<"/ --------- Enter your password ------ /\n\n"; 
      
      cin>>Con_pass;  
     }
    
      bool check3=confirmEmail (Con_email,emailInput); 
      bool check4=confirmPass (Con_pass,passInput); 

       if (check3 && check4){
        cout<<"=========== *********** Successfully login *********** ============ \n"; 
        cout<<"*******************Thank you for creating account **************** \n\n";
      } 
       else if (!check3 && check4)
      {
          cout<<"___________ You have enter wrong email _____________\n";
        flg= false;
        goto mail;
        
      }
      else if (check3 && !check4)
      {
          cout<<"______________ You have enter wrong password ________________ \n";
        
        flg_mail = false;
        goto mail;
      }
      else{
        cout<<"<-------------- *** Wrong email or passward Try again *** --------------->\n";
         goto mail;
      }
     }
    } 
    else{
        cout<<"################ Please Enter valid email ##################\n";
    }
   return 0; 
}