### 流

istringstream

ostringstream

这两个都是 stringstream 的子类



4 bits indicate the state of the stream

![](C:\Users\Administration\Desktop\image-20240930090442601.png)

```c++
iss.good()
```

流可以被解释为布尔值， 为真 表示 fail 位关闭。

同时 

```c++
iss >> result
```

返回流



关于刷新缓冲区

endl   表示换行+刷新缓冲区，送到控制台。

并且默认 cin 会刷新 cout 的缓冲区，即同步



