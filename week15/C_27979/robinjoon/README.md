# Info
[Link](https://boj.kr/27979)
## 💡 풀이 방법 요약

**앞으로 보낼 대상이 있다면, 그들만 보내는 것이 최소값.**

제일 뒤를 최대값이라 상정. 만약 앞에 이보다 큰게 있다면 제일 뒤는 앞으로 보낼 대상이 됨. 이때, 이전에 앞으로 보낼 대상이라 판단된 것들도 포함해서 봐야 함. 그런데, 그 사이에 제일 뒤에 있는 것 보다 작은게 있다면 그것도 앞으로 보낼 대상이 됨. 그런데, 이렇게 하면 각 위치의 앞에 있는 모든 것들과 비교를 해야 하므로, O(n^2)이 된다.

**어쨋든 정답은 정렬된 상태. => 우선 정렬을 통해 정답 상태가 뭔지 알 수 있다.**

**정답까지 다가가는 각 상태에서 최선의 선택이 정해져 있다. 그걸 log(n)에 알아낼 수 있으면 된다. 최악의 경우가 반대로 정렬된 것일테니까.**

**특정 인덱스를 앞으로 보내는 결정을 할 때는, 그보다 이미 앞에 있는 것 들 중 앞으로 보내야 하는 대상이 되는 것 중, 그 인덱스의 값이 가장 클 때이다.**

**정렬된 상태인 애랑 비교해서, 앞으로 보내야 하는 대상은 우선 정렬 상태와 현재 인덱스가 다르다. 단, 뒤에서부터 보았을 때, 이미 이동이 결정된 애들을 제외하면 인덱스가 같은 경우는 앞으로 보내는 대상이 아니다.**

**그러면 필요한 것은 뒤에서부터 보았을 때, 앞으로 보내지는게 확정된 녀석의 개수를 누적해서 비교에 반영**해야 한다.

## 👀 실패 이유

5

2 7 6 10 4 => 6, 6 2 7 10 4 => 4, 4 6 2 7 10 => 2, 2 4 6 7 10

7

2 3 2 3 1 2 4 => 2 2 3 2 3 1 4 => 2 2 2 3 3 1 4 => 1 2 2 2 3 3 4

1 2 2 2 3 3 4

4

1 5 2 6 => 2 1 5 6 => 1 2 5 6

1 2 5 6

4 1 6 3 2 => 3 1 6 2 => 2 3 1 6 => 1 2 3 6

5

1 5 2 0 9 => 2 1 5 0 9 => 1 2 5 0 9 => 0 1 2 5 9

0 1 2 5 9

어 씨 뭐야 정렬된거랑 다른 위치 개수를 길이에서 뺀게 계속 답이네 아 아니네...

## 🙂 마무리