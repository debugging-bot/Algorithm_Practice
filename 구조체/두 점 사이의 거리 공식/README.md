# 두 점 사이의 거리 공식

두 점사이의 거리 공식: 
<img width="244" height="37" alt="{A9736D3D-12FC-4280-92FE-C8F1CAD32D65}" src="https://github.com/user-attachments/assets/a2b7b943-262d-4432-9068-76862f89963f" />

루트인 sqry를 사용하기 위해서는 #include <cmath> 가 필요하다.

## sqrt((double)(x * x + y * y)) 에 (double)이 필요한 이유

-> 정수 연산으로 인한 문제를 미리 방지하기 위해서이다. 

<img width="460" height="404" alt="{A07F931C-4AD2-48CB-A4C9-312F54083B9B}" src="https://github.com/user-attachments/assets/c335c314-b130-4a09-9b58-0794a58ff7dc" />

<img width="513" height="297" alt="{0FC3B043-DA9A-4CD9-B45C-150A2364BADA}" src="https://github.com/user-attachments/assets/9b2a44b5-9b87-4109-ba9d-5b1a0acaeb15" />

<img width="691" height="278" alt="{D37D4029-2800-416A-9643-14447DE460D6}" src="https://github.com/user-attachments/assets/df183ca6-ced2-4632-b372-f76ba2dfe58b" />

큰수가 들어가면 값이 int의 최대값인 2,147,483,647 을 넘어서는 순간 쓰레기 값으로 바뀐다. 그래서 sqrt에 전달되기 전에 double로 바꿔주는 거다.

또한 산술 연산에서 한쪽만 double이면, 나머지도 자동으로 double로 변환된다. ('산술 변환' 이라고 한다.)

## 결과화면

<img width="384" height="82" alt="{7F7DACBA-52CE-4CF4-AB45-FF04187565BC}" src="https://github.com/user-attachments/assets/67c0350c-8fb2-4054-a4b0-ed95eb579fb7" />
