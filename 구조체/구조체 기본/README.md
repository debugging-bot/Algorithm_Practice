# 구조체 기본

Visual Studio 에서는 보안 경고를 오류로 처리해 버려서 strcpy가 오류로 나온다. "보안때문에 막아둔 컴파일 오류"

해결방법
-> strcpy_s(s.name, sizeof(s.name), "승직");
-> #define _CRT_SECURE_NO_WARNINGS

## 결과화면

<img width="199" height="90" alt="{8542E349-A74B-412B-B76B-554F45C2ED59}" src="https://github.com/user-attachments/assets/c81a928f-5ede-4852-80ed-66f35096245b" />
