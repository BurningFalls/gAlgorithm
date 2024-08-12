# Info
[Link](https://boj.kr/20438)
## 💡 풀이 방법 요약

이런 배열을 선언함
```Java
int[] check = new int[n+3];
```
`check[i] == 1`이면 i번째 학생이 출석을 한 것 

1. 문제에서 시키는대로 출석 처리
2. 누적합을 통해 `sum[i] = i 번째까지 출석을 한 학생의 수` 가 되게 함
3. 구간합 계산

## 👀 실패 이유

```Java
sb.append(e-s+1 - sum[e]-sum[s-1]).append("\n");
```
괄호 어디갔어!!!

## 🙂 마무리
