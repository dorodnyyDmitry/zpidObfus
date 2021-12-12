#include <iostream>
#include <string>


std::string get_login(){
  std::string login;
  std::cin >> login;  
  std::string padding = "Ao2UdfOp12(kzlLd";

  if (login.length() >= 16){
    return login.substr(0, 16);
  }
  else
    return (login + padding).substr(0, 16);
}

std::string genCode(std::string login){
  std::string pass = login+login; 
  int i = 0;
  for(char &c : login){
    int s = int(c);
    pass[i] = (((s - s / 10 + 255) % 255) > 33) ? char((s - s / 10 + 255) % 255) : char((s - s / 10 + 255) % 255 + 33);
    pass[i+16] = (((s + s % 10 + 255) % 255) > 33)? char((s + s % 10 + 255) % 255) : char((s + s % 10 + 255) % 255 + 33);
    i++;
  }
  pass[1] = 'B';

  return pass;
}

int main(){
  std::string input, key;
  input = get_login();
  
  std::cin >> key;

  if(key == genCode(input)){
    std::cout << "Password is correct\n";
  }
  else 
    std::cout << "Wrong password\n";
}
