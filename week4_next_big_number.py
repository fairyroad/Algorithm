#세번째 문제_ 다음 큰 숫자
#다음 큰 숫자의 정의
#조건 1. n의 다음 큰 숫자는 n보다 큰 자연수 입니다.
#조건 2. n의 다음 큰 숫자와 n은 2진수로 변환했을 때 1의 갯수가 같습니다.
#조건 3. n의 다음 큰 숫자는 조건 1, 2를 만족하는 수 중 가장 작은 수 입니다.

def solution(n):
    answer = n+1 #일단 answer의 초기값을 자기보다 1만큼 클때로 둠(조건1을 만족시키기 위해)
    bin_n=bin(n) #binary로 바꾼 후의 개수를 셈(조건 2를 만족시키는 것을 확인해보기 위해
    n_one=bin_n.count('1')
    while True:
        if bin(answer).count('1')==n_one: #조건2에서 1의 개수가 같으면 정답
            return answer
        answer+=1 #아니면 그 다음으로 증가시킴(최소를 찾기위해 이렇게 하는것!!)
