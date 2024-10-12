```c++
std::make_pair
```

可以不需要知道类型，与普通的 pair 声明的区别。



multimap, 相同 key 可以有不同的 val 

```c++
void test2() {
    set<int> s{3, 1, 4, 2, 6};
    cout << s.count(3) << "\n";
    auto it = find(s.begin(), s.end(), 3);  // O(n)
    auto it1 = s.find(3);// O(logn)
    auto it3 = lower_bound(s.begin(), s.end(), 3); // set不支持随机访问迭代器  O(n)
    auto it4 = s.lower_bound(3); // O(logn)
    //cout << *it << "\n";
}
```

其中

```c++
find(s.begin(), s.end(), 3);
```

这种是通用的写法，时间复杂度为O(n)

并且

```c++
s.count(3)
```

的底层实现为

```c++
s.find(3)
```



### 迭代器的类型

输入输出迭代器 <- 前向迭代器 <- 双向迭代器 <- 随机访问迭代器

### 迭代器的删除

不同容器在删除迭代器的失效情况不同

- 迭代器指向删除点的迭代器总是失效的

- vector: 删除点之后的迭代器都会失效

  ```cpp
  std::vector<int> v{1, 2, 3, 4};
  auto it = v.begin() + 2;
  v.erase(v.begin() + 1);
  // it 失效  it == v.end()
  ```

- deque:所有迭代器都会失效（除非删除点在前端或后端）

- list/set/map 其他迭代器保持有效

  但是在我的环境中测试，vector 和 deque 同样有效

  ```cpp
  it = v.erase(it); // v.erase(it) 返回被删除元素的下一个
  ```

  
