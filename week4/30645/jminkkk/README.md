#
 Info
[30645 인형 전시](https://www.acmicpc.net/problem/30645)

## 💡 풀이 방법 요약
1. 입력받은 인형을 길이로 정렬
2. 가장 앞 열부터 길이가 작은 인형을 둔다는 생각으로 진행
3. 이때, 각 열의 최근 둔 인형의 길이를 저장한 past 배열 이용 
4. i열에 인형을 둘 때, past[i] 랑 비교 
5. 현재값이 더 크면 인형을 두고 갯수++ , past[i] = 현재값
6. 이때 전값과 동일한 경우 인형을 두지 않는 것이 더 낫다.

## 👀 실패 이유
1. past[i]와 현재의 값이 동일한 경우, 그냥 두도록 두어서 아래와 같은 경우 최적이 아님
```
2 2
5
2 2 2 4 4
```
2. 행의 수를 따로 체크하지 않기 때문에 판이 다 채워졌을 경우, break 해야 함
```
3 2
8
1 2 3 4 66 7 8 9 9
```
## 🙂 마무리
