print('가위, 바위, 보 중 하나를 입력하세요')

first = input('첫 번째 사람: ')
second = input('두 번째 사람: ')

if first == '가위':
    if second == '보':
        print('첫 번째 사람이 이겼습니다.')
    elif second == '바위':
        print('두 번째 사람이 이겼습니다.')
    elif second == '가위':
        print('비겼습니다.')
    else:
        print('잘못 된 입력입니다.')

elif first == '바위':
    if second == '가위':
        print('첫 번째 사람이 이겼습니다.')
    elif second == '보':
        print('두 번째 사람이 이겼습니다.')
    elif second == '바위':
        print('비겼습니다.')
    else:
        print('잘못 된 입력입니다.')

elif first == '보':
    if second == '바위':
        print('첫 번째 사람이 이겼습니다.')
    elif second == '가위':
        print('두 번째 사람이 이겼습니다.')
    elif second == '보':
        print('비겼습니다.')
    else:
        print('잘못 된 입력입니다.')

else:
    print('잘못 된 입력입니다.')
