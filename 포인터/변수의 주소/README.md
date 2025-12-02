# 변수의 주소

C++에서 &c는 문자열로 취급한다. 그래서 주소값 그 자체를 출력하는것이 아니라 그 주소를 '문자열 시작 주소'라고 생각하고, \0(널 문자) 나올때까지 계속 출력

그 결과

<img width="845" height="106" alt="image" src="https://github.com/user-attachments/assets/12619126-a364-4649-8e54-e4ad5d887b5d" />

이와같이 이상한 출력값이 나온다.

해결 방법으로는 

주소를 void*로 캐스팅 하거나
---
std::cout << "c의 주소 : " << static_cast<void*>(&c) << "\n";

intptr_t로 주소값을 정수로 출력 하거나
---
#include < cstdint >

std::cout << "c의 주소 : " << reinterpret_cast<intptr_t>(&c) << "\n";


포인터 타입을 명시적으로 바꾸어 출력해야 한다.
---
std::cout << "c의 주소 : " << (void*)&c << "\n";

## 결과화면
<img width="299" height="67" alt="image" src="https://github.com/user-attachments/assets/4668ba76-392a-4f71-94d6-04ed6bdda4c3" />

