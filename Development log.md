#UROUS3814 개발일지

날짜별 개발 내용을 서술한다.
02/14부터 기록한다.

## 2022/02/14

### 더 코알라

#### 코알라 서버

* ListBox2 접속학생 표기방법, 저장방법 변동(id -> id,name / ~~배열에 저장~~ )
  * SUNCHUL function 수정
   * name값 받아오는 sql 추가
  * Check_Login function 수정
   * logout시 표기되는 요소 id > name 수정
  * user interface 표기되는 요소 name 으로 수정
* Thread, redis서버 원격 종료(redis/RestAPI 사용) 수단 제작
 * RestAPI 기능 제작
 * Thread 기능추가, 수정필요
* id, name 값 제대로 저장 안된것들 수정(API, mysql)
 * teacher, teacher_name, teacher_id, Teacher, Teacher_Check 변수 제대로 매칭 안된 값들 수정, 변수 정리 및 통합 필요
