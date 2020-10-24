// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int input, choose, checker;
    
    do {
    printf("1) 회원정보 등록\n2) 회원정보 조회\n3) 회원정보 수정\n4) 회원정보 삭제\n5) 종료\n");
    printf("\n메뉴를 입력하세요: ");
    scanf("%d", &input);
    
    switch(input) {
      case 1:
       printf("회원정보 등록 화면입니다.\n\n");
       printf("번호를 입력하세요 (1: 메뉴 화면, 2: 종료): ");
       scanf("%d", &choose);
       if(choose == 1) {
           checker = 1;
       } else if (choose == 2) {
           checker = 0;
       } else {
           checker = 1;
       }
       break;
       default:
       checker = 1;
       break;
    }
       while(checker == 0)
         return 0;
    }

}