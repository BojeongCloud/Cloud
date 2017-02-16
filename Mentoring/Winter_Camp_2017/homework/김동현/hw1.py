first=input("첫 번째: ")
second=input("두 번째: ")

if first == "가위":
    if second == "가위":
        print("비겼습니다.")
    elif second == "바위":
        print("두 번째 사람이 이겼습니다.")
    elif second == "보":
        print("첫 번째 사람이 이겼습니다.")
    else:
        print("잘못된 입력입니다.")
if first == "바위":
    if second == "가위":
        print("첫 번째 사람이 이겼습니다.")
    elif second == "바위":
        print("비겼습니다.")
    elif second == "보":
        print("두 번째 사람이 이겼습니다.")
    else:
        print("잘못된 입력입니다.")
if first == "보":
    if second == "가위":
        print("두 번째 사람이 이겼습니다.")
    elif second == "바위":
        print("첫 번째 사람이 이겼습니다.")
    elif second == "보":
        print("비겼습니다.")
    else:
        print("잘못된 입력입니다.")