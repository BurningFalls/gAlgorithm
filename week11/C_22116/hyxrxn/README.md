# Info
[창영이와 퇴근](https://www.acmicpc.net/problem/22116)

## 💡 풀이 방법 요약
1. 각 좌표별 정보를 입력받는다.
2. 각 좌표에 도착할 때의 최대 경사의 최솟값을 2000000000로 초기화한다.
3. (0, 0) 부터 시작해 연결된 좌표의 최대 경사의 최솟값을 갱신한다.
    - 최대 경사의 최솟값이 가장 작은 좌표를 택하고 방문 처리를 한다.
    - 연결된 좌표를 탐색하며 이전 좌표에서 다음 좌표로 갈 때의 경사와 이전 좌표까지의 경사를 비교해 큰 값이 이전 좌표를 거쳐 다음 좌표로 갈 때의 최댓값이다.
    - 이 최댓값과 기존의 최솟값을 비교해 최솟값을 갱신한다.
4. (n-1, n-1) 의 최대 경사의 최솟값을 출력하고 종료한다.

## 👀 실패 이유
1. 갈 수 있는 길을 모두 시도 (시간 초과)
2. 방문 처리 실수 (메모리 초과)

## 🙂 마무리
분류 봤습니다
