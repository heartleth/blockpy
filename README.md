# blockpy
 
blockpy는 python을 더 귀찮게 쓸 수 있게 해주는 프로그램입니다.
[여기](https://github.com/heartleth/blockpy/blob/master/blockpy/Debug/blockpy.exe)서 다운받으시거나 직접 빌드하시면 됩니다.
직접 빌드하려면 [main.cpp](https://github.com/heartleth/blockpy/blob/master/blockpy/blockpy/main.cpp) 만 빌드하시면 됩니다.  
파이선이 없으면 돌아가지 않습니다.

## 문법
    +-------------------------+
    | for i in range(10):     |
    | +-----------------------+
    | | print(str(i), end='') |
    | +-----------------------+
    | | print(" hello")       |
    | +-----------------------+
    +-------------------------+

대략 이~~딴~~런식으로 코딩하시면 됩니다. 확장명은 `.bpy` 입니다. 근데 좀 깐깐해서 스페이스에 자유롭지 못하고 `| ` 랑 탭을 바꾼다고 생각하시면 됩니다. 또 마지막 글자는 무조건 | 또는 +여야 합니다. 스페이스는 안됩니다.

## 실행법
path 설정을 하던지 직접 찾아가던지 해서 `blockpy foo.bpy` 를 cmd로 실행하면 됩니다. 아니면 bpy 파일을 직접 끌어다 놓아도 됩니다.
