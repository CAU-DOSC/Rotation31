1. Trivial.c -> 장동훈
        외부에 temp변수를 선언하고 str의 끝변수를
	저장한뒤에 한 칸씩 밀어준다.
	이를 d번 반복한다.
2. Juggle.c -> 강명석
3. bw.c -> 양수영
4. reverse.c -> 김동욱
	blockswap을 이용한 Rotate방식
	d에 해당하는 사이즈만큼 동적할당
	배열의 d번째의 데이터 까지 동적메모리에 input
	나머지 str의  데이터를 이동
	동적메모리에 저장된 데이터를 str에 삽입 
5. main ->김재범
	실험 결과
STRLength	ROTATEdistance 	T.trivial	J.juggle	T.bw		T.reverse
42		29		0.343		0.047		0.031		0.031
760		-255		57.591		0.312		0.343		0.281
672		-371		72.645		0.343		0.250		0.281

6. header -> 박승수
 
