# Info
[Link](https://boj.kr/25571)
## 💡 풀이 방법 요약

### 1
0 ~ n 까지 증감증이 깨지면 안됨

깨지기 전의 인덱스들 조합 개수
깨지고 또 다시 되는 인덱스 조합의 갯수 계속 구하고 더해

### 2
지그재그 개수를 늘려나가기

#### 성공
count ++

이전 두 값의 차와 이번 두 값의 차가 0보다 작을 경우
이전 두 값이 0이지만 이번은 0이 아닌 경우

#### 실패
일단 지금까지의 count로 부분배열 구하고 count 리셋

단, 이번 값이 0이 아니면 1부터 시작

## 👀 실패 이유
1. calGroupCount -> 2중 for문으로 시간초과
2. str.length == 1일 때 0 출력하고 continue 해야하는데 return 해버려서 다음 테케 안돌아버림 ;;;;;;;;;

## 🙂 마무리
