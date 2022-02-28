이곳에는 내가 한 개발만을 적는다
 
 # 목차

 [2월](https://github.com/urous3814/urous3814/blob/main/Development_log.md#2022%EB%85%84-2%EC%9B%94)   
  
---

<details>
<summary>양식</summary>
<div markdown="1">
  
---

## 날짜 [개발 ]

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

## 2022/02/14 [OFFLINE]

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

## 2022/02/15 [OFFLINE]

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
  
  
<details>
<summary>2022/02/21</summary>
<div markdown="1">
  
---

## 2022/02/21 [ONLINE]

### [The Coala](https://github.com/urous3814/TheCoala_Dev/tree/main/02/21)

#### The Coala Server
  
  * 모든 API 사용부 Try Catch로 변경(API)
    * 정답처리 부분 Try Catch처리
      * 정답처리시 먼저 id_Scheck 보내놓고 처리
        * 기능 구현 완료, 테스트 필요
  * Server FormClose시 학생 DB에서 Logout처리 안됨.
    * Substr 범위 잘못되어있었음
    * Application->Terminate() 가 DB Logout 처리 되기 전에 실행되어 처리중 나가짐
      * ~~Disconnect~~ formclose 에서 처리하게 변경
        * 취소
    * DBLogout이 rmDelete가 아니라 rmPost로 처리되고있었음
      * 해결

#### 회의
  
  * The Coala Test
    * 호주 원격수업
      * 호주는 인터넷 딜레이가 길어 현 api 시간제한으로는 어려움(issue)
    * try catch 로 api 기동시 에러가 안난다고 함
      * 현재 테스트중
        * 별 문제 없이 작동중
    * 새 디자인 초안 완성
      *도입중(태민t)
    * 마지막 한명이 안나가는 일 발생
    
  
---
 
</div>
</details>


<details>
<summary>2022/02/24</summary>
<div markdown="1">
  
---

## 2022/02/24 [ONLINE]

### [The Coala](https://github.com/urous3814/TheCoala_Dev/tree/main/02/24)

#### Coala Windows Server
  
  * 디자인 변경
    * 추가점수 메뉴 디자인 변경
      * 오타, 에러 및 각종 이슈또한 해결
    * Student Info Form 수정
    * Main Form 코드뷰어 구조 변경
  * 변수 통합 및 정리 진행

#### Coala Windows Client
  
  * 디자인 변경
    * Login Form 디자인 변경
      * Teacher Selection 구역 구조 변경
      *SonLab 로고 추가
    * 다크모드 추가
      * CodeEditon 부분의 다크모드 기능 추가
        * PopupMenu에 다크모드 ON/OFF 기능 추가
        * 다크모드용 Syntax Highlighter 구현(c,c++ / python)
  * Main Form Close 시 DB_Logout 기능 제거(서버로 이전)
  * ListBox2 의 보여지는 student info 변경(Name)
  * Code 채점 시 그다음 Problem 주는 기능 수정
    * P_num 기준 문제제공에서 DB 기준으로 변경
  * 재접속 기능 보완
---
 
</div>
</details>


<details>
<summary>2022/02/28</summary>
<div markdown="1">
  
---

## 2022/02/28 [개발 ]

### [The Coala](프로젝트 레포 링크)

#### 프로그램명
  
  * 주요변경사항(보충설명)
    * 하위 변경사항
      * 하위 변경사항 설명

#### The Coala Meeting
  
  * A팀 회의
    * 컴파일 방법 수정
      * Offline Compiler 기본으로 사용하고 문제 생길시 교사가 Online Compiler 기능 사용권한 주게하기
    * 코드전송 프로세스 수정 (너무 많은 자원 쓸데없이 사용)
      * 제출시 코드를 DB로 보낸후 가져오는것이 아니라 Redis를 통해 보내고 그것을 받아와 정답처리시에만 DB에 저장하게 하기
        * Redis 용량제한 확인해보기
    * DB기준이 아니라 Redis 로그인 상태를 통해서 로그인을 확인하는 방향으로 진행(Redis와 DB가 따로놈)
      * Redis가 DB에 로그인상태 기록하고 그 후에 서버에서 그것을 확인해 로그인
     
  
---
 
</div>
</details>



