## 정수n을 입력받아 1부터 n 사이의 소수를 찾는 함수

잘못된 결과화면

<img width="750" height="50" alt="image" src="https://github.com/user-attachments/assets/a53b259a-9057-457e-8595-a37ad5804175" />

---

## ※이유

### 잘못된 결과를 나오게 한 나의 실수

<img width="672" height="380" alt="image" src="https://github.com/user-attachments/assets/57adce74-1527-4680-b031-8e522d1008aa" />


if (x == 2)

	std::cout << n << " ";
를 

for (int i = 1; i <= n; i++) {

	if (n % i == 0)
  
		x++;
    
 }

 안에 넣어서 출력을 하니, 
 
 ex) 4의 와같은 경우 3을 집어넣을 차례가 되어 3을 집어 넣어도, 이미 1, 2를 카운팅한 2가 x값에 들어가 있어 4를 결과화면에 출력해버린다. 4를 집어 넣을 차례가 되어도, 이미 1, 2를 카운팅한 2가 x값에 들어가 있어 4를 한번 더 출력한다. 
 
따라서 잘못된 결과 화면처럼 4는 소수가 아님에도 4가 두번 들어가있는 것을 볼 수 있다.

x의 값을 모두 카운팅 한 후에 x가 2이면 n값을 출력하도록 바꾸어야 한다.

### 올바른 코딩

<img width="652" height="338" alt="image" src="https://github.com/user-attachments/assets/29501abe-a2a1-4955-bbc7-af66453e8403" />




### 올바른 결과화면

<img width="434" height="54" alt="image" src="https://github.com/user-attachments/assets/cf934d15-916c-4396-b8ac-c3e26fa885c9" />
