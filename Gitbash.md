# Git

## git bash 사용법



##### 원격저장소를 내 로컬 저장소로 만드는 방법

(1) 원격 저장소 clone 하기

```bash
	git clone 원격 저장 주소
```

![image-20200430143257104](C:\Users\ksua0\AppData\Roaming\Typora\typora-user-images\image-20200430143257104.png)

(2) git commit 시 Please tell me who you are 이라고 뜰 경우(처음 1회 만 인증)

```bash
	git config --global user.email "you@example.com"
	git config --global user.name "Your Name"
```

![image-20200430142950397](C:\Users\ksua0\AppData\Roaming\Typora\typora-user-images\image-20200430142950397.png)



##### 원격저장소에 파일 저장하기

(1) 원격저장소에 저장할 파일을 스테이징 (동기화 할 폴더로 경로를 맞춘 후)

- 파일 한 종류만 스테이징 할 경우

```bash
	git add "파일 이름"
```

- 폴더를 스테이징 할 경우

```bash
	git add .
```



(2) 원격저장소에 커밋

```bash
	git commit -m "add file name" 
```

​       ex) git commit -m "add first.c" 외에 change file, mod, del  etc. 사용 가능



(3) 원격저장소에 푸쉬

```bash
	git push origin master
```



##### 원격 저장소 파일 상태 확인하기

(1) 원격 저장소에 저장되지 않은 파일 있을 경우 Untracked files 목록이 나타남

``` bash
	git status
```

![image-20200430142443203](C:\Users\ksua0\AppData\Roaming\Typora\typora-user-images\image-20200430142443203.png)