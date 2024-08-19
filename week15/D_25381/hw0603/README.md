# Info
[25381 ABBC](https://boj.kr/25381)

## 💡 풀이 방법 요약
결국 B 개수가 문제이다...

서브테스크 1번을 기준으로 생각을 해 보면 부분 문자열 `AB`를 만들 수 있는 개수가 정답이 된다.

여기에 `C`가 등장하면 부분 문자열 `AB`, 부분 문자열 `BC`를 만들 수 있는 개수가 정답이 되면 참 좋겠지만.. 그건 어디까지나 `B`가 충분히 많을 때 이야기이다.

`B`의 개수가 부족할 때는, `AB`를 만들 때 `B`를 썼다면 `BC`를 만들 때는 사용하지 못한다.  
즉, 정답의 상한이 `B`의 개수에 의해 결정되게 된다.
따라서 `min(AB 개수 + BC 개수, B 개수)` 가 정답이 된다.

## 👀 실패 이유
5점이라도 받으려고 A,B만 있을때만 구현해서 제출함

## 🙂 마무리
그리디같긴 한데 규칙이 생각이 안 나서 5점이라도 받으려고 코드 짜다 보니 규칙이 대충 보였음  
파이썬 1등 좋은데요?