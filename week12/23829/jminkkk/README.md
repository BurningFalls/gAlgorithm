# Info
[Link](https://boj.kr/23829)
## 💡 풀이 방법 요약

점수 = |사진을 찍은 위치 - 나무까지의 거리 합|

![image](https://gist.github.com/user-attachments/assets/74c35b8c-d8b6-4bf0-8944-26c8c028f997)

1. 누적합으로 p들을 저장
2. 이분탐색으로 x보다 작은 수 중 가장 큰 pi의 인덱스 c를 구함
3. sum[n] - 2 * sum[c] + x * (2c - n)

## 👀 실패 이유
+ p 정렬 안함
+ long 범위 신경안씀

## 🙂 마무리
