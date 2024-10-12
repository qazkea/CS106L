### Key Takeways
- 什么时候程序提示输入
- cin 跳过 token 前面的 空白字符， 但是不会消耗掉后面的



### 3 reason why >> whith cin is a nightmare

- cin 读入一整行到缓冲区，但是只提取空白字符分离的token
- 如果buffer里面有垃圾，cin 不会及时提示输入
- cin 失败一次 fail位打开，之后会一直失败



getline 会读取一整行，并且消耗掉换行符



