# Info
[Link](https://boj.kr/23829)
## 💡 풀이 방법 요약
기준 점부터 각 좌표까지의 거리가 두 좌표의 차이로 정의되므로, 그들의 합은 나무의 좌표가 기준점보다 왼쪽에 있는지 오른쪽에 있는지에 따라 식이 달라진다.

왼쪽에 있는 경우 기준값 - 나무 위치 이므로

기준 값 * 왼쪽에 있는 나무 개수 - 왼쪽에 있는 나무들의 좌표 합 이다.

오른쪽에 있는 경우 나무 위치 - 기준 값 이므로

오른쪽에 있는 나무들의 좌표 합 - 기준 값 * 오른쪽에 있는 나무 개수다.

나무의 좌표 합은 누적합으로 구하고, 왼쪽 오른쪽은 이분탐색을 써서 구하면 된다.

## 👀 실패 이유

정렬을 누적합을 구한 뒤에 해버렸다...

## 🙂 마무리