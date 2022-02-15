 # 목차

 [2022/02/14(The Coala)](https://github.com/urous3814/urous3814/blob/main/Development_log.md#20220214)   
 [2022/02/15(The Coala)](https://github.com/urous3814/urous3814/blob/main/Development_log.md#20220215)
  
---

<details>
<summary>양식</summary>
<div markdown="1">
  
---

## 날짜

### [프로젝트명](프로젝트 레포 링크)

#### 프로그램명
  
  * 주요변경사항(보충설명)
    * 하위 변경사항
      * 하위 변경사항 설명

#### 회의
  
  * 활동명
    * 주요 내용
      * 결과 및 보충내용
  
---
 
</div>
</details>

# 2022년 2월

<details>
<summary>2022/02/14</summary>
<div markdown="1">  
 
-----------------------------------------------------------------------------

## 2022/02/14

### [The Coala](https://github.com/urous3814/TheCoala_Dev/tree/main/02/14)

#### Coala Windows Server

 * ListBox2 접속학생 표기방법, 저장방법 변동(id -> id,name / ~~배열에 저장~~ )
   * SUNCHUL function 수정
     * name값 받아오는 sql 추가
   * Check_Login function 수정
     * logout시 표기되는 요소 id > name 수정
   * user interface 표기되는 요소 name 으로 수정
  
 * Coala Server 원격 종료 수단 제작(redis/RestAPI 사용)
   * RestAPI 기능 제작
   * Thread 기능추가, **수정필요**
   
 * id, name 값 제대로 저장 안된것들 수정(API, mysql)
   * teacher, teacher_name, teacher_id, Teacher, Teacher_Check 변수 제대로 매칭 안된 값들 수정, **변수 정리 및 통합 필요**
   
#### Coala Meeting
  
  * 전체 프로세스 테스트 진행 (Client 24대 사용)
    * Client 비정상 Close(Terminate)시 DB에 Login_Status 변경 안되는 오류 발생
       *  서버에서 DB Login_Status 변경 기능 도입하기로 결정   
    * 서버 원격 접속해제 기능 필요함 
      * 기능 추가, **테스트 필요**   
    * Wifi 강제 종료로 인한 Client 비정상 Disconnect 시 Reconnect 기능에서 오류발생   

  * 회의 진행
    * 보완사항
      1. Problem 다중 전송 기능 필요 (구현)
      2. Connection Check 시 Timer 을 활용해 Reconnect 기능 구현 (구현)(테스트 완료)
      3. API 강희쌤ver로 변경 필요 **(미구현)**
 
 ---
 
</div>
</details>
  
<details>
<summary>2022/02/15</summary>
<div markdown="1">  
  
 ---

## 2022/02/15

### [The Coala](https://github.com/urous3814/TheCoala_Dev/tree/main/02/15)

#### Coala Windows Server
  
  * Coala Server 원격 종료 수단 제작
    * key: ID_Tcheck / value: Logout 을 redis에서 수신해 원격 종료
      * Thread에 id_Tcheck 값들 받아와 Logout이면 ServerLogout() function 수행   
        CodeSubmit이면 CodeSubmitClick function 수행
      * Server의 Form1->Close function 수행 시 프로세스에 Server가 남아있는 버그 발생
        * 현재 Form10 Show로 대체함
   * Login_Check function 에서 Logout한 User Name 표기 오류 해결

#### Coala Meating
  
  * 회의 진행
    * Coala Client 디자인 변경 필요
      * Client의 Answer Panel을 위에서 왼쪽으로 옮기기
      * Client의 Compile, SendCode 버튼 중앙으로 옮기기(미정)
    * Coala API 사용시 key: ID_Tcheck의 value에 요청 사항(CodeSubmit, Logout)을 넣어서 보내기
 
 ---
 
</div>
</details>

---
  

