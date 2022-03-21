 # 목차

 [2월](https://github.com/urous3814/urous3814/blob/main/Development_log.md#2022%EB%85%84-2%EC%9B%94)   
 [3월](https://github.com/urous3814/urous3814/blob/main/Development_log.md#2022%EB%85%84-3%EC%9B%94)
  
---

<details>
<summary>양식</summary>
<div markdown="1">
  
---

## 날짜 [개발 Location]

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

## 2022/02/28 [OFFLINE]

### [The Coala](https://github.com/urous3814/TheCoala_Dev/tree/main/02/28)

#### The Coala Client
  
  * Offline Compile 기능 구현
    * C++빌더의 컴파일러 사용
    * On/Offline Compiler 전환기능 제작(내정보)
#### The Coala Downloader
  * 경로오류 수정
  * BCC 기능설치 추가
  * 최적화

#### The Coala Meeting
  
  * A팀 회의
    * 컴파일 방법 수정
      * Offline Compiler 기본으로 사용하고 문제 생길시 교사가 Online Compiler 기능 사용권한 주게하기(비상용으로)
    * 코드전송 프로세스 수정 (너무 많은 자원 쓸데없이 사용)
      * 제출시 코드를 DB로 보낸후 가져오는것이 아니라 Redis를 통해 보내고 그것을 받아와 정답처리시에만 DB에 저장하게 하기
        * Redis 용량제한 확인해보기
        *현재 제출코드 주석처리해놓음
        *학생이 제출시에는 DB에 저장 안되게 하기
    * 정답처리 프로세스 수정
      * 오답, 재시도, 피드백은 Redis만으로 가게(DB사용 X)
      * 정답은 DB에 기록되게
      * 모든 정답처리 시 Redis로 가기는 하지만 DB 기록은 정답시에만 하게
    * ~~DB기준이 아니라 Redis 로그인 상태를 통해서 로그인을 확인하는 방향으로 진행(Redis와 DB가 따로놈)~~ (보류)
      * Redis가 DB에 로그인상태 기록하고 그 후에 서버에서 그것을 확인해 로그인
    * 디자인 변경 (Client)
      * Form2 의 Label12를 변수로 바꾸기(필요없는 Unvisible Component)
      * 로그인 버튼을 Image2 에서 Button으로 바꾸기(직관적이지 않은 버튼)
    * thread에서 Keyvalue를 계속 선언함(메모리 소모가 큼)
      * Thread에서는 전역변수를 memset으로 초기화하는것만 하는방향으로(Keyvalue를 전역변수로)
        * Keyvalue는 String이므로 이차원배열이므로 fill으로 하는것이 더 좋음
          * fill으로 초기화하기(보류)
    * Client의 Form1이 꺼질때도 DB에서 Logout 처리되게 하기
      * Form2의 FormClose Event를 Form1의 FormClose 이벤트에 넣어주기(완료)(테스트 필요)
    * 문제전송 과정 변경
      * 현재는 DB의 Processing에서 문제전송을 함
        * Redis가 DB에서 문제번호를 검색해 꺼내서 문제를 직접 API로 보내주게 하기
    * [ToDo]
      * 개발시 필요한 정보들 정리해놓기(std = Student 등)
      * CoalaDownloader을 인증하는 방법 알아보기
        * 백신에서 막히는 경우를 예방하기 위해
  
---
 
 
 
</div>
</details>

# 2022년 3월

<details>
<summary>2022/03/03</summary>
<div markdown="1">
  
---

## 2022/03/04 [OFFLINE]

### [The Coala](https://github.com/urous3814/TheCoala_Dev/tree/main/03/03)

#### The Coala Client
  
  * 컴파일 관련 오류(offline compiler)
    * 컴파일 경로 변경
      * Temp에서 C:/Coala로 변경
    * 컴파일러 결함 보완
      * String 을 include 하는 내용 자동 추가하게 변경
  * DB 과부화 관련 수정
    * DB 접근 줄이고 api 로 기능 대체작업
  
---
 
</div>
</details>


<details>
<summary>2022/03/10</summary>
<div markdown="1">
  
---

## 2022/03/10 [Online]

### [The Coala](https://github.com/urous3814/TheCoala_Dev/tree/main/03/10)

#### Coala_Downloader
  
  * 전체적 구조 변경
    * 모양 그럴싸하게 바꾸고 최적화

#### The Coala Client
  
  * 자동 업데이트 기능 추가(Powershell 사용)
  * 컴파일 모드(온라인, 오프라인) 시각적 차이 구현
  * 티어별 아이콘 제작(미완)
  

#### 회의
  
  * 회의
    * 자동업데이트 버튼 만들기
      * 웹에서 직접 Coala 메인 파일 받을 수 있게 하기
      * 다운로더 파일, 다운로더 받아오게 만들기
      * 온라인, 오프라인 다운로더 만들기
    * 레벨별 아이콘(메달) 집어넣기
      * 코알라 클라이언트에 이미지 집어넣기 
        * 점수 구하는 부분 넣기(누적점수)
        * 랭킹으로 진행
    * 코알라 버전체크 API에서 뿌려주게 하기
  
---
 
</div>
</details>

<details>
<summary>2022/03/17</summary>
<div markdown="1">
  
---

## 2022/03/17 [OFFLINE]

### [The Coala](https://github.com/urous3814/TheCoala_Dev/tree/main/03/17)

#### The Coala Client
  
  * 중복실행 방지기능 추가(CMD활용)
    * 컴파일된 파일명 통일
    * 중복실행시 기존에 켜져있던 프로그램 꺼지게하는 기능 추가
  * 코알라 메신저 서비스 구현
    * API를 사용한 메세지 전송 기능을 구현
  
 
 #### The Coala Client
   * 코알라 서버 다운로더 제작
   * 코알라 메신저 서비스 구현
     * API를 사용한 메세지 전송 기능을 구현
 
 #### Coala_Downloader
  
  * Server Downloader 제작
  * Downloader 기능 추가
    * Remover Program, Auto-Update 기능 구현
    * API 안되는 이슈 해결
 
 ### [Physics Tracker](https://github.com/urous3814/dev/tree/main/Physics_Project)
 
 #### Python Tracker
   * Object Tracking 기능 구현

  
---
 
</div>
</details>

<details>
<summary>2022/03/21</summary>
<div markdown="1">
  
---

## 2022/03/21 [OFFLINE]

### [Physics Tracker](https://github.com/urous3814/dev/tree/main/Physics_Project)

#### Python Tracker
  
  * DB insert sql문 추가(보충설명)
    * Exp_Name, SECOND, Obj_x, Obj_y 등의 정보를 Mysql 서버의 DB에 저장
      * 하위 변경사항 설명
 
 #### Mysql Server
  * Mysql Server 구현
    * study_db(DB) / experiment(TABLE) 제작
DB Schema
|Field|Type|Null|
|------|---|---|
|Exp_Name|varchar(32)|No|
|Obj_X|float|No|
|Obj_Y|float|No|
|Obj_V|float|Yes|
|Obj_A|float|Yes|
|Obj_SETA|float|Yes|
|SECOND|float|No|

  
---
 
</div>
</details>
