/**************************************
 ** 볼링 점수 계산 프로그램          **
 **   작성자 : 박상호                **
 **  작성일 : 2016년 5월 9일         **
 **************************************/

#include <stdio.h>

int main(void) {

    int game = 1,set = 1,subset = 1,score = 0,getscr1,getscr2 = 0;
    int spare,strike = 0;
    int bos1,bos2;

    /* game 변수 => while문 작동
       set,subset 변수 => %d번째 프레임 %d 번째 처리 에서 %d값
       score 변수 => 지금까지 득점한 점수
       getscr1,getscr2 변수 => 맞춘 핀의 갯수
       bos1,bos2 변수 => getscr1,getscr2 저장 변수 */

    while (game) {


    if ( (getscr1 + getscr2) == 10 ) { // 스페어 성공

    printf("%d번째 프레임 %d 번째 처리 핀 수 = ", set, subset);
    scanf("%d",&getscr1); 
    printf("**** 현재까지 점수 : %d\n", score += getscr1 * 2 );


    } else if ( (getscr1 + getscr2 ) != 10 && strike == 1 ) { // 1번 스트라이크 성공

    printf("%d번째 프레임 %d 번째 처리 핀 수 = ", set, subset);
    scanf("%d",&getscr1); 
    printf("**** 현재까지 점수 : %d\n", score += getscr1 * 2   );


    } else if ( (getscr1 + getscr2 ) != 10 && strike >= 2 ) { // 2번이상 연속스트라이크 성공

    printf("%d번째 프레임 %d 번째 처리 핀 수 = ", set, subset);
    scanf("%d",&getscr1); 
    printf("**** 현재까지 점수 : %d\n", score += getscr1 * 3); 

    } else if ( (getscr1 + getscr2 ) != 10 ) { // 스페어 실패

      printf("%d번째 프레임 %d 번째 처리 핀 수 = ", set, subset);
      scanf("%d",&getscr1); 
      printf("**** 현재까지 점수 : %d\n", score += getscr1);

    }


    bos1 = getscr1; // bos1에 getscr1 저장

    subset++; // subset 1 증가

    if ( getscr1 != 10 && strike >= 1) { // 스트라이크를 연속으로 1번이상 친 후 스트라이크를 연속해서 못쳣을때

    strike = 0; // getscr1에서 스트라이크를 치지 못해 strike값 초기화

    printf("%d번쨰 프레임 %d 번쨰 처리 핀 수 = ", set, subset);
    scanf("%d",&getscr2);
    printf("**** 현재까지 점수 : %d\n", score += getscr2 * 2);
    

    bos2 = getscr2; // 10프레임 준비를 위해 bos2에 getscr1 값 저장

    subset--; // subset 1로 초기화

    set++; // set 1 증가

    
    } else if ( getscr1 != 10 && strike == 0) { // 스트라이크를 연속으로 치지 못한 후 스트라이크를 못쳣을때 

    printf("%d번쨰 프레임 %d 번쨰 처리 핀 수 = ", set, subset);
    scanf("%d",&getscr2);
    printf("**** 현재까지 점수 : %d\n", score += getscr2);
    
    bos2 = getscr2; // 10프레임 준비를 위해 bos2에 getscr1 값 저장

    subset--; // subset 1로 초기화

    set++; // set 1 증가

    } else if ( getscr1 == 10 ){ // 스트라이크를 쳣을때


    bos2 = getscr1; // 10프레임 준비를 위해 bos2에 getscr1 값 저장
      
    strike++; 

    subset--; // subset 1로 초기화

    set++; // set 1 증가

    getscr1 = 0; // getscr1 0 초기화

    }



    if (set > 9) { // 9프레임 까지 진행된다

      game = 0; // 10프레임 부터 while문 종료

    }

    }

    game = 1; // 10프레임을 위한 while문을 시작하기위해 값 1 설정

    int getscr4,getscr5 = 0; 
    int str = 1,spr = 1;

    /* getscr4,getscr5 변수 => 맞춘 핀의 갯수   
       str,spr 변수 => 10프레임 2세트까지 스트라이크 및 스페어 성공 유무 확인 */
    while(game) {

      if ( bos2 == 10 && strike >= 2 && str == 1 && spr == 1) { 

      printf("%d번째 프레임 %d 번째 처리 핀 수 = ", set, subset);

      scanf("%d",&getscr4);

      printf("**** 현재까지 점수 : %d\n", score += getscr4 * 3);

      } else if ( bos1 + bos2 == 10 && str == 1 && spr == 1) {

      printf("%d번째 프레임 %d 번째 처리 핀 수 = ", set, subset);
      
      scanf("%d",&getscr4); 
      
      printf("**** 현재까지 점수 : %d\n", score += getscr4 * 2 );

      } else if ( bos1 + bos2 != 10 && str == 1 && spr == 1) {

      printf("%d번째 프레임 %d 번째 처리 핀 수 = ", set, subset);
      
      scanf("%d",&getscr4); 
      
      printf("**** 현재까지 점수 : %d\n", score += getscr4);

      } else if ( (getscr1 + getscr2 ) != 10 && strike == 1 && str == 1 && spr == 1) {

      printf("%d번째 프레임 %d 번째 처리 핀 수 = ", set, subset);
      
      scanf("%d",&getscr4); 
      
      printf("**** 현재까지 점수 : %d\n", score += getscr4 * 2   );

      }
      
      /* 1프레임 부터 9프레임 까지의 규칙과 동일하다.
         대신, 10프레임 2세트 까지 스페어 또는 스트라이크를 성공햇는가에 따라
         조건이 달라진다 */

      subset++; // 세트 1 증가

      str = 0; // 스트라이크 값 초기화
      spr = 0; // 스페어 값 초기화

    if ( strike >= 1 && subset < 4) {

    strike = 0; // 3세트 부터 득점에 더하기만 하기위해 변수 값 초기화

    printf("%d번쨰 프레임 %d 번쨰 처리 핀 수 = ", set, subset);
    scanf("%d",&getscr5);
    printf("**** 현재까지 점수 : %d\n", score += getscr5 * 2);
    
    
    bos1 = 0; // 3세트 부터 득점에 더하기만 하기위해 변수 값 초기화
    bos2 = 0; // 3세트 부터 득점에 더하기만 하기위해 변수 값 초기화

    subset++; // 세트 1 증가

    } else if (strike == 0 && subset < 4) {

    printf("%d번쨰 프레임 %d 번쨰 처리 핀 수 = ", set, subset);
    scanf("%d",&getscr5);
    printf("**** 현재까지 점수 : %d\n", score += getscr5);
    
    bos1 = 0; // 3세트 부터 득점에 더하기만 하기위해 변수 값 초기화
    bos2 = 0; // 3세트 부터 득점에 더하기만 하기위해 변수 값 초기화

    subset++; // 세트 1 증가

    }

    if ( getscr4 == 10 ) { // 10프레임 1세트에서 스트라이크 성공

      str = 1;
      spr = 1;


    } else if ( getscr4 + getscr5 == 10 ) { // 10프레임 2세트까지 스페어 성공

      spr = 1;
      str = 1;

    }

      if ( subset > 3 ) { // 3세트 진행된후 while문 종료

        game = 0;

      }
    }

    return 0;

}
