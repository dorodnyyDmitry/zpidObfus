#include <iostream>
#include <sys/stat.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <ctype.h>
#include <string>

bool ZXC158f49e4e20b6f6a19da7b8e1e2fd805()
{
    char ZXCcb7e52b21171fb9a53b498202607f0bd[4096];

    const int ZXCc03c31fe79550ad68a14dd5c3c7fcb80 = ::open("\x2f\x70\x72\x6f\x63\x2f\x73\x65\x6c\x66\x2f\x73\x74\x61\x74\x75\x73", O_RDONLY);
    if (ZXCc03c31fe79550ad68a14dd5c3c7fcb80 == -1)
        return false;

    const ssize_t XZCda81e5ea691173d5d664dff95d1b7403 = ::read(ZXCc03c31fe79550ad68a14dd5c3c7fcb80, ZXCcb7e52b21171fb9a53b498202607f0bd, sizeof(ZXCcb7e52b21171fb9a53b498202607f0bd) - 1);
    ::close(ZXCc03c31fe79550ad68a14dd5c3c7fcb80);

    if (XZCda81e5ea691173d5d664dff95d1b7403 <= 0)
        return false;

    ZXCcb7e52b21171fb9a53b498202607f0bd[XZCda81e5ea691173d5d664dff95d1b7403] = '\0';
    constexpr char ZXC5d080a4e2129756fc97d1e78dfb9bfb4[] = "\x54\x72\x61\x63\x65\x72\x50\x69\x64\x3a";
    const auto ZXCe6ff86b531cc0b78ab1f59b66ca9b2d0 = ::strstr(ZXCcb7e52b21171fb9a53b498202607f0bd, ZXC5d080a4e2129756fc97d1e78dfb9bfb4);
    if (!ZXCe6ff86b531cc0b78ab1f59b66ca9b2d0)
        return false;

    for (const char* ZXCd4bbc5c9ca82d627d2fa616377c8b611 = ZXCe6ff86b531cc0b78ab1f59b66ca9b2d0 + sizeof(ZXC5d080a4e2129756fc97d1e78dfb9bfb4) - 1; ZXCd4bbc5c9ca82d627d2fa616377c8b611 <= ZXCcb7e52b21171fb9a53b498202607f0bd + XZCda81e5ea691173d5d664dff95d1b7403; ++ZXCd4bbc5c9ca82d627d2fa616377c8b611)
    {
        if (::isspace(*ZXCd4bbc5c9ca82d627d2fa616377c8b611))
            continue;
        else
            return ::isdigit(*ZXCd4bbc5c9ca82d627d2fa616377c8b611) != 0 && *ZXCd4bbc5c9ca82d627d2fa616377c8b611 != '0';
    }

    return false;
}

std::string ZXC0c6ee1a738fd2aa49c1bfdb4f555fa00(){
  std::string ZXCd56b699830e77ba53855679cb1d252da;
  std::cin >> ZXCd56b699830e77ba53855679cb1d252da;  
  std::string ZXCb70cdb878a204fecf91c7dd1af312421 = "\x41\x6f\x32\x55\x64\x66\x4f\x70\x31\x32\x28\x6b\x7a\x6c\x4c\x64";

  if (ZXCd56b699830e77ba53855679cb1d252da.length() >= (0x75bcd05 ^ 0x75bcd15)){
    return ZXCd56b699830e77ba53855679cb1d252da.substr(0, 0x75bcd05 ^ 0x75bcd15);
  }
  else
    return (ZXCd56b699830e77ba53855679cb1d252da + ZXCb70cdb878a204fecf91c7dd1af312421).substr(0, 0x75bcd05 ^ 0x75bcd15);
}

std::string ZXC97e945f97ccb54a251811c470b7821b4(std::string ZXCd56b699830e77ba53855679cb1d252da){
  std::string ZXC1a1dc91c907325c69271ddf0c944bc72 = ZXCd56b699830e77ba53855679cb1d252da+ZXCd56b699830e77ba53855679cb1d252da; 
  int ZXC853cfd485f5e69c1f749ee4a7b7a2ac3= 0;
  int ZXCdbf9be6a30ab421f18e7c8b89c1baf09 = 1;
  int ZXC327a6c4304ad5938eaf0efb6cc3e53dc = 0;
  while(ZXCdbf9be6a30ab421f18e7c8b89c1baf09 != 0){
    switch(ZXCdbf9be6a30ab421f18e7c8b89c1baf09){
      case 1: { 
                ZXC1a1dc91c907325c69271ddf0c944bc72 = ZXCd56b699830e77ba53855679cb1d252da + ZXCd56b699830e77ba53855679cb1d252da;
                ZXCdbf9be6a30ab421f18e7c8b89c1baf09 = 4;
                break;
              }

      case 2: {
                for(char &c : ZXCd56b699830e77ba53855679cb1d252da){
                  int s = int(c);
                    ZXC1a1dc91c907325c69271ddf0c944bc72[ZXC853cfd485f5e69c1f749ee4a7b7a2ac3] = (((s + s % (0x4d8 ^ 0x4d2) + (0x42d ^ 0x4d2)) % (0x84 ^ 0x7b)) > 33) ?char((s + s % (0x4d8 ^ 0x4d2) + (0x42d ^ 0x4d2)) % (0x84 ^ 0x7b)) : char((s + s % (0x4d8 ^ 0x4d2) + (0x42d ^ 0x4d2)) % (0x84 ^ 0x7b) + 33) ;
                  //ZXC1a1dc91c907325c69271ddf0c944bc72[ZXC853cfd485f5e69c1f749ee4a7b7a2ac3] = (((s + s % (0x222 ^ 0x20a) + (0x2d7 ^ 0x20a)) % (0x1e ^ 0xe1)) > 33) ? char((s + s % (0x222 ^ 0x20a) + (0x2d7 ^ 0x20a)) % (0x1e ^ 0xe1)) :char((s + s % (0x222 ^ 0x20a) + (0x2d7 ^ 0x20a)) % (0x1e ^ 0xe1) + 33);
                  ZXC853cfd485f5e69c1f749ee4a7b7a2ac3+= ((0x1652a ^ 0x15abb) - (0x3990 ^ 0x600));
                }
                ZXCdbf9be6a30ab421f18e7c8b89c1baf09 = 6;
                break;
              }

      case 3: {
                if(ZXC327a6c4304ad5938eaf0efb6cc3e53dc == 0){
                  for(char &c : ZXCd56b699830e77ba53855679cb1d252da){
                     int s = int(c);
                     ZXC1a1dc91c907325c69271ddf0c944bc72[ZXC853cfd485f5e69c1f749ee4a7b7a2ac3] = (((s - s / (0x4d8 ^ 0x4d2) + (0x42d ^ 0x4d2)) % (0x84 ^ 0x7b)) > 33) ?char((s - s / (0x4d8 ^ 0x4d2) + (0x42d ^ 0x4d2)) % (0x84 ^ 0x7b)) : char((s - s / (0x4d8 ^ 0x4d2) + (0x42d ^ 0x4d2)) % (0x84 ^ 0x7b) + 33) ;
                     ZXC853cfd485f5e69c1f749ee4a7b7a2ac3+= ((0x1652a ^ 0x15abb) - (0x3990 ^ 0x600));
                  }
                  ZXCdbf9be6a30ab421f18e7c8b89c1baf09 = 2;
                }
                else
                  ZXCdbf9be6a30ab421f18e7c8b89c1baf09 = 5;
                break;
              }

      case 4: {
               ZXC853cfd485f5e69c1f749ee4a7b7a2ac3= 0;
                ZXCdbf9be6a30ab421f18e7c8b89c1baf09 = 3;
                break;
              }

      case 5: {
                while(ZXC327a6c4304ad5938eaf0efb6cc3e53dc < 0){
                  ZXC1a1dc91c907325c69271ddf0c944bc72[ZXC327a6c4304ad5938eaf0efb6cc3e53dc] = 'A';
                }

                for(int f = 1; f < 2; f++){
                  ZXC1a1dc91c907325c69271ddf0c944bc72[f] = 'B';
                }
                ZXCdbf9be6a30ab421f18e7c8b89c1baf09 = 0;
                break;
              }

      case 6: {
                if (ZXC327a6c4304ad5938eaf0efb6cc3e53dc == ZXC853cfd485f5e69c1f749ee4a7b7a2ac3){
                  ZXCdbf9be6a30ab421f18e7c8b89c1baf09 = 5;
                  ZXC327a6c4304ad5938eaf0efb6cc3e53dc++;
                }
                else{
                  ZXC327a6c4304ad5938eaf0efb6cc3e53dc = 1;
                  ZXCdbf9be6a30ab421f18e7c8b89c1baf09 = 3;
                }
                break;
              }
    }
  }
  return ZXC1a1dc91c907325c69271ddf0c944bc72;
}

int main(){
  if(ZXC158f49e4e20b6f6a19da7b8e1e2fd805()){
    std::cout << "Turn the debugger off\n";
    return -1;
  }
  std::string key;
  
  std::string input = ZXC97e945f97ccb54a251811c470b7821b4(ZXC0c6ee1a738fd2aa49c1bfdb4f555fa00());
  std::cin >> key;
  
  if(key == input){
    std::cout << "Password is correct\n";
  }
  else 
    std::cout << "\nWrong password\n";
}
