a=input()
b=input()
if a=='가위':
    if b=='가위':
        print('비겼습니다.')
    elif b=='바위':
        print('첫번째 사람이 졌습니다.')
    elif b=='보':
        print('첫번째 사람이 이겼습니다.')

if a=='바위':
    if b=='가위':
            print('첫번째 사람이 이겼습니다.')
    elif b=='바위':
            print('비겼습니다.')
    elif b=='보':
            print('첫번째 사람이 졌습니다.')

if a=='보':
    if b=='가위':
        print('첫번째 사람이 졌습니다.')
    elif b=='바위':
        print('첫번째 사람이 이겼습니다.')
    elif b=='보':
        print('비겼습니다.')

else:
     print('오류입니다.')
