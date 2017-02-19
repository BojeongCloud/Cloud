choice = ['가위','바위','보']    # 리스트로 입력 값 정해주기
win = [ [0,-1,1], [1,0,-1], [-1,1,0] ]  # 2차원 리스트로 승리 여부를 정해주기

# 두 사람의 선택을 입력
first=input("첫 번째 사람: ")
second=input("두 번째 사람: ")

# 가위,바위,보 이외의 예외 입력에 대한 처리
if (first not in choice) or (second not in choice):
    print("잘 못 입력했습니다. ")
else:
    # 문자열을 숫자로 바꿔주는 부분. 2차원 리스트를 사용하기 위함
    f=choice.index(first)
    s=choice.index(second)
    
    if win[f][s] == 1: # 1이면 첫번째 사람의 승리
        print("첫 번째 사람이 승리했습니다. ")
    elif win[f][s] == -1: # -1이면 두번째 사람
        print("두 번째 사람이 승리했습니다. ")
    else: # 0 이면 비김
        print("비겼습니다. ")